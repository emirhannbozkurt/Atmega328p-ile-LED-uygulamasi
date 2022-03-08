/*
 * File:   LED_Odev.c
 * Author: emir5
 *
 * Created on 22 Ekim 2021 Cuma, 14:01
 */
#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
int main(void) {
    /* Replace with your application code */
    DDRC = 0x00;
    DDRB = 0xFF;
    PORTB = 0x00;
    while (1) {
        if (PINC == 0x06) {
            PORTB = 0x0F;
        }
        if (PINC == 0x05) {
            PORTB = 0x00;
        }
        if (PINC == 0x03) {
            while(PINC == 0x03){
            PORTB = 0x0F;
            _delay_ms(1000);
            PORTB = 0x00;
            _delay_ms(1000);
            }
        }
    }
}