#include "Player.h"

Player::Player() {
	
	setPosition(sf::Vector2f(100, 100));
	setSize(sf::Vector2f(100, 100));

	mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&mushroom);
	setVelocity(0.f, 0.f);
}

Player::~Player() {

}

void Player::handleInput(float dt) {

	if (input->isKeyDown(sf::Keyboard::Right))
	{
		setVelocity(getVelocity().x + 0.1 * dt, getVelocity().y);
	}

	if (input->isKeyDown(sf::Keyboard::Left))
	{
		setVelocity(getVelocity().x - 0.1 * dt, getVelocity().y);
	}

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		setVelocity(getVelocity().x, getVelocity().y - 0.1 * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Down))
	{
		setVelocity(getVelocity().x, getVelocity().y + 0.1 * dt);
	}

	
}

void Player::update(float dt) {

	move(velocity);
}
