#include <iostream>
#include "Player.h"
using std::cout;
using std::endl;
using std::string;

const string weaponsArray[3] = {"Bow", "Sword", "Axe"};
const string armorArray[3] = { "Light", "Medium", "Heavy" };

Player::Player(int health, string name, int weapon, int armor)
	:Character(health)
	,m_name(name)
	,m_weapon(weapon)
	,m_armor(armor)
{

}

Player::~Player()
{

}

void Player::displayPlayerHealth(Player &p) {
	cout << "Your Current health is " << p.getHealth();
}

void Player::displayPlayerDetails(Player& p)
{
	cout << "Welcome " << m_name << "!" << endl;
	cout << "You have chosen a " << getWeaponName(m_weapon) << " as your weapon." << endl;
	cout << "You have chosen " << getArmorType(m_armor) << " armor." << endl;
	displayPlayerHealth(p);
}

std::string Player::getWeaponName(int weaponNum)
{
	return weaponsArray[weaponNum - 1];
}

std::string Player::getArmorType(int armorNum)
{
	return armorArray[armorNum - 1];
}