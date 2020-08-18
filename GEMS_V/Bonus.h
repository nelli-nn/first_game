#pragma once
#include "Project.h"
#include "Object.h"
#include "Gem.h"
class Bonus : public Object
{
public:
  Bonus() {}
  virtual ~Bonus() {}
  virtual void Create(std::vector<std::vector<std::shared_ptr<Gem>>> gemMatrix, std::vector<std::vector <bool>> visited, std::shared_ptr<sf::RenderWindow> window) = 0;
  void Draw(std::shared_ptr<sf::RenderWindow> window) override {};
};

class RepaintingBonus : public Bonus
{
public:
  RepaintingBonus() {}
  ~RepaintingBonus() {}
  void Create(std::vector<std::vector<std::shared_ptr<Gem>>> gemMatrix, std::vector<std::vector <bool>> visited, std::shared_ptr<sf::RenderWindow> window) override;
};
class BombBonus : public Bonus
{
public:
  BombBonus() {}
  ~BombBonus() {}
  void Create(std::vector<std::vector<std::shared_ptr<Gem>>> gemMatrix, std::vector<std::vector <bool>> visited, std::shared_ptr<sf::RenderWindow>) override;
};
