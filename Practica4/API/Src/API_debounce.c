/*
 * API_debounce.c
 *
 *  Created on: Mar 27, 2025
 *      Author: marcos
 */


#include "API_debounce.h"

void debounceFSM_init(void){		// Carga el estado inicial como button up
	debounceState_t status = BUTTON_UP;
}

void debounceFSM_update(void){	// Lee las entradas, resuelve la lógica de
								// transición de estados y actualiza las salidas
	switch (debounceState_t status){

	case BUTTON_UP:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
		debounceState_t status = BUTTON_FALLING;
			break;

	case BUTTON_FALLING:

			break;

	case BUTTON_DOWN:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
		debounceState_t status = BUTTON_RISING;
			break;

	case BUTTON_RISING:

			break;

	}
}




