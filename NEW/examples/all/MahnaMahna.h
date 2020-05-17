int MahnaMahna_melody[] = {
	NOTE_CS6, NOTE_C6, NOTE_B5, NOTE_AS5, NOTE_F6, NOTE_GS6, NOTE_AS6, NOTE_G6, NOTE_DS6, 
	0, 
	NOTE_CS6, NOTE_C6, NOTE_B5, NOTE_AS5, NOTE_F6, NOTE_GS6, NOTE_AS6, NOTE_G6, 
	0, 
	NOTE_CS6, NOTE_C6, NOTE_B5, NOTE_AS5, NOTE_F6, NOTE_GS6, NOTE_F6, NOTE_G6, 
	NOTE_DS6, NOTE_F6, NOTE_G6, NOTE_DS6, NOTE_F6, NOTE_G6, NOTE_DS6, NOTE_F6, 
	NOTE_G6, NOTE_DS6, NOTE_C6, NOTE_AS5, NOTE_DS6, NOTE_DS6, NOTE_DS6, NOTE_DS6

};

int MahnaMahna_tempo[] = {
	120 , 180, 120, 360, 360, 480, 120, 180, 480, 
	240, 
	120, 180, 120, 360, 360, 180, 360, 480, 
	240, 
	120, 180, 120, 360, 360, 480, 120, 180, 
	360, 120, 180, 360, 120, 240, 360, 120, 
	240, 120, 240, 120, 360, 360, 480, 360
};

int MahnaMahna_size = sizeof(MahnaMahna_tempo)/sizeof(int);

int MahnaMahna[]= {MahnaMahna_melody, MahnaMahna_tempo, MahnaMahna_size};