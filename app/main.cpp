#include <iostream>
#include <iomanip>  // Dodato za setw i setfill
#include "app.h"

int main() {
    using namespace vsite::oop::v2;

    color c;
    double r, g, b;

    std::cout << "Enter red, green, and blue components (0.0 - 1.0):\n";
    std::cout << "Red: ";
    std::cin >> r;
    std::cout << "Green: ";
    std::cin >> g;
    std::cout << "Blue: ";
    std::cin >> b;

    c.set_red(r);
    c.set_green(g);
    c.set_blue(b);

    uint32_t colorValue = c.get_color_ref();
    std::cout << "RGB color in hexadecimal: 0x" << std::hex << std::setw(6) << std::setfill('0') << colorValue << std::endl;

    return 0;
}