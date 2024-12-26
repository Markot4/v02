#include "app.h"
#include <algorithm>

#include<format>
#include<iostream>
namespace vsite::oop::v2
{
	std::string to_hex(int num) {
		return std::format("{:06X}", num);
	}


	void color::set_red(double red) {
		this->r = std::clamp(red, 0., 1.);
	}
	void color::set_green(double green) {
		this->g = std::clamp(green, 0., 1.);
	}
	void color::set_blue(double blue) {
		this->b = std::clamp(blue, 0., 1.);

	}
	double color::get_red() const {
		return r;
	}
	double color::get_green() const {
		return g;
	}
	double color::get_blue() const {
		return b;
	}

	double color::get_luminance() const {
		return r * 0.2126 + g * 0.7152 + b * 0.0722;
	}

	uint32_t color::get_color_ref() const {
		return RGB(r * 255, g * 255, b * 255);
	}
} // namespace
