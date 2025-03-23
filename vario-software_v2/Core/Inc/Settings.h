/*
 * Settings.h
 *
 *  Created on: Mar 23, 2025
 *      Author: basti
 */

#ifndef INC_SETTINGS_H_
#define INC_SETTINGS_H_

// A common place for all settings
// LCD
#define SCREEN_UPDATE_TIME				100			// ms

// Vario settings
#define CLIMB_THRESHOLD					(0.3)   	// m/s
#define NEAR_CLIMB_THRESHOLD			(0.1)   	// m/s
#define SINK_THRESHOLD					(-3.0)   	// m/s

#define CLIMB_BEEPS_AT_THRESHOLD	   	1.7    		// Beeps per second start 1,2
#define CLIMB_BEEPS_AT_MAX_VARIO    	6.7     	// Beeps per second stop 5,5
#define CLIMB_FREQUENCY_AT_THERSHOLD	400     	// @climb_threshold   556
#define CLIMB_FREQUENCY_AT_MAX_VARIO   	1800    	// @ max_vario        1605

#define SINK_FREQUENCY_AT_THERSHOLD		300     	// @sink_threshold    865 500
#define SINK_FREQUENCY_AT_MIN_VARIO		200     	// 274 150

#define MIN_PEEP_TIME_AT_THRESHOLD    	400     	// @climb, in milliseconds 600
#define MIN_PEEP_TIME_AT_MAX_VARIO     	150     	// @climb, in milliseconds

#define MAX_VARIO          		 		10.0   		// m/s
#define MIN_VARIO           			(-10.0)   	// m/s

#define MAX_VOLUME						10			// 1 - 10

// ADC settings
#define ADC_MULTI						0.9357		// (Ref/ADCres)=3345/4095 =0.81685
#define AREF_MILLI    					1100		// Ref Voltage
#define RES_RATIO     					5.846599	// Ratio of the Voltage devider

// Battery settings
#define BATTERY_UPDATE_TIME				1000		// ms

#define BAT_0							3080		// Voltage @ 0%
#define BAT_5							3600		// Voltage @ 5%
#define BAT_20							3740		// Voltage @ 20%
#define BAT_75							3990		// Voltage @ 75%
#define BAT_100							4100		// Voltage @ 100%

// Barometer settings
#define PRASSURE_AT_SEALEVEL			1023		// hPa
#define BMP280_ADDRESS					0x00		// hex


#endif /* INC_SETTINGS_H_ */
