// Copyright 2014 Isis Innovation Limited and the authors of InfiniTAM

#pragma once

#include "../Utils/ITMLibDefines.h"

#include "../Objects/ITMIMUMeasurement.h"

#include "../Engine/ITMTracker.h"
#include "../Engine/ITMLowLevelEngine.h"

using namespace ITMLib::Objects;

namespace ITMLib
{
	namespace Engine
	{
		class ITMIMUTracker : public ITMTracker
		{
		private:
			ITMLowLevelEngine *lowLevelEngine;
			
			ITMTrackingState *trackingState; const ITMView *view;

		public:
			void TrackCamera(ITMTrackingState *trackingState, const ITMView *view);

			ITMIMUTracker(ITMLowLevelEngine *lowLevelEngine);
			virtual ~ITMIMUTracker(void);
		};
	}
}
