/*
 * software_timer.h
 *
 *  Created on: Oct 4, 2024
 *      Author: Phan Duc Loi
 */
#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer_flag[10];
void setTimer(int index, int duration);
void timerRun();
#endif /* INC_SOFTWARE_TIMER_H_ */
