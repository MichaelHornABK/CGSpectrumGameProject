#include <iostream>
#include "Player.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    string playerName;
    do
    {
        cout << "Hello Player, what is your name? ";
        cin >> playerName;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else {
            break;
        }
    } while (true);

    int playerWeapon;
    do
    {
        cout << playerName << ", what weapon do you choose? " << endl;
        cout << "1. Bow" << endl;
        cout << "2. Sword" << endl;
        cout << "3. Axe" << endl;
        cout << "Please enter the number of the desired weapon ";
        cin >> playerWeapon;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else if (playerWeapon > 3 || playerWeapon <= 0) {
            system("cls");
            cout << "This number is not valid for a weapon." << endl;
        }
        else {
            break;
        }
    } while (true);

    int playerArmor;
    do
    {
        cout << playerName << ", what armor do you want?" << endl;
        cout << "1. Light Armor" << endl;
        cout << "2. Medium Armor" << endl;
        cout << "3. Heavy Armor" << endl;
        cout << "Please enter the number of the desired armor ";
        cin >> playerArmor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else if (playerWeapon > 3 || playerWeapon <= 0) {
            system("cls");
            cout << "This number is not valid for armor." << endl;
        }
        else {
            break;
        }
    } while (true);


    Player player(100, playerName, playerWeapon, playerArmor);
    player.displayPlayerDetails(player);

}