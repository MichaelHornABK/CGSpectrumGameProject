#pragma once
#include "Character.h"

class Player : public Character {
protected:
	
	std::string m_name;

public:
	Player();

	Player(int health, std::string name, int weapon, int armor);

	~Player();

	void DisplayPlayerHealth();

	void DisplayPlayerDetails();


	void Rest(int healingAmount, int maxAmount);

	int GetHealth() override;

};