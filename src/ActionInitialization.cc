/// \file B4aActionInitialization.cc
/// \brief Implementation of the B4aActionInitialization class

#include "ActionInitialization.hh"//
#include "PrimaryGeneratorAction.hh"//


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

ActionInitialization::ActionInitialization()
{;}

ActionInitialization::~ActionInitialization()
{;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void ActionInitialization::Build() const
{
  SetUserAction(new PrimaryGeneratorAction);
}


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

