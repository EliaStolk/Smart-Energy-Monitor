# AC Energy Monitor

Firmware and design files for an AC energy monitor developed as part of 
ELECTENG 209 at the University of Auckland.

## What it does
Measures and displays the voltage, current, real power, and energy consumed 
by an inductive AC load. Results are shown sequentially on a 4-digit 
7-segment display.

## Repository contents
- `firmware/` - ATmega328PB C code written in Atmel/Microchip Studio
- `ltspice/` - Simulation files for the analogue signal conditioning circuitry
- `schematic/` - Circuit schematic for the analogue front end

## Hardware
- ATmega328PB microcontroller
- LM324 op-amps for signal conditioning
- 74HC595 shift register for display driving
- Custom SMT PCB (Smart Energy Challenge entry)

## Notes
The firmware assumes a 2MHz system clock. The physical prototype experienced 
issues due to the MCU running at its default clock speed instead, which 
affected ADC sampling timing.
