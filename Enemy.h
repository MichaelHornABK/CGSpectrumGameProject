#pragma once
#pragma once
#include "Character.h"

class Enemy : public Character {

public:

	Enemy(); 

	Enemy(int health, int weapon, int armor);

	~Enemy();

	void DisplayEnemyHealth();

	void DisplayEnemyDetails();

};