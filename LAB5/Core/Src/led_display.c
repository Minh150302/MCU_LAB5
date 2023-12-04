/*
 * led_display.c
 *
 *  Created on: Dec 4, 2023
 *      Author: Huy Minh
 */

#include "led_display.h"


void Clear_Led(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(LED_RED3_GPIO_Port, LED_RED3_Pin, SET);
	HAL_GPIO_WritePin(LED_RED4_GPIO_Port, LED_RED4_Pin, SET);
}

void Led_Display(void){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
}

void Led_Display1(void){
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
}

void Led_Display2(void){
	HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
}

void Led_Display3(void){
	HAL_GPIO_TogglePin(LED_RED3_GPIO_Port, LED_RED3_Pin);
}

void Led_Display4(void){
	HAL_GPIO_TogglePin(LED_RED4_GPIO_Port, LED_RED4_Pin);
}
