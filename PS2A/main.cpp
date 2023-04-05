// Copyright Tashia Boddu 2021
#include "Universe.h"
#include <SFML/Graphics.hpp>

int main(int argc, char *argv[]) {
  Universe univ;
  std::cin >> univ;

  sf::Texture background_tex;
  sf::Sprite background;
  if (!background_tex.loadFromFile("starfield.jpg")) {
    cerr << "Couldn't read starfield.jpg!\n";
    exit(-1);
  }
  background.setTexture(background_tex);

  auto window_size = background_tex.getSize();
  sf::RenderWindow window(sf::VideoMode(window_size.x, window_size.y),
     "The Solar System");
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();

      window.clear();
      window.draw(background);
      double R = univ.getR();
      int N = univ.getN();
      for (int i = 0; i < N; i++) {
        auto body = *univ.getPlanet(i);
        double display_x = window_size.x * (R + body.getX()) / (2 * R);
        double display_y = window_size.y * (R + body.getY()) / (2 * R);
        body.setPosition(display_x, display_y);
        window.draw(body);
      }
      window.display();
    }
  }

  return 0;
}
