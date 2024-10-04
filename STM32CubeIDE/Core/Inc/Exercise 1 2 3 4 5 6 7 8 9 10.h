/*
 * Exercise 1.h
 *
 *  Created on: Oct 4, 2024
 *      Author: Phan Duc Loi
 */

#ifndef INC_EXERCISE_1_H_
#define INC_EXERCISE_1_H_
#include "main.h"

void init_exercise1();
//void run_exercise1();
extern int led_buffer[4];
void display7SEG(int dem);
void update7SEG(int index);
void updateClockBuffer(int hour, int minute);
void updateLEDMatrix0(int index);
void updateLEDMatrix1(int index);
void updateLEDMatrix2(int index);
void updateLEDMatrix3(int index);
void updateLEDMatrix4(int index);
void updateLEDMatrix5(int index);
void updateLEDMatrix6(int index);
void updateLEDMatrix7(int index);




#endif /* INC_EXERCISE_1_H_ */
