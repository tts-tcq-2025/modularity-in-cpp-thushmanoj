#include <iostream>
#include "Color_pair.hpp"
#include "Color_manual.hpp"

namespace TelCoColorCoder {

    void PrintColorMap() {
        int totalPairs = numberOfMajorColors * numberOfMinorColors;
        std::cout << "Color Code Reference Manual:\n";
        for (int i = 1; i <= totalPairs; ++i) {
            ColorPair pair = GetColorFromPairNumber(i);
            std::cout << i << " : " << pair.ToString() << "\n";
        }
    }
}
