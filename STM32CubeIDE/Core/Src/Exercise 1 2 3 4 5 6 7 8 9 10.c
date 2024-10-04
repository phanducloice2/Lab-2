/*
 * Exercise 1 2 3 4 5 6 7 8 9 10.c
 *
 *  Created on: 4 thg 10, 2024
 *      Author: Phan Duc Loi
 */
/*
 * Exercise 1.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 1 2 3 4 5 6 7 8 9 10.h"
//int count=10;
//const int MAX_LED=4;
//int index_led=0;
const int MAX_LED_MATRIX=9;
int index_led_matrix=0;
uint8_t matrix_buffer[8];
int led_buffer[4]={1,5,0,8};
void updateLEDMatrix0(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}

void updateLEDMatrix1(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateLEDMatrix2(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateLEDMatrix3(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateLEDMatrix4(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateLEDMatrix5(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
				HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
				HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
				HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
				HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, RESET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateLEDMatrix6(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, RESET);
				HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
				HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
				HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
				HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
				HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
				HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
				HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateLEDMatrix7(int index){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, GPIO_PIN_SET);
	switch (index){
	case 0:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 1:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 2:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 3:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 4:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 5:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 6:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, RESET);
//		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, SET);
		break;
	case 7:
		//COL
		HAL_GPIO_WritePin(pa2_GPIO_Port, pa2_Pin, SET);
		HAL_GPIO_WritePin(pa3_GPIO_Port, pa3_Pin, SET);
		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
		HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
		HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);
		HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);
		HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
		HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
		//ROW
//		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, SET);
//		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
//		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
//		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
//		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
//		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);
//		HAL_GPIO_WritePin(pb14_GPIO_Port, pb14_Pin, SET);
		HAL_GPIO_WritePin(pb15_GPIO_Port, pb15_Pin, RESET);
		break;
	default:
		break;
	}
}
void updateClockBuffer(int hour, int minute){
	led_buffer[0]=hour/10;
	led_buffer[1]=hour%10;
	led_buffer[2]=minute/10;
	led_buffer[3]=minute%10;
}
void init_exercise1(){}
void update7SEG(int index){
	switch (index){
	case 0:
		HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, RESET);
		HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, SET);
		HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, SET);
		HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, SET);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, SET);
		HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, RESET);
		HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, SET);
		HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, SET);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, SET);
		HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, SET);
		HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, RESET);
		HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, SET);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, SET);
		HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, SET);
		HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, SET);
		HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, RESET);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
void display7SEG(int dem){
	if (dem==0){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);
	}
	else if (dem==1){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, SET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);
	}
	else if (dem==2){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, SET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
	else if (dem==3){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
	else if (dem==4){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, SET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
	else if (dem==5){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, SET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
	else if (dem==6){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, SET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
	else if (dem==7){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);
	}
	else if (dem==8){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
	else if (dem==9){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);
	}
}








