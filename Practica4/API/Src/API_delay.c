/*
 * API_delay.c
 *
 *  Created on: Mar 20, 2025
 *      Author: marcos
 */

#include "stm32f4xx_hal.h"
#include "API_delay.h"

void delayInit(delay_t *delay, tick_t duration) {
	delay->duration = duration;
	delay->running = false;
}

bool_t delayRead(delay_t *delay) {
	bool ret = false;
	if (delay->running == false) {
		delay->startTime = HAL_GetTick();
		delay->running = true;
	} else if (HAL_GetTick() - delay->startTime >= delay->duration) {
		delay->running = false;
		ret = true;
	}
	return ret;
}

void delayWrite(delay_t *delay, tick_t duration) {
	delay -> duration = duration;
}
