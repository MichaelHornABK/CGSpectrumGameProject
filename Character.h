#pragma once

class Character {
protected:
	int m_health;
public:
	Character(int health);

	~Character();

	int getHealth();


};