// Copyright Tashia Boddu 2021
#ifndef _HOME_OSBOXES_COMPIV_PS5_TRIANGLE_H_
#define _HOME_OSBOXES_COMPIV_PS5_TRIANGLE_H_

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class Triangle : public sf::Drawable {
 public:
    Triangle(double centerx, double centery, double length);

 private:
    sf::VertexArray triangle;
    virtual void draw(sf::RenderTarget& target, // NOLINT
        sf::RenderStates states) const {
            target.draw(triangle, states);
    }
};

#endif  // _HOME_OSBOXES_COMPIV_PS5_TRIANGLE_H_
