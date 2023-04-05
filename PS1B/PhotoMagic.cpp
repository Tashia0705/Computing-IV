#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "FibLFSR.h"

using namespace std; 
void transform (sf::Image& image, FibLFSR& lfsr); 

int main (int argc, char* argv[]) { 
  if (argc  < 4) {
     cout << "Not enough arguements"; 
     return -1; 
  }

  sf::Image image, imageOut;
  if (!image.loadFromFile(argv[1]) || !imageOut.loadFromFile(argv[1])){
     return -1;   
  }

  FibLFSR lfsr(argv[3]);   
  transform(imageOut,lfsr);
  sf::Texture texture; 
  texture.loadFromImage(image);
  sf::Texture texture2; 
  texture2.loadFromImage(imageOut);  

  sf::Sprite sprite1;
  sprite1.setTexture(texture); 
  sf::Sprite sprite2; 
  sprite2.setTexture(texture2); 
  
  sf::Vector2u size = image.getSize(); 
  sf::RenderWindow window1(sf::VideoMode(size.x, size.y), "Input");
  sf::RenderWindow window2(sf::VideoMode(size.x, size.y), "Output"); 
  while (window1.isOpen() && window2.isOpen()) {
     sf::Event event; 
     while (window1.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
	   window1.close(); 	
     } 

     while (window2.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
	   window2.close(); 	
     } 
     
     window1.clear(); 
     window1.draw(sprite1); 
     window1.display();
     window2.clear();
     window2.draw(sprite2);
     window2.display();
 
  } 

  return 0; 
}

void transform (sf::Image& image, FibLFSR& lfsr) {
  sf::Vector2u imageSize = image.getSize(); 
  sf::Color p; 
  
  for (unsigned x = 0; x < imageSize.x; x++) {
     for (unsigned y = 0; y < imageSize.y; y++) {
	p = image.getPixel(x,y); 
	p.r ^= lfsr.generate(8);
	p.g ^= lfsr.generate(8);
	p.b ^= lfsr.generate(8);
	image.setPixel(x,y,p);
     }
  }
} 


