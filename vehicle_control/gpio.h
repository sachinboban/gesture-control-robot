#ifndef GPIO_H
#define GPIO_H

#include "Arduino.h"

#define GPIO_PIN_0  (0)   /* GPIO PIN 0 */
#define GPIO_PIN_1  (1)   /* GPIO PIN 1 */
#define GPIO_PIN_2  (2)   /* GPIO PIN 2 */
#define GPIO_PIN_3  (3)   /* GPIO PIN 3 */
#define GPIO_PIN_4  (4)   /* GPIO PIN 4 */
#define GPIO_PIN_5  (5)   /* GPIO PIN 5 */
#define GPIO_PIN_6  (6)   /* GPIO PIN 6 */
#define GPIO_PIN_7  (7)   /* GPIO PIN 7 */
#define GPIO_PIN_8  (8)   /* GPIO PIN 8 */
#define GPIO_PIN_9  (9)   /* GPIO PIN 9 */
#define GPIO_PIN_10 (10)  /* GPIO PIN 10 */
#define GPIO_PIN_11 (11)  /* GPIO PIN 11 */
#define GPIO_PIN_12 (12)  /* GPIO PIN 12 */
#define GPIO_PIN_13 (13)  /* GPIO PIN 13 */

/* Analog pins (for ADC) */
#define GPIO_PIN_A0 (14)  /* Analog PIN 0 */
#define GPIO_PIN_A1 (15)  /* Analog PIN 1 */
#define GPIO_PIN_A2 (16)  /* Analog PIN 2 */
#define GPIO_PIN_A3 (17)  /* Analog PIN 3 */
#define GPIO_PIN_A4 (18)  /* Analog PIN 4 */
#define GPIO_PIN_A5 (19)  /* Analog PIN 5 */

/* GPIO pin direction modes */
#define GPIO_PIN_DIR_INPUT  (0) /* Input direction */
#define GPIO_PIN_DIR_OUTPUT (1) /* Output direction */

/* GPIO pin values */
#define GPIO_LOW  (0) /* GPIO low */
#define GPIO_HIGH (1) /* GPIO high */

/*
 * @brief Set the direction of the given GPIO pin
 *
 * @pin       GPIO pin (GPIO_PIN_xx)
 * @dir_mode  GPIO pin direction mode (GPIO_PIN_DIR_xxxxxx)
 */
void gpio_set_mode(uint8_t pin, uint8_t dir_mode);

/*
 * @brief Set the value of the given GPIO pin
 *
 * @pin       GPIO pin (GPIO_PIN_xx)
 * @dir_mode  GPIO pin value (GPIO_xxxx)
 */
void gpio_write(uint8_t pin, uint8_t val);


#endif  /* GPIO_H */
