#include "BuzzerMusic.h"

BuzzerMusic::BuzzerMusic(int pinSensor)
{
	_pinSensor = pinSensor;
	pinMode(_pinSensor, OUTPUT);
}

void BuzzerMusic::play(int *song)
{
	int *song_melody  = song[0];
	int *song_tempo  = song[1];
	int song_size = song[2];

	for (int thisNote = 0; thisNote < song_size; thisNote++)
	{
		beep(song_melody[thisNote], song_tempo[thisNote]);
	}  
}

void BuzzerMusic::beep(int note, int duration)
{
	if (note == 0)
	{
		delay(duration);

	} else
	{
		tone(_pinSensor, note);
		delay(duration);
		noTone(_pinSensor);
		delay(50);

	}

}