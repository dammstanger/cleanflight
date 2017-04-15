/*
 * smartport.h
 *
 *  Created on: 25 October 2014
 *      Author: Frank26080115
 */

#pragma once

void initSmartPortTelemetry(void);

void handleSmartPortTelemetry(void);
bool checkSmartPortTelemetryState(void);

void configureSmartPortTelemetryPort(void);
void freeSmartPortTelemetryPort(void);

