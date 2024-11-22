#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "iostream"

using namespace sf;
using namespace std;

int main() {


	RenderWindow ventana(VideoMode(800, 600), "Adaptacion");
	Event evento;
	Vector2f posicion_click;

	while (ventana.isOpen()) {
		if (ventana.getSize().x >= 1000) {
			ventana.setSize(Vector2u(1000, ventana.getSize().y));
		}
		if (ventana.getSize().y >= 1000) {
			ventana.setSize(Vector2u(ventana.getSize().x, 1000));
		}
		if (ventana.getSize().x <= 100) {
			ventana.setSize(Vector2u(100, ventana.getSize().y));
		}
		if (ventana.getSize().y <= 100) {
			ventana.setSize(Vector2u(ventana.getSize().x, 100));
		}
		while (ventana.pollEvent(evento)) {
			if (evento.type == Event::MouseButtonPressed) {
				if (evento.key.code == Mouse::Left) {
				}
			}
		}
		ventana.clear(Color::Red);
		ventana.display();
	}

	return 0;
}