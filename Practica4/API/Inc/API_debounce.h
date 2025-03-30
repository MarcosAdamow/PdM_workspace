/*
 * API_debounce.h
 *
 *  Created on: Mar 27, 2025
 *      Author: marcos
 */

#ifndef INC_API_DEBOUNCE_H_
#define INC_API_DEBOUNCE_H_

#include <stdbool.h>
#include <assert.h>


#endif /* INC_API_DEBOUNCE_H_ */

typedef uint32_t tick_t;
typedef bool bool_t;


typedef enum{
	BUTTON_UP,
	BUTTON_FALLING,
	BUTTON_DOWN,
	BUTTON_RISING
} debounceState_t;



void debounceFSM_init(void);		// Carga el estado inicial

void debounceFSM_update(void);							// Lee las entradas, resuelve la lógica de
	  													// transición de estados y actualiza las salidas

void buttonPressed(void);			// Enciende el LED
void buttonReleased(void);			// Apaga el LED



