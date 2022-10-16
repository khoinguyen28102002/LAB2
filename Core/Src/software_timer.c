/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2022
 *      Author: USER
 */


#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;
int TIME_CYCLE = 10;

void setTimer1(int duration){
	timer1_counter = duration/TIME_CYCLE;
	timer1_flag = 0;
}
void timerRun(){
	timer1_counter--;
	if(timer1_counter <= 0){
		timer1_flag = 1;
	}
}
