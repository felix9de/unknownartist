/**
 * (c) Real-time systems project seminar, TU Darmstadt
 * 
 * @file regler.h
 * @author Felix Euteneuer
 * @brief TODO - insert a brief description of that interface
 *
 * Implementation of a PID-Controller.
 **/

#ifndef REGLER_H_
#define REGLER_H_

/*
 * Include files
 */
#include "base_type.h"
/*
 * Global pre-processor symbols/macros ('#define')
 */

/*
 * Global type definitions ('typedef')
 */

/*
 * Global and local variable declarations
 */

double Kp, Ki, Kd;
int16_t sollwert;
int16_t tempSollwert;
int16_t nebenDerSpur;

int16_t regulierSollwertZustand = 0;
/*
 * Global and local functions
 */

/**
 * Set Kp (K_proportional)
 * @param percent Servo position (-100 left .. +100 right)
 */
extern void Regler_set_Kp(double);

/**
 * Set Ki (K_integral)
 * @param percent Servo position (-100 left .. +100 right)
 */
extern void Regler_set_Ki(double);

/**
 * Set Kd (K_differential)
 * @param percent Servo position (-100 left .. +100 right)
 */
extern void Regler_set_Kd(double);



/**
 * Set Sollwert
 * @param sollwert
 */
extern void Regler_set_sollwert(int16_t);

extern int16_t Regler_get_sollwert();

extern int16_t Regler_get_tempSollwert();


extern void Regler_output(int16_t);

extern int16_t Regler_get_sensor();

extern int16_t Regler_get_fehler();

extern int16_t Regler_get_fdif();

void regulierSollwert();
/**
 * Get the output of the PID-Controller
 * @param percent Servo position (-100 left .. +100 right)
 */
extern int16_t Regler_pid(int16_t);

#endif /* REGLER_H_ */
