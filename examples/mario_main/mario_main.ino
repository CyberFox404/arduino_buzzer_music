#include <BuzzerMusic.h>
#include "mario_main.h"

#define PIN_BUZZER  8 // pin buzzer

BuzzerMusic music(PIN_BUZZER);

void setup(){
	music.play(mario_main);

}

void loop(){}