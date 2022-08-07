#include <SFML/Graphics.hpp>
#include <iostream>
#include <unistd.h>

#define delay_time 0.3

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Game by Jay");
    window.setFramerateLimit(60); 

    sf::Texture creeper_text;
    creeper_text.loadFromFile("./images/creeper.jpeg");

    sf::Sprite creeper_sprite;
    creeper_sprite.setTexture(creeper_text);
    creeper_sprite.setPosition(300.f, 300.f);



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                default:
                    break;
            }

        }
        switch (event.key.code) {
            case sf::Keyboard::W:
                creeper_sprite.move(0.f, -10.f);
                sleep(delay_time);
                break;

            case sf::Keyboard::A:
                creeper_sprite.move(-10.f, 0.f);
                sleep(delay_time);
                break;

            case sf::Keyboard::S:
                creeper_sprite.move(0.f, 10.f);
                sleep(delay_time);
                break;

            case sf::Keyboard::D:
                creeper_sprite.move(10.f, 0.f);
                sleep(delay_time);
                break;

            default:
                break;
        }

        window.clear();

        window.draw(creeper_sprite);
        window.display();
    }
    return 0;
}
