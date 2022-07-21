#include <iostream>
using std::cout;
using std::cin;
using std::string;
#include "Character.h"

const string weaponsArray[3] = { "Bow", "Sword", "Axe" };
const string armorArray[3] = { "Light", "Medium", "Heavy" };

Character::Character(int health, int weapon, int armor)
	:m_health(health)
	,m_weapon(weapon)
	,m_armor(armor)
{

}

Character::Character() {
	m_health = 0;
	m_weapon = 0;
	m_armor = 1;
}

Character::~Character()
{

}

int Character::GetHealth() {
	return m_health;
}

std::string Character::GetWeaponName(int weaponNum)
{
	return weaponsArray[weaponNum - 1];
}

std::string Character::GetArmorType(int armorNum)
{
	return armorArray[armorNum - 1];
}

void Character::TakeDamage(int damageAmount)
{
	m_health -= damageAmount;
}

void Character::ReceiveHealth(int healingAmount, int maxAmount)
{
	if (healingAmount + m_health > maxAmount)
	{
		healingAmount = maxAmount - m_health;
	}
	m_health += healingAmount;
}