// Copyright Tashia Boddu 2021
#ifndef _HOME_OSBOXES_COMPIV_PS2A_CELESTIALBODY_H_
#define _HOME_OSBOXES_COMPIV_PS2A_CELESTIALBODY_H_

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class CelestialBody : public sf::Drawable {
 public:
  CelestialBody(double _xpos, double _ypos, double _xvel, double _yvel,
                double _mass, std::string _filename)
      : xpos(_xpos), ypos(_ypos), xvel(_xvel), yvel(_yvel), mass(_mass),
        filename(_filename) {
    if (!image.loadFromFile(filename)) {
      std::cerr << "Coudln't read the file.\n";
      exit(-1);
    }
    texture.loadFromImage(image);
    sprite.setTexture(texture);
  }

  double getX() const { return xpos; }
  double getY() const { return ypos; }
  void setPosition(float x, float y) { sprite.setPosition(x, y); }

 private:
  sf::Image image;
  sf::Sprite sprite;
  sf::Texture texture;
  double xpos, ypos;
  double xvel, yvel;
  double mass;
  std::string filename;
  virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const { // NOLINT
    target.draw(sprite, states);
  }
};

#endif  // _HOME_OSBOXES_COMPIV_PS2A_CELESTIALBODY_H_
