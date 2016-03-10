#include <SFML/Window.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <iostream>

int main() {
    std::cout << "Hello sfml\n";

    sf::RenderWindow window(sf::VideoMode(480, 480), "Window");
    sf::Event event;
    while (window.isOpen()) {
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.display();
    }


    return 0;
}