#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main() {

	sf::Shader shader;

	if (!shader.loadFromFile("noise.vert", "noise.frag")) {
		return 1;
	}

	sf::RectangleShape r(sf::Vector2f(2, 1));

	sf::RenderWindow window(sf::VideoMode(480, 480), "Window");
	sf::Event event;

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.display();
	}


	return 0;
}