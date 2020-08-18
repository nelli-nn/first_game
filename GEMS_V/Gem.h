#pragma once
#include "Project.h"
#include "Object.h"
class Gem : public Object 
{
public:
	Gem() {}
	Gem(int x, int y);
	~Gem() {}
	void SetOutline(std::shared_ptr<sf::RenderWindow> window, sf::Color color);
	void Draw(std::shared_ptr<sf::RenderWindow> window) override;
};

