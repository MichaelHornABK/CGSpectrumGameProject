#include <iostream>
using std::cout;
using std::cin;
using std::string;
#include "Character.h"

Character::Character(int health)
	:m_health(health)
{

}

Character::~Character()
{

}

int Character::getHealth() {
	return m_health;
}