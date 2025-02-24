// this section was generated automatically by rusEFI tool ConfigDefinition.jar based on (unknown script) controllers/algo/wall_fuel_state.txt Mon Apr 18 21:50:18 UTC 2022
// by class com.rusefi.output.CHeaderConsumer
// begin
#pragma once
#include "rusefi_types.h"
// start of wall_fuel_state_s
struct wall_fuel_state_s {
	/**
	 * fuel injection time correction to account for wall wetting effect for current cycle
	 * offset 0
	 */
	float wallFuelCorrection = (float)0;
	/**
	 * Amount of fuel on the wall, in ms of injector open time for each injector.
	 * offset 4
	 */
	floatms_t wallFuel = (floatms_t)0;
};
static_assert(sizeof(wall_fuel_state_s) == 8);

// end
// this section was generated automatically by rusEFI tool ConfigDefinition.jar based on (unknown script) controllers/algo/wall_fuel_state.txt Mon Apr 18 21:50:18 UTC 2022
