#pragma once

#include <string>

namespace TRANS
{
    constexpr int shifter = 0;

    constexpr int encoder_cpr = 2048;

    constexpr auto low_ratio = 20.83;
    constexpr auto high_ratio = 9.17;

    constexpr auto wheel_diameter = 7.65;

    constexpr auto low_ratio_multiplier_to_ft = 1.0 / encoder_cpr / low_ratio * wheel_diameter / 2 / 12;
    constexpr auto high_ratio_multiplier_to_ft = 1.0 / encoder_cpr / high_ratio * wheel_diameter / 2 / 12;

    constexpr int shift_up_point = 6 / low_ratio_multiplier_to_ft;
    constexpr int shift_down_point = 4 / low_ratio_multiplier_to_ft;

    constexpr int rFalcon = 15;    
    constexpr int rNeo = 14;
    constexpr int lFalcon = 17;
    constexpr int lNeo = 11;    
    //std::string song_path = "paint";
} // TRANS