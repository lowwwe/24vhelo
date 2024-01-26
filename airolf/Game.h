#include <SFML/Graphics.hpp>
/// /// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>



class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void processMouse(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();

	void animate();
	void move();

	void setupFontAndText();
	void setupSprite();


	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

	sf::Vector2f m_location = { 200.0f,200.0f }; // position of helo
	sf::Vector2f m_velocity = { 0.0f, 0.0f };// velocity of helo
	float m_speed = 5.0f; // helicopter speed == 400mph
	sf::Vector2f m_target = { 0.0f,0.0f }; // where the helo is going


	sf::Texture m_heloTexture;// helo text
	sf::Sprite m_heloSprite;// helo sprite
	int m_currentFrame = 0;// frame no
	float m_frameCounter = 0.0f;// framce inc
	float m_frameIncrement = 0.25f;// inc amt

};

#endif // !GAME_HPP

