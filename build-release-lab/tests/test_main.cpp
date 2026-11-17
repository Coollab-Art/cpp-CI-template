#include <iostream>
#include "calculator.h"
int main() {
    int failures = 0;
    if (lab::add(7, 5) != 12) { std::cerr << "FAIL add\n"; ++failures; }
    if (lab::subtract(7, 5) != 2) { std::cerr << "FAIL subtract\n"; ++failures; }
    if (lab::add(-2, 2) != 0) { std::cerr << "FAIL negative input\n"; ++failures; }
    if (!failures) std::cout << "All learning-lab tests passed\n";
    return failures ? 1 : 0;
}
