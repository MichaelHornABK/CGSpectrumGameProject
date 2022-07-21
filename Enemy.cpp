#include <iostream>
#include "Enemy.h"
using std::cout;
using std::endl;
using std::string;
using std::cin;

Enemy::Enemy()
{
    //random enemy weapon and armor
    m_weapon = (rand() % 3) + 1;
    m_armor = (rand() % 3) + 1;

    m_health = 100;
}

Enemy::Enemy(int health, int weapon, int armor)
    :Character(health, weapon, armor)
{

}

Enemy::~Enemy()
{

}

void Enemy::DisplayEnemyHealth()
{
    cout << "The enemy's health is " << GetHealth() << endl << endl;
}

void Enemy::DisplayEnemyDetails()
{
    cout << "The enemy has a " << GetWeaponName(m_weapon) << " as a weapon." << endl;
    cout << "The enemy has " << GetArmorType(m_armor) << " armor." << endl;
    DisplayEnemyHealth();
}
