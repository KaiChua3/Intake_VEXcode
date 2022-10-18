/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       chuaz                                                     */
/*    Created:      10/17/2022, 7:57:59 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
brain Brain;

// define your global instances of motors and other devices here
controller Controller = controller(primary);
motor motor1 = motor(PORT2, ratio18_1, true);
int main() {
    vexcodeInit();
    Brain.Screen.printAt( 10, 50, "Intake Test" );
    while (true) {
        Controller1.ButtonLeft.pressed(motor1.spin(forward, 12, percent));
        Controller1.ButtonLeft.released(motor1.spin(forward, 0, percent));
    }
   
   task::sleep(100);
}
