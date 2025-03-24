/*
 * API_delay.h
 *
 *  Created on: Mar 20, 2025
 *      Author: Marcos
 */

#ifndef INC_API_DELAY_H_
#define INC_API_DELAY_H_

#include <stdbool.h>
#include <assert.h>


typedef uint32_t tick_t;
typedef bool bool_t;

typedef struct{
   tick_t startTime;
   tick_t duration;
   bool_t running;
} delay_t;

void delayInit(delay_t * delay, tick_t duration);
bool_t delayRead(delay_t * delay);
void delayWrite(delay_t*delay,tick_t duration);

#endif /* INC_API_DELAY_H_ */
