/**
 * @file patient.h
 * @author Abishek G
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef PATIENT_H_
#define PATIENT_H_

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#define F_CPU 8000000UL 
#include <avr/io.h>     
#include <util/delay.h>    
#include <LiquidCrystal.h>
/**
 * @brief library added for using inbuilt functions
 * 
 */

void setup()                                                         /* function fro serial monitor */
void loop()                                                          /* function to run the loop for lcd and motor */
LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);   /* lcd function */


#endif