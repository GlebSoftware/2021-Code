#pragma once

#include <string>

namespace TRANS
{
    namespace SHIFT_MATH
    {
        constexpr int encoder_cpr = 2048;

        constexpr auto low_ratio = 20.83;
        constexpr auto high_ratio = 9.17;

        constexpr auto wheel_diameter = 7.65;

        constexpr auto low_ratio_multiplier_to_ft = 1.0 / encoder_cpr / low_ratio * wheel_diameter / 2 / 12;
        constexpr auto high_ratio_multiplier_to_ft = 1.0 / encoder_cpr / high_ratio * wheel_diameter / 2 / 12;

    } // SHIFT_MATH

    constexpr int shifter = 0;
    
    constexpr int shift_up_point = 16000;//6 / low_ratio_multiplier_to_ft;
    constexpr int shift_down_point = 6000;//4 / low_ratio_multiplier_to_ft;

    constexpr int rFalcon = 15;    
    constexpr int rNeo = 14;
    constexpr int lFalcon = 17;
    constexpr int lNeo = 11;    
    //std::string song_path = "Pain_it_black.chrp";
} // TRANS
namespace HOPPER
{
    namespace TRANSPORT
    {
        constexpr int PORT = 3;
        constexpr double SPEED = 0.7;
        constexpr double SHOOT_SPEED = 1.0;
    } // TRANSPORT

    namespace INDEXER 
    {
        constexpr int PORT = 10;
        constexpr double SPEED = 1.0;
    }

    //Define motor CAN IDs
    
    constexpr int laserPort = 0; //can be changed later
    constexpr double hopperTimer = 0.151771; //Will need to be changed
}
namespace INTAKE
{
    constexpr int IntakePort = 12;
    constexpr int intakeairport = 1;

    namespace BUTTONS
    { 
        constexpr int intakedown = 2;
        constexpr int intakein = 3;
        constexpr int intakeout = 5;
    }
}
namespace SHOOTER
{
    namespace WHEEL
    {
        constexpr int PORT_1 = 4;//subject to change
        constexpr int PORT_2 = 5;//subject to change
        constexpr int SHOOTING_RPM = 4500; //Lol no idea
        constexpr int IDLE_RPM = 3000; //lol lets not do this its dumb
        constexpr double P = 1.0;
        constexpr double I = 0.0;
        constexpr double D = 0.0;
    } // SHOOTER

    namespace TURRET
    {
        constexpr int PORT = 6;//subject to change

        constexpr double TRAVERSE_SPEED = .4;
        constexpr double P = 1.0;
        constexpr double I = 0.0;
        constexpr double D = 0.0;

        //Define the 4 quadrants 
        constexpr int FORWARD = 0;
        constexpr int BACKWARDS = 1000;
        constexpr int RIGHT = 500;
        constexpr int LEFT = -500;
        
        //Define max travels
        constexpr int MAX_LEFT = -600;
        constexpr int MAX_RIGHT = 600;
    } // TURRET

    
    namespace HOOD
    {
        constexpr int PORT = 7;//subject to change
        
        constexpr double P = 1.0;
        constexpr double I = 0.0;
        constexpr double D = 0.0;

        constexpr int BOTTOM = 0;
        constexpr int TOP = 100;
    } // HOOD
    
    namespace BUTTONS
    {
        //co-driver's joystick trigger button
        //constexpr int turretfire = 1;
    }
}