/*
 * software_timer.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Phan Duc Loi
 */
#include "software_timer.h"
int timer_counter[10];
int timer_flag[10];
void setTimer(int index, int duration){
	timer_counter[index]=duration;
	timer_flag[index]=0;
}
void timerRun(){
	for (int i=0;i<10;i++){
		if (timer_counter[i]>=0){
			timer_counter[i]--;
			if(timer_counter[i]<=0){
				timer_flag[i]=1;
			}
		}
	}
}


