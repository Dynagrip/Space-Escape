#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
class Object;

class Player
{
    private:
    std::string m_name;
    int m_health;
    std::vector<std::reference_wrapper<Object>> m_inventory;
    
    public:
    Player(std::string name, int health, std::vector<std::reference_wrapper<Object>> inventory);
    
    std::string getName() {return m_name;}
	void initPlayer(std::string name, int health, std::vector<std::reference_wrapper<Object>> inventory);
    int getHealth() {return m_health;}
    void changeHealth(int hearts); 
    void addItem(Object& item);
    void removeItem(Object& item);
    void showInventory();
};

#endif