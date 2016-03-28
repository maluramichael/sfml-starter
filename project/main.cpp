#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <tinyxml2.h>
#include <framework/framework.h>

int main() {

	engine::Map map;

	tinyxml2::XMLDocument doc;
	doc.LoadFile("isometric.xml");

	const char* title = doc.FirstChildElement( "TextureAtlas" )->FirstChildElement( "SubTexture" )->Attribute("name");
	printf( "Name of play (1): %s\n", title);

	sf::RectangleShape r(sf::Vector2f(100, 100));
	r.setFillColor(sf::Color::White);
	sf::RenderWindow window(sf::VideoMode(800, 600), "Window");
	sf::Event event;

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(r);
		window.display();
	}


	return 0;
}