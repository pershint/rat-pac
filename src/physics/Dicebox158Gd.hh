// fsutanto@umich.edu
// Apr 4, 2018

#ifndef Dicebox158Gd_h
#define Dicebox158Gd_h 1

#include "globals.hh"
#include "local_g4compat.hh"
#include "G4ThreeVector.hh"
#include "G4ParticleMomentum.hh"
#include "G4Step.hh"
#include "G4Gamma.hh"
#include "G4Electron.hh"
#include "G4DynamicParticle.hh"
#include "G4ParticleChange.hh"
#include "G4VProcess.hh"
#include <RAT/DB.hh>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

class Dicebox158Gd {
    
protected:
    
    G4ParticleChange aParticleChange;
    static G4std::vector<Dicebox158Gd*> masterVector;
    
    std::vector< int  > myPar, myMul;
    std::vector<double> myErg, myCdf;
    
public:
    
    Dicebox158Gd();
    ~Dicebox158Gd();
    
    static G4VParticleChange* GenericPostStepDoIt(const G4Step *pStep);
    G4VParticleChange* PostStepDoIt(const G4Track& aTrack, const G4Step& aStep);
};

#endif

