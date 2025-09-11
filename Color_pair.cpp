#include "Color_pair.cpp"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair :: ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
    MajorColor ColorPair::getMajor() {
                return majorColor;
            }
    MinorColor ColorPair::getMinor() {
                return minorColor;
            }
    std::string ColorPair::ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
    };
}
