////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     PrintModel.h (print)
//  Authors:  Chuck Jacobs
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// model
#include "Model.h"

// stl
#include <ostream>

namespace ell
{
void PrintModel(const model::Model& model, std::ostream& out);
}
