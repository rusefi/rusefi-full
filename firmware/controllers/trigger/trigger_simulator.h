/*
 * @file trigger_simulator.h
 * @brief This class knows how to produce synthetic shaft signals based on triggerShape
 *
 * @date Sep 23, 2015
 * @author Andrey Belomutskiy, (c) 2012-2020
 */

#pragma once

#define SIMULATION_CYCLE_PERIOD 720000

#include "trigger_decoder.h"

int getSimulatedEventTime(const TriggerWaveform& shape, int i);

class TriggerStimulatorHelper {
public:

	uint32_t findTriggerSyncPoint(
			TriggerWaveform& shape,
			const TriggerConfiguration& triggerConfiguration,
			TriggerDecoderBase& state);

	void assertSyncPosition(
			const TriggerConfiguration& triggerConfiguration,
			const uint32_t index,
			TriggerDecoderBase& state,
			TriggerWaveform& shape
			);

	// send next event so that we can see how state reacts
	void feedSimulatedEvent(
			const TriggerConfiguration& triggerConfiguration,
			TriggerDecoderBase& state,
			const TriggerWaveform& shape,
			int i);
};

bool isUsefulSignal(trigger_event_e signal, const TriggerWaveform& shape);
