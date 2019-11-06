/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viclucas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 09:02:18 by viclucas          #+#    #+#             */
/*   Updated: 2019/11/03 11:38:30 by viclucas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SFML.hpp"

int		launcher(void)
{
	sf::RenderWindow window(sf::VideoMode(2500, 2000), "SFML window");
   	/*
	sf::Font font;
 	sf::Texture texture;
	sf::Sprite sprite(texture);
	sf::Text text("Hello SFML", font, 50);
   	text.setFillColor(sf::Color::Black);
*/
	while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        //window.clear();

        // Draw the sprite
       // window.draw(sprite);
        //window.draw(text);

        // Draw the string

        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}
