// Copyright 2014 Isis Innovation Limited and the authors of InfiniTAM

#pragma once

#include "../Utils/ITMLibDefines.h"

namespace ITMLib
{
	namespace Objects
	{
		class ITMIMUMeasurement
		{
		public:
			Matrix3f R;

			ITMIMUMeasurement()
			{
				this->R.setIdentity();
			}

			ITMIMUMeasurement(Matrix3f R)
			{
				this->R = R;
			}

			void SetFrom(ITMIMUMeasurement *measurement)
			{
				this->R = measurement->R;
			}

			~ITMIMUMeasurement(void) { }

			// Suppress the default copy constructor and assignment operator
			ITMIMUMeasurement(const ITMIMUMeasurement&);
			ITMIMUMeasurement& operator=(const ITMIMUMeasurement&);
		};
	}
}
