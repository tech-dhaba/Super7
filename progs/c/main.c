#define LED_PIN (1<<0)

#define GPIOD_BASE 0x500F
#define CLK_BASE 0x50C0

#define DDR_OFFSET 0x02
#define CR1_OFFSET 0x03
#define CR2_OFFSET 0x04
#define ODR_OFFSET 0x00
#define PCKENR1_OFFSET 0x07


#define GPIOD_DDR *((volatile unsigned char*)(GPIOD_BASE+DDR_OFFSET))
#define GPIOD_CR1 *((volatile unsigned char*)(GPIOD_BASE+CR1_OFFSET))
#define GPIOD_CR2 *((volatile unsigned char*)(GPIOD_BASE+CR2_OFFSET))
#define GPIOD_ODR *((volatile unsigned char*)(GPIOD_BASE+ODR_OFFSET))
#define CLK_PCKENR1 *((volatile unsigned char*)(CLK_BASE+PCKENR1_OFFSET))

void delay(){
  volatile int count = 400000;
  while(--count);
}

int main(){
  GPIOD_DDR |= LED_PIN;
  GPIOD_CR1 |= LED_PIN;
  GPIOD_CR2 |= LED_PIN;

  while(1){
    GPIOD_ODR ^= LED_PIN;
    delay();
  }
}

