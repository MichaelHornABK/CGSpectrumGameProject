#pragma once
#include "Character.h"

class Player : public Character {
protected:
	int m_weapon;
	int m_armor;
	std::string m_name;

public:
	Player(int health, std::string name, int weapon, int armor);

	void displayPlayerHealth(Player& p);

	void displayPlayerDetails(Player& p);

	std::string getWeaponName(int weaponNum);

	std::string getArmorType(int armorNum);

	~Player();

};