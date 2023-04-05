// Copyright Tashia Boddu 2021
#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double centerx, double centery, double length):
            triangle(sf::LineStrip, 4) {
    double height = std::sqrt(3.0) / 2.0 * length;

    double xvertex_a = centerx - (length / 2.0);
    double yvertex_a = centery - (height / 3.0);

    double xvertex_b = centerx + (length / 2.0);
    double yvertex_b = centery - (height / 3.0);

    double xvertex_c = centerx;
    double yvertex_c = centery + (2.0/3.0) * height;

    triangle[0].position = sf::Vector2f(xvertex_a, yvertex_a);
    triangle[0].color = sf::Color::Red;

    triangle[1].position = sf::Vector2f(xvertex_b, yvertex_b);
    triangle[1].color = sf::Color::Red;

    triangle[2].position = sf::Vector2f(xvertex_c, yvertex_c);
    triangle[2].color = sf::Color::Cyan;

    triangle[3].position = triangle[0].position;
    triangle[3].color = sf::Color::Cyan;
}
