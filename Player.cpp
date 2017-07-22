#include "Player.h"
#include "Object.h"

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

Player::Player(std::string name, int health, std::vector<std::reference_wrapper<Object>> inventory)
{
	std::string m_name = name;
	int m_health = health;
	std::vector<std::reference_wrapper<Object>> m_inventory = inventory;
}

//void initPlayer(std::string name, int health, std::vector<std::reference_wrapper<Object>> inventory = {})
//{
//    m_name = name;
//    m_health = health;
//    m_inventory = inventory;
//}

void Player::changeHealth(int hearts)
{
    m_health = m_health + hearts;
    if (m_health > 15)
    {m_health = 15;}

}

void Player::addItem(Object& item)
{
    m_inventory.push_back(item);
}

void Player::removeItem(Object& item)
{
    //m_inventory.erase(std::remove(m_inventory.begin(), m_inventory.end(), item), m_inventory.end());
}

void Player::showInventory()
{
    for (unsigned int i = 0; i < m_inventory.size(); i++)
    {
        std::cout << m_inventory[i].get().getName() << ", ";
        std::cout <<"\n\n";
    }
}