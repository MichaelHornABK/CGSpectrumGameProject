#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include <stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;

void Round(Player* player, Enemy* enemy);
void Encounter(Player* player, Enemy* enemy);
void PlayGame();

int main()
{
    PlayGame();
}

void Round(Player* player, Enemy* enemy)
{
    enemy->TakeDamage((rand() % 6) + 5);
    player->TakeDamage((rand() % 4) + 4);
    player->DisplayPlayerHealth();
    enemy->DisplayEnemyHealth();
}

void Encounter(Player* player, Enemy* enemy)
{
    for (int i = 0; i < 5; i++)
    {
        Round(player, enemy);
    }

    int rest;
    do
    {
        cout << "Would you like to rest for a short while? (HP regen) " << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> rest;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else if (rest > 2 || rest <= 0)
        {
            system("cls");
            cout << "This number is not valid for resting." << endl;
        }
        else
        {
            break;
        }
    } while (true);
    if (rest == 1)
    {
        player->Rest(20, 100);
    }
}

void PlayGame()
{
    Player player;
    player.DisplayPlayerDetails();

    do
    {
        Enemy enemy;
        enemy.DisplayEnemyDetails();

        Encounter(&player, &enemy);

    } while (player.GetHealth() > 0);
}