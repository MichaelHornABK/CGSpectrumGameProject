#pragma once

class Character {
protected:
	int m_health;
	int m_armor;
	int m_weapon;
public:
	Character();

	Character(int health, int m_weapon, int m_armor);

	~Character();

	virtual int GetHealth();

	static std::string GetWeaponName(int weaponNum);

	std::string GetArmorType(int armorNum);

	void TakeDamage(int damageAmount);

	void ReceiveHealth(int healingAmount, int maxAmount);
};