// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutoDrive2.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutoDrive2::AutoDrive2(): Command()
{
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
	SetTimeout(1.5);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void AutoDrive2::Initialize()//intializes all variables declared in the .h file
{
	SetTimeout(2.500);
	speed = Robot::drivetrain->GetPower();
	correction = Robot::drivetrain->GetkP();
	duration = Robot::drivetrain->GetAutoTime();
	delay = Robot::drivetrain->GetDelay();
	position = Robot::drivetrain->GetDirection();

	//SetTimeout(duration + delay);

	Robot::drivetrain->ResetGyro();
	//Robot::wrist->UpWristState();
}

// Called repeatedly when this Command is scheduled to run
void AutoDrive2::Execute() {//calls autodrive gyro function with parameters
	Robot::drivetrain->AutoGyroDrive(.500, correction);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive2::IsFinished()
{
    return ((Robot::drivetrain->GetDistance() < 6.000) || (IsTimedOut()));
}//checks if ultrasonic finds a wall within 6 inches or stops robot

// Called once after isFinished returns true
void AutoDrive2::End()
{
	Robot::drivetrain->AutoGyroDrive(.450, correction); //The robot rights itself.
	Wait(.500); //Wait half of a second
	Robot::drivetrain->Stop();//stops robot 
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive2::Interrupted() 
{
	End();//safety measure
}
