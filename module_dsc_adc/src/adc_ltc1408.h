/**
 * \file adc_ltc1408.h
 *
 * The copyrights, all other intellectual and industrial 
 * property rights are retained by XMOS and/or its licensors. 
 * Terms and conditions covering the use of this code can
 * be found in the Xmos End User License Agreement.
 *
 * Copyright XMOS Ltd 2010
 *
 * In the case where this code is a modification of existing code
 * under a separate license, the separate license terms are shown
 * below. The modifications to the code are still covered by the 
 * copyright notice above.
 *
 **/                                   
#include <xs1.h>
#include <xclib.h>
#include "dsc_config.h"
#include "adc_common.h"

/** \brief Execute a filtered data ADC server
 *
 * This is the server thread implementation for the LTC1408 ADC device.
 *
 * \param c_adc the control channel
 * \param clk the clock for the ADC device serial port
 * \param SCLK the port which feeds the ADC serial clock
 * \param CNVST the ADC convert strobe
 * \param DATA the ADC data port
 * \param c_logging0 optional channel for logging the ADC channel 0 data
 * \param c_logging1 optional channel for logging the ADC channel 1 data
 * \param c_logging2 optional channel for logging the ADC channel 2 data
 */
void adc_ltc1408_filtered( chanend c_adc, clock clk, port out SCLK, buffered out port:32 CNVST, in buffered port:32 DATA, chanend ?c_logging0, chanend ?c_logging1, chanend ?c_logging2 );

/** \brief Execute the triggered ADC server
 *
 * This is the server thread implementation for the LTC1408 ADC device.
 *
 * \param c_adc the control channel
 * \param clk the clock for the ADC device serial port
 * \param SCLK the port which feeds the ADC serial clock
 * \param CNVST the ADC convert strobe
 * \param DATA the ADC data port
 * \param c_trig the trigger channel
 * \param c_logging0 optional channel for logging the ADC channel 0 data
 * \param c_logging1 optional channel for logging the ADC channel 1 data
 * \param c_logging2 optional channel for logging the ADC channel 2 data
 */
void adc_ltc1408_triggered( chanend c_adc, clock clk, port out SCLK, buffered out port:32 CNVST, in buffered port:32 DATA, chanend c_trig, chanend ?c_logging0, chanend ?c_logging1, chanend ?c_logging2);
