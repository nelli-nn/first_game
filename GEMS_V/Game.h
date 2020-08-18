#pragma once

#include "Project.h"
#include "Gem.h"
#include "Bonus.h"
#include "PlayingField.h"

class Game
{
	std::shared_ptr<PlayingField> field;
	sf::Font font;
	sf::Text text;
	int scoreTotal;
	std::string string;
	STATE_GAME gameState;
	sf::Vector2f windowSize;
	std::shared_ptr <sf::RenderWindow> window;
	std::shared_ptr <sf::Event> event;
public:
	Game();
	~Game() {}
	void Run();
	bool IsRunning();
	STATE_GAME EndGame();

	void GameProcess();

	void Draw();
	void DrawBackground();
	void DrawScore();

};
