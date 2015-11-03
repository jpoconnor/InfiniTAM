// Copyright 2014-2015 Isis Innovation Limited and the authors of InfiniTAM

#pragma once

#include "ITMSurfelSceneReconstructionEngine.h"
#include "../Objects/ITMRenderState.h"
#include "../Utils/ITMLibSettings.h"

namespace ITMLib
{
  /**
   * \brief TODO
   */
  template <typename TSurfel>
  class ITMDenseSurfelMapper
  {
    //#################### PRIVATE VARIABLES ####################
  private:
    /** The surfel scene reconstructione engine. */
    ITMSurfelSceneReconstructionEngine<TSurfel> *m_reconstructionEngine;

    //#################### CONSTRUCTORS ####################
  public:
    /**
     * \brief TODO
     */
    explicit ITMDenseSurfelMapper(ITMLibSettings::DeviceType deviceType);

    //#################### DESTRUCTOR ####################
  public:
    /**
     * \brief Destroys the mapper.
     */
    ~ITMDenseSurfelMapper();

    //#################### COPY CONSTRUCTOR & ASSIGNMENT OPERATOR ####################
  private:
    // Deliberately private and unimplemented
    ITMDenseSurfelMapper(const ITMDenseSurfelMapper&);
    ITMDenseSurfelMapper& operator=(const ITMDenseSurfelMapper&);

    //#################### PUBLIC MEMBER FUNCTIONS ####################
  public:
    /**
     * \brief TODO
     */
    void ProcessFrame(const ITMView *view, const ITMTrackingState *trackingState, ITMSurfelScene<TSurfel> *scene, ITMRenderState *liveRenderState) const;
  };
}
