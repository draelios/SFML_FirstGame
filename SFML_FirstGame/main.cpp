#include "SFML\Graphics.hpp"

int main()
{
	sf::Vector2f viewSize(1024.0f, 768.0f);
	sf::VideoMode vm(viewSize.x, viewSize.y);
	sf::RenderWindow window(vm, "Hello Game SFML !!!", sf::Style::Default);
	while (window.isOpen()) {
		window.clear(sf::Color::Blue);
		window.display();
	}
	return 0;
}