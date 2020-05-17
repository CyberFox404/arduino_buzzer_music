int star_wars_melody[] = {
	NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, 
	0, 
	NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C5, NOTE_A4, 
	0, 
	NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_FS5, 
	0, 
	NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_AS4, NOTE_C5, 
	0, 
	NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_E5, 
	0, 
	NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_FS5, 
	0, 
	NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_AS4, NOTE_C5, 
	0, 
	NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, 
	0

};

int star_wars_tempo[] = {
	500, 500, 500, 350, 150, 500, 350, 150, 650, 
	500, 
	500, 500, 500, 350, 150, 500, 350, 150, 650, 
	500, 
	500, 300, 150, 500, 325, 175, 125, 125, 250, 
	325, 
	250, 500, 325, 175, 125, 125, 250, 
	350, 
	250, 500, 350, 125, 500, 375, 125, 650, 
	500, 
	500, 300, 150, 500, 325, 175, 125, 125, 250, 
	325, 
	250, 500, 325, 175, 125, 125, 250, 
	350, 
	250, 
	500, 375, 125, 500, 375, 125, 650, 
	650
};

int star_wars_size = sizeof(star_wars_tempo)/sizeof(int);

int star_wars[]= {star_wars_melody, star_wars_tempo, star_wars_size};