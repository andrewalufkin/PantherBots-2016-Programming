//This is the code for the Solenoid we've been working on. -Andrew, Chanler, and Juan

// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "PishSingle.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

PishSingle::PishSingle() : Subsystem("PishSingle") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    sol = RobotMap::pishSingleSol;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
	//Muahahaha I hid a random comment in the code Hello person reading this code
void PishSingle::InitDefaultCommand()
{
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void PishSingle::Initialize()
{
	Robot::pishSingle->Initialize();
}

void PishSingle::Execute()
{
	Robot::pishSingle->Execute();
}

void PishSingle::Initialize()
{
	Robot::pishSingle->Initialize();
}

bool PishSingle::isFinished()
{
	Robot::pishSingle->isFinished();
}

void PishSingle::End()
{
	Robot::pishSingle->End();
}

void PishSingle::Interrupted()
{
	Robot::pishSingle->Interrupted();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
