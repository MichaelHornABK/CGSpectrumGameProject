#include <iostream>
#include "Player.h"
using std::cout;
using std::endl;
using std::string;
using std::cin;

Player::Player()
{
    //Player chooses name
    string playerName;
    do
    {
        cout << "Hello Player, what is your name? ";
        cin >> playerName;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else
        {
            break;
        }
    } while (true);

    cout << endl;

    //Player chooses weapon
    int playerWeapon;
    do
    {
        cout << playerName << ", what weapon do you choose? " << endl;
        cout << "1. Bow" << endl;
        cout << "2. Sword" << endl;
        cout << "3. Axe" << endl;
        cout << "Please enter the number of the desired weapon ";
        cin >> playerWeapon;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else if (playerWeapon > 3 || playerWeapon <= 0)
        {
            system("cls");
            cout << "This number is not valid for a weapon." << endl;
        }
        else
        {
            break;
        }
    } while (true);

    cout << endl;

    //Player chooses armor
    int playerArmor;
    do
    {
        cout << playerName << ", what armor do you want?" << endl;
        cout << "1. Light Armor" << endl;
        cout << "2. Medium Armor" << endl;
        cout << "3. Heavy Armor" << endl;
        cout << "Please enter the number of the desired armor ";
        cin >> playerArmor;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else if (playerArmor > 3 || playerArmor <= 0)
        {
            system("cls");
            cout << "This number is not valid for armor." << endl;
        }
        else
        {
            break;
        }
    } while (true);

    cout << endl;

    m_health = 100;
    m_name = playerName;
    m_armor = playerArmor;
    m_weapon = playerWeapon;
}

Player::Player(int health, string name, int weapon, int armor)
	:Character(health, weapon, armor)
	,m_name(name)
{

}

Player::~Player()
{

}

void Player::DisplayPlayerHealth() {
	cout << "Your Current health is " << GetHealth() << endl << endl;
}

void Player::DisplayPlayerDetails()
{
	cout << "Welcome " << m_name << "!" << endl;
	cout << "You have chosen a " << Character::GetWeaponName(m_weapon) << " as your weapon." << endl;
	cout << "You have chosen " << Character::GetArmorType(m_armor) << " armor." << endl;
	DisplayPlayerHealth();
}

void Player::Rest(int healingAmount, int maxAmount)
{
    if (healingAmount + m_health > maxAmount)
    {
        healingAmount = maxAmount - m_health;
    }
    m_health += healingAmount;
}

int Player::GetHealth()
{
    std::cout << "Getting player health" << endl;
    return Character::GetHealth();
}