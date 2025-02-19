#include "receiver.h"
#include "gpio.h"
#include "Arduino.h"

/*
 * GPIO pins for receiver
 */
#define DEC_IN_PIN_0  (GPIO_PIN_16)
#define DEC_IN_PIN_1  (GPIO_PIN_17)
#define DEC_IN_PIN_2  (GPIO_PIN_18)
#define DEC_IN_PIN_3  (GPIO_PIN_19)

void receiver_init()
{
  gpio_set_mode(DEC_IN_PIN_0, GPIO_PIN_DIR_INPUT);
  gpio_set_mode(DEC_IN_PIN_1, GPIO_PIN_DIR_INPUT);
  gpio_set_mode(DEC_IN_PIN_2, GPIO_PIN_DIR_INPUT);
  gpio_set_mode(DEC_IN_PIN_3, GPIO_PIN_DIR_INPUT);
}

static int bin2dec(int b0, int b1)
{
  return ((b1 << 1) | b0);
}

void receiver_read(uint8_t *dir, int *spd)
{
  int d0_eval;
  int d1_eval;
  int d2_eval;
  int d3_eval;

  *dir = 0;
  *spd = 0;

  d0_eval = gpio_read(DEC_IN_PIN_0);
  d1_eval = gpio_read(DEC_IN_PIN_1);
  d2_eval = gpio_read(DEC_IN_PIN_2);
  d3_eval = gpio_read(DEC_IN_PIN_3);

  *dir = bin2dec(d0_eval, d1_eval);
  *spd = bin2dec(d2_eval, d3_eval);
}
