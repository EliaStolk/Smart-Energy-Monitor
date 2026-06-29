/*
 * 7-seg Display Functions
 *
 * Authors: Team 8 (Elia Stolk, Soriyana Hor, Rachel Pan, Harry McCormick)
 */ 

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <stdint.h>
#include <avr/io.h>

// INITIALISATION
void displayinit();

// FUNCTIONS
void seperateAndLoadCharacters(uint16_t number,  uint8_t decimal_pos);
void separateAndLoadFloat(float value);
void sendNextCharacterToDisplay();
void display_values();

#endif