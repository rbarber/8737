#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  none)
#pragma config(Hubs,  S2, HTServo,  none,     none,     none)
#pragma config(Sensor, S4,     LiftDownTouch,  sensorTouch)
#pragma config(Motor,  mtr_S1_C1_1,     FrontRight,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     BackRight,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     BackLeft,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     FrontLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     LiftA,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     LiftB,         tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S2_C1_1,    up,                   tServoStandard)
#pragma config(Servo,  srvo_S2_C1_2,    forebarlink,          tServoStandard)
#pragma config(Servo,  srvo_S2_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_6,    Tow,                  tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*--------------------------------------------------------------------------------------------------------*\
|*                                                                                                        *|
|*                                    - Tetrix Quiet  Tank Drive -                                        *|
|*                                          ROBOTC on Tetrix                                              *|
|*                                                                                                        *|
|*  This program allows you to drive a robot via remote control using the ROBOTC Debugger.                *|
|*  This particular method uses "Tank Drive" where each side is controlled individually like a tank.      *|
|*  This program also ignores low values that would cause your robot to move when the joysticks fail to   *|
|*  return back to exact center.  You may need to play with the 'threshold' value to get it just right.   *|
|*                                                                                                        *|
|*                                        ROBOT CONFIGURATION                                             *|
|*    NOTES:       5                                                                                      *|
|*                                                                                                        *|
|*    MOTORS & SENSORS:                                                                                   *|
|*    [I/O Port]              [Name]              [Type]              [Description]                       *|
|*    Port D                  motorD              12V                 Right motor                         *|
|*    Port E                  motorE              12V                 Left motor                          *|
\*---------------------------------------------------------------------------------------------------4246-*/

#include "JoystickDriver.c"
#include "Robot_Drive.c"
//StopDrive() this stops the robot
//Drive(int) 100 to -100
//Strafe(int) 100 to -100
//Turn ()


task main()
{
	/*DriveBackForward(25);
	wait1Msec(4600);
	DriveStop();*/
	StartTask(Drive);
	StartTask(Lift);
	StartTask(ScoreOpenClose);
	StartTask(Forebar);
	StartTask(TowMech);
	wait1Msec(120000);
	/*DriveStop()
	motor[LiftA]=0;
	motor[LiftB]=0;*/
	while(true)
	{
		getJoystickSettings(joystick);
	}
	//ScoreOpenClose();
              // Int 'threshold' will allow us to ignore low
                       // readings that keep our robot in perpetual motion.

  /*int J1_X1 = 0; //Strafe
  int J1_Y1 = 0; //forward / back
  int J1_X2 = 0; //rotate*/
    /*your code here
    joystick.joy1_y1 = left stick (- is forward, + is backword)
    joystick.joy1_y2 = right stick (rotate left and right) rt = right / lt = left
    joystick.joy1_x1 = left stick negitive (Strafe) - is left + is right
    joystick.joy1_x2 = right stick (not in use)


    if(abs(joystick.joy1_y2) > threshold)   // If the right analog stick's Y-axis readings are either above or below the threshold:
    {
      J1_Y2 = map(joystick.joy1_y2,-128,127,-100,100); // maps the high and low to a diffrent high to low.
      DriveTurn(J1_Y2);


    }
    else                                    // Else if the readings are within the threshold:
    {
      StopDrive();                        // Motor D is stopped with a power level of 0.
    }

    Drive();*/

    /*
    if(abs(joystick.joy1_y2) > threshold)   // If the right analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[motorD] = joystick.joy1_y2;         // Motor D is assigned a power level equal to the right analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[motorD] = 0;                        // Motor D is stopped with a power level of 0.
    }


    if(abs(joystick.joy1_y1) > threshold)   // If the left analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[motorE] = joystick.joy1_y1;         // Motor E is assigned a power level equal to the left analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[motorE] = 0;                        // Motor E is stopped with a power level of 0.
    }


    // BUTTONS TO CONTOL SERVO ARM
    // Control arm via shoulder buttons, 5 and 6... 5=up, 6=down

    if(joy1Btn(5))          // If Button 5 is pressed:
    {
      servo[servo1] = 200;      // Raise Servo 1 to position 200.
    }

    if(joy1Btn(6))          // If Button 6 is pressed:
    {
      servo[servo1] = 20;       // Lower Servo 1 to position 20.
    }*/

  //}
}
