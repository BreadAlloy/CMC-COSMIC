#pragma once

#include "hdf5.h"
#include "cmc.h"

#define PROPER_CMC_VARS_INCLUDE

namespace global{
    #include "cmc_vars.h"
}

namespace forbid_global{
    /*
    Never use variables from here!!!!

    using namespace forbid_global;
    Causes an error(ambigous variable) in a scope that uses global variables without global:: in front of them
    */
    #include "cmc_vars.h"
}

using namespace global;
