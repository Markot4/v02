#include <iostream>
#include <format>
#include <iomanip>
#include "app.h"

using vsite::oop::v2::color;

int main() {
	double r, g, b;
	std::cin >> r;
	std::cin >> g;
	std::cin >> b;
	color c;

	c.set_red(r);
	c.set_green(g);
	c.set_blue(b);

	std::cout << "Crvena boja: " << c.get_red() << "\n";
	std::cout << "Zelena boja: " << c.get_green() << "\n";
	std::cout << "Plava boja: " << c.get_blue() << "\n";

	std::cout << "Boja u hexadecimalnom  zapisu je 0x" << vsite::oop::v2::to_hex(c.get_color_ref());

}