#include "Scene.h"

#include "Numeric/PCGSolver.h"

namespace asa
{
namespace
{
////////////////////////////////////////////////
// Add any reusable classes or functions HERE //
////////////////////////////////////////////////
}  // namespace

// init particles
void Fluid2::initParticles()
{
    // particle creation HERE
}

// advection
void Fluid2::fluidAdvection(const float dt)
{
    if (flipEnabled) {
        // move particles with RK2 with grid velocities HERE
        // ensure particle remains inside the domain HERE

        // create ink grid from particles HERE
        // create velocityX grid from particles HERE
        // create velocityY grid from particles HERE

        // save current state velocities HERE
        
    } else {
        {
            // Ink SL advecion HERE
        }

        {
            // Velocity SL acvection term HERE
        }
    }
}

void Fluid2::fluidEmission()
{
    if (flipEnabled) {
        // Emitters contribution to particles HERE

    } else {
        // Emitters contribution to grid HERE
    }
}

void Fluid2::fluidVolumeForces(const float dt)
{
    // Gravity term HERE
}

void Fluid2::fluidViscosity(const float dt)
{
    // Viscosity term HERE
}

void Fluid2::fluidPressureProjection(const float dt)
{
    // Incompressibility / Pressure term HERE

    if (flipEnabled) {
        // calculate FLIP velocity delta HERE

        // apply PIC/FLIP to update particles velocities HERE
    }
}
}  // namespace asa
