/*
 * EDU101.h - library for ATtiny2313 display
 */

#include <Arduino.h>
#include <Wire.h>

#ifndef EDU101_h
#define EDU101_h

#define DISPLAY_CTRL_ID 0x27

// library interface description
class EDU101
{
  // user-accessible "public" interface
  public:
    EDU101();
    static void set4(uint8_t a,uint8_t b,uint8_t c,uint8_t d);
    static void num4(uint8_t a,uint8_t b,uint8_t c,uint8_t d);
    static void set(uint8_t a,uint8_t pos);
    static void num(uint8_t a,uint8_t pos);
    static void number(unsigned int n);

  private:
//    static uint8_t num2seg(uint8_t num);
};


extern EDU101 Display;

#endif
 

