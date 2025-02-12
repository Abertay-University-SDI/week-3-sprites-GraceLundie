#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	p.setInput(in);

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	
	p.handleInput(dt);

	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

}

// Update game objects
void Level::update(float dt)
{
	p.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(p);

	endDraw();
}
