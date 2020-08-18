#include "Object.h"
Object::Object() : color_type((COLOR)0), color(sf::Color::White), objectSize(0.0, 0.0), objectPosition(0.0, 0.0), shape(objectSize) {}
COLOR Object::GetColor()
{
	return color_type;
}
void Object::SetColor(COLOR color)
{
	color_type = (COLOR)color;
}