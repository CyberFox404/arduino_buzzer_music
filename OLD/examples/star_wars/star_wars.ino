#include <BuzzerMusic.h>
#include "star_wars.h"

#define PIN_BUZZER  8 // pin buzzer

BuzzerMusic music(PIN_BUZZER);

void setup(){
	music.play(star_wars);

}

void loop(){}