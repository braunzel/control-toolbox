/**********************************************************************************************************************
This file is part of the Control Toolbox (https://adrlab.bitbucket.io/ct), copyright by ETH Zurich, Google Inc.
Authors:  Michael Neunert, Markus Giftthaler, Markus Stäuble, Diego Pardo, Farbod Farshidian
Licensed under Apache2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#pragma once

namespace ct {
namespace optcon {

template <size_t STATE_DIM, size_t CONTROL_DIM, typename SCALAR = double>
using DiscreteOptConProblem = OptConProblemBase<STATE_DIM,
    CONTROL_DIM,
    core::DiscreteControlledSystem<STATE_DIM, CONTROL_DIM, SCALAR>,
    core::DiscreteLinearSystem<STATE_DIM, CONTROL_DIM, SCALAR>,
    SCALAR>;

}  // namespace optcon
}  // namespace ct
