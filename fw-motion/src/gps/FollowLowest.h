/**
 * (c) Real-time systems project seminar, TU Darmstadt
 *
 * @file Bahnplanung_Offroad.c
 * @author Team GPS
 * @brief Sammelt Informationen �ber die Tags im Bereich der Kameraerfassung und sortiert diese in aufsteigender Reihenfolge und ist zust�ndig f�r die Auswahl des n�chsten Ziels
 **/

#ifndef FOLLOWLOWEST_H_
#define FOLLOWLOWEST_H_

#include "../api/wireless/wireless.h"

void init_lowest_ID(wirelessMessage_t* msg);
void increase_lowest_ID(void);
void set_Obstacle(wirelessMessage_t* msg);

#endif /* FOLLOWLOWEST_H_ */
