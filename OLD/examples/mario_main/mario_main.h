int mario_main_melody[] = {
	NOTE_E7, NOTE_E7, 0, NOTE_E7,
	0, NOTE_C7, NOTE_E7, 0,
	NOTE_G7, 0, 0,  0,
	NOTE_G6, 0, 0, 0,
 
	NOTE_C7, 0, 0, NOTE_G6,
	0, 0, NOTE_E6, 0,
	0, NOTE_A6, 0, NOTE_B6,
	0, NOTE_AS6, NOTE_A6, 0,
 
	NOTE_G6, NOTE_E7, NOTE_G7,
	NOTE_A7, 0, NOTE_F7, NOTE_G7,
	0, NOTE_E7, 0, NOTE_C7,
	NOTE_D7, NOTE_B6, 0, 0,
 
	NOTE_C7, 0, 0, NOTE_G6,
	0, 0, NOTE_E6, 0,
	0, NOTE_A6, 0, NOTE_B6,
	0, NOTE_AS6, NOTE_A6, 0,
 
	NOTE_G6, NOTE_E7, NOTE_G7,
	NOTE_A7, 0, NOTE_F7, NOTE_G7,
	0, NOTE_E7, 0, NOTE_C7,
	NOTE_D7, NOTE_B6, 0, 0
};

int mario_main_tempo[] = {
 
 125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
 
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
 
	166, 166, 166,
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
 
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
 
	166, 166, 166,
	125, 125, 125, 125,
	125, 125, 125, 125,
	125, 125, 125, 125,
};

int mario_main_size = sizeof(mario_main_tempo)/sizeof(int);

int mario_main[]= {mario_main_melody, mario_main_tempo, mario_main_size};