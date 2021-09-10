#include "pico/stdlib.h"

int main()
{
  uint led_pin = 13;

  //Init the GPIO
  gpio_init(led_pin);
  gpio_set_dir(led_pin, GPIO_OUT);

  while(1)
  {
    //Turn ON the LED
    gpio_put(led_pin, true);
    sleep_ms(1000);

    //Turn OFF the LED
    gpio_put(led_pin, false);
    sleep_ms(1000);
  }

}