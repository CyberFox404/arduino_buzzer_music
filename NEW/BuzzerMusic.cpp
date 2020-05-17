#include "BuzzerMusic.h"

BuzzerMusic::BuzzerMusic( int pinSensor )
{
	_state = BEEP_PLAY;
	_pinSensor = pinSensor;
	_counter_last = 1;
	_counter = 0;
	_debug = 0;
	_song = 0;

	pinMode(_pinSensor, OUTPUT);
}


void BuzzerMusic::song( int *song )
{
	song_melody  = song[0];
	song_tempo  = song[1];
	song_size = song[2];
	_song = 1;
	
}


void BuzzerMusic::debug( int deb )
{
	_debug = deb;

}


void BuzzerMusic::play( int repeate )
{
	if(!_song) return;
	
	if (_state == BEEP_PLAY)
	{
		_currentMillis = millis();

		if((_beep == 0) && (_counter == _counter_last) && (_currentMillis - _previousMillis >= song_tempo[_counter] ))
		{
			_beep++;
			_previousMillis = millis();
			noTone(_pinSensor);
			

		} else if((_beep == 1) && (_counter == _counter_last) && (_currentMillis - _previousMillis >= 10))
		{
			_counter++;
			
		} else if (_counter != _counter_last)
		{
			_beep = 0;
			_counter_last = _counter;
			_previousMillis = millis();
			if(song_melody[_counter] != 0) 
			{
				tone(_pinSensor, song_melody[_counter], song_tempo[_counter]);

				if (_debug)
				{
					Serial.print("Playing: ");
					Serial.print(" (");
					Serial.print(song_melody[_counter], 10);
					Serial.print(") ");
					Serial.println(song_tempo[_counter], 10);

				}

			} else 
			{
				if (_debug)
				{
					Serial.print("Pausing: ");
     				Serial.println(song_tempo[_counter] , 10);

     			}
			}

			

		}

		if (_counter >= song_size)
		{

			if (repeate) 
			{
				_counter = 0;

			} else 
			{
				_state = BEEP_STOP;

			}
		}
	}
}


void BuzzerMusic::stop()
{
	_state = BEEP_STOP;

}


void BuzzerMusic::start()
{
	_state = BEEP_PLAY;
	_counter = 0;

}
