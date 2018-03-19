// this file contains the main function of our project

#include "sound.h"
#include<stdlib.h>

int main(void){
	while(1){	//loop forever
		//run system command "arecord" to record 1 sec of wav
		system("arecord -r16000 -c1 -f S16_LE -d1 test.wav");
		//display wav header
		dispWAVHeader("test.wav");
		//display wav strength as decibel value
		break;
	}
	return 0;
}
