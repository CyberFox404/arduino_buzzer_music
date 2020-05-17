#include "BuzzerMusic.h"
#include "MahnaMahna.h"
#include "star_wars.h"
#include "mario_main.h"
#include "mario_underworld.h"

#define PIN_BUZZER  8 // pin buzzer

BuzzerMusic music( PIN_BUZZER );

void setup()
{
	//Serial.begin( 9600 );
	//music.song( star_wars );
	//music.song( mario_main );
	//music.song( mario_underworld );
	music.song( MahnaMahna );

}

void loop()
{
	music.play(); 

}