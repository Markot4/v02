#pragma once

#include <cstdint>
// from <windows.h> 
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
/*
* class declaration
*/
    template <typename T>
    constexpr const T& clamp(const T& v, const T& lo, const T& hi) {
        return (v < lo) ? lo : (v > hi) ? hi : v;
    }

    class color {
    private:
        double red = 0.0;
        double green = 0.0;
        double blue = 0.0;

    public:
        double get_red() const { return red; }
        double get_green() const { return green; }
        double get_blue() const { return blue; }

        void set_red(double r) { red = clamp(r, 0.0, 1.0); }
        void set_green(double g) { green = clamp(g, 0.0, 1.0); }
        void set_blue(double b) { blue = clamp(b, 0.0, 1.0); }

        uint32_t get_color_ref() const {
            return RGB(static_cast<uint8_t>(red * 255),
                static_cast<uint8_t>(green * 255),
                static_cast<uint8_t>(blue * 255));
        }

        double get_luminance() const {
            return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
        }
    };
}