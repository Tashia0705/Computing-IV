//Tashia Boddu 
#include <SFML/Graphics.hpp>
#include <iostream> 

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    //Create Sprite 
    sf::Texture texture; 
    if(!texture.loadFromFile("sprite.png")) {
	std::cout << "Failed to load img" << std::endl;
     	system("paused"); 	
    }
	
    sf::Sprite sprite; 
    sprite.setTexture(texture); 
    sprite.move(sf::Vector2f(100,100)); //move to center

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	
	//make sprite respond to keystrokes 
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
	    sprite.move(sf::Vector2f(-2,0));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            sprite.move(sf::Vector2f(2,0));
        }

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            sprite.move(sf::Vector2f(0,-2));
        }

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            sprite.move(sf::Vector2f(0,2));
        }
	
	//make green circle turn blue with left click on mouse 
	//and back to green on right click
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) 
	{
	    shape.setFillColor(sf::Color::Blue);	
	}
	
	if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        {
            shape.setFillColor(sf::Color::Green);
        }

        window.clear();
        window.draw(shape);
	window.draw(sprite); 
        window.display();
    }

    return 0; 
}
