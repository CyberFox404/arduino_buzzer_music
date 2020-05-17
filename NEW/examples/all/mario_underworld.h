int mario_underworld_melody[] = {
	NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
	NOTE_AS3, NOTE_AS4, 0,
	0,
	NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
	NOTE_AS3, NOTE_AS4, 0,
	0,
	NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
	NOTE_DS3, NOTE_DS4, 0,
	0,
	NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
	NOTE_DS3, NOTE_DS4, 0,
	0, NOTE_DS4, NOTE_CS4, NOTE_D4,
	NOTE_CS4, NOTE_DS4,
	NOTE_DS4, NOTE_GS3,
	NOTE_G3, NOTE_CS4,
	NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
	NOTE_GS4, NOTE_DS4, NOTE_B3,
	NOTE_AS3, NOTE_A3, NOTE_GS3,
	0, 0, 0
};

int mario_underworld_tempo[] = {
	125, 125, 125, 125,
	125, 125, 250,
	500,
	125, 125, 125, 125,
	125, 125, 250,
	500,
	125, 125, 125, 125,
	125, 125, 250,
	500,
	125, 125, 125, 125,
	125, 125, 250,
	250, 83, 83, 83,
	250, 250,
	250, 250,
	250, 250,
	83, 83, 83, 83, 83, 83,
	150, 150, 150,
	150, 150, 150,
	500, 500, 500
};

int mario_underworld_size = sizeof(mario_underworld_tempo)/sizeof(int);

int mario_underworld[]= {mario_underworld_melody, mario_underworld_tempo, mario_underworld_size};