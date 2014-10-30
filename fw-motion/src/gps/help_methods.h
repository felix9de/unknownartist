/**
 * (c) Real-time systems project seminar, TU Darmstadt
 *
 * @file help_methods.h
 * @author TEAM::GPS
 * @brief contains method calculateDifferenceVector which calculates the position of the target from the view of the car
 * 		this one is needed for the navigation
 *
 **/

#ifndef HELP_METHODS_H_
#define HELP_METHODS_H_

#include "commonLibraries.h"

void setCoordinates(gps_reducedData_t* dest, uint8_t cam_id, uint8_t tag_id,
		int16_t x, int16_t y, uint16_t angle, uint8_t isWorld);

/*
 * calculates the position of the target from the view of the car
 */
void calculateDifferenceVector(gps_reducedData_t* dif, gps_reducedData_t* actPos,
		gps_reducedData_t* aimPos);

/*
 * Konvertiert die Eingaben von Zahlen in ein Array, welches dann f�r die Bluetooth Debug Messages verwendet werden kann.
 * Die Blutetooth Messages erwarten ein Array variable Gr��e.
 * Um sp�ter beim auswerten am Rechner mit einem Port Monitor leichter die verschiedenen Messages unterscheiden zu k�nnen, gibt es die Surround Methoden, die einen frei w�hlbaren Charakter um die Nachricht machen.
 */
void convertToCharArray(uint32_t test, char pkg[4]);
void convertToCharArraySurround(char s, uint32_t test, char pkg[8]);
void convertToCharArraySurroundSmall(char s, uint16_t test1, uint16_t test2, char pkg[8]);

/*
 * Der Betrag von verschiedenen Zahlen wird zur�ck gegeben oder auch die Differenz des Betrages zweier Zahlen
 */
uint16_t giveDifferenceAbsolute(int16_t zahl1, int16_t zahl2);

#endif /* HELP_METHODS_H_ */
