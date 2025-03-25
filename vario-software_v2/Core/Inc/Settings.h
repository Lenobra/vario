/*
 * Settings.h
 *
 *  Created on: Mar 23, 2025
 *      Author: basti
 */

#ifndef INC_SETTINGS_H_
#define INC_SETTINGS_H_

#define BUILT_DATE				__DATE__	// Store the built date
#define BUILT_TIME				__TIME__	// Store the built time

#define TESTMODE							// uncomment this line if normal use

// A common place for all settings
// Blink
#define BLINK_TIME						500			// ms

// LCD
#define SCREEN_UPDATE_TIME				500			// ms

// Vario settings
#define CLIMB_THRESHOLD					(0.3)   	// m/s
#define NEAR_CLIMB_THRESHOLD			(0.1)   	// m/s
#define ENABLE_NEAR_CLIMB				0			// (0 / 1) Choose if near climb alarm is on
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

#define VOLUME							5			// 1 - 10
#define MAX_VOLUME						10			//

// ADC settings
#define AREF_MILLI    					3300		// Ref Voltage
#define ADC_BITS						4095		// number of bits from the adc conversion
#define ADC_MULTI						((float)AREF_MILLI / (float)ADC_BITS)		// (Ref/ADCres)=3345/4095 =0.81685
#define RES_RATIO     					1.0			// Ratio of the Voltage devider

// Battery settings
#define BATTERY_UPDATE_TIME				100 		// ms

/*
// 1s Lipo Battery
#define BAT_0							3080		// Voltage @ 0%
#define BAT_5							3600		// Voltage @ 5%
#define BAT_20							3740		// Voltage @ 20%
#define BAT_75							3990		// Voltage @ 75%
#define BAT_100							4100		// Voltage @ 100%
*/

// linear poti
#define BAT_0							0			// Voltage @ 0%
#define BAT_5							165			// Voltage @ 5%
#define BAT_20							660			// Voltage @ 20%
#define BAT_75							2475		// Voltage @ 75%
#define BAT_100							3300		// Voltage @ 100%

// Barometer settings
#define PRASSURE_AT_SEALEVEL			1013.25f	// hPa
#define BMP280_ADDRESS					0x76  << 1	// hex (bitshift, because adr is 7Bit)
#define BARO_UPDATE_TIME				250			// in ms

#endif /* INC_SETTINGS_H_ */
