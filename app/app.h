#pragma once
#include <cstdint>
#include <string>
#include <iostream>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	std::string to_hex(int broj);
	class color {
		double red;
		double green;
		double blue;
	public:
		color();
		color(const color& other);
		color& operator=(const color& other);

		double get_red() const;
		double get_green() const;
		double get_blue() const;

		void set_red(double red);
		void set_green(double green);
		void set_blue(double blue);

		uint32_t get_color_ref() const;
		double get_luminance() const;
	};


}