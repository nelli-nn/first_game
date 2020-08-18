#pragma once
#include "Project.h"
class Object
{
protected:
  sf::Vector2f objectSize;
  sf::Vector2f objectPosition;

  sf::RectangleShape shape;

  COLOR color_type;
  sf::Color color;

public:
  Object();
  virtual ~Object() {}
  COLOR GetColor();
  void SetColor(COLOR color);
  virtual void Draw(std::shared_ptr<sf::RenderWindow> window) = 0;
};

