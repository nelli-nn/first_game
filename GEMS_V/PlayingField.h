#pragma once
#include "Project.h"
#include "Gem.h"
#include "Bonus.h"
class PlayingField
{
	std::shared_ptr<RepaintingBonus> repainting;
	std::shared_ptr<BombBonus> bomb;	
	bool axesOx;
	bool axesOy;
	int countClick;

	std::vector<std::vector<std::shared_ptr<Gem>>> gemMatrix;
	std::shared_ptr <Gem> gem;
	std::vector<std::vector <bool>> visited;
	sf::Vector2i point;
	sf::Vector2i coordinates;
	sf::Vector2i coordinates_next;

public:
	PlayingField();
	~PlayingField() {}

	void InitializeField();
	void Swap(std::shared_ptr<sf::RenderWindow> window);
	void FieldOutline(std::shared_ptr<sf::RenderWindow> window);
	void GetScore(int* scoreTotal);
	void CheckClick(std::shared_ptr<sf::RenderWindow> window, int* scoreTotal);
	void DrawField(std::shared_ptr<sf::RenderWindow> window);
	int GetClickNumber();
	bool Combinations();
	void Remove();
	void ShiftGems();
	void FillField();
	void Update();
	void InitEvent(std::shared_ptr<sf::RenderWindow> window, std::shared_ptr<sf::Event> event);
	void CheckLine(int * scoreTotal, std::shared_ptr<sf::RenderWindow> window);
	void SwapGemsOx(std::shared_ptr<sf::RenderWindow> window);
	void SwapGemsOy(std::shared_ptr<sf::RenderWindow> window);
	void StartPositions();
	// Проверяем нажатие мыши, если разница между ними не больше единицы по какой-либо оси, то все ок, иначе обмена не происходит
	bool Difference();  
	void CheckBonus(std::shared_ptr<sf::RenderWindow> window);
};

