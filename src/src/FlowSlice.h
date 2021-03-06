//
// Created by Adam Kosiorek on 22.05.15.
//

#ifndef OPTICAL_FLOW_FLOWSLICE_H
#define OPTICAL_FLOW_FLOWSLICE_H

#include <Eigen/Core>
#include "types.h"

class FlowSlice {
public:
	using Ptr = std::shared_ptr<FlowSlice>;

    FlowSlice(int xSize, int ySize) : xv_(xSize, ySize), yv_(xSize, ySize) {
        xv_.setZero();
        yv_.setZero();
    }

    FlowSlice() : FlowSlice(128, 128) {}

    RealMatrix xv_;
    RealMatrix yv_;
};

#endif //OPTICAL_FLOW_FLOWSLICE_H
