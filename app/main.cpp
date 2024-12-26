#include <iostream>
#include <string>
#include "app.h"
int main()
{
	vsite::oop::v2::color boja;

	double red, green, blue;
	std::cout << "Unesite vrijednost crvene(0.0-1.0): ";
	std::cin >> red;
	std::cout << "Unesite vrijednost zelene(0.0-1.0): ";
	std::cin >> green;
	std::cout << "Unesite vrijednost plave(0.0-1.0): ";
	std::cin >> blue;

	boja.set_red(red);
	boja.set_green(green);
	boja.set_blue(blue);

	std::cout << "RGB vrijednost => #" << vsite::oop::v2::to_hex(boja.get_color_ref());
	return 0;
}