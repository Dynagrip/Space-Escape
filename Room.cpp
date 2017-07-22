#include "Room.h"
#include "Object.h"
#include <string>
#include <vector>
#include <iostream>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <time.h>

Room::Room(std::string name, std::string description, std::string enviro,std::vector<std::reference_wrapper<Room>> neighbors, std::vector<std::reference_wrapper<Object>> contents)
{
	std::string m_name = name;
	std::string m_description = description;
	std::string m_enviro = enviro;
	std::vector<std::reference_wrapper<Room>> m_neighbors = neighbors;
	std::vector<std::reference_wrapper<Object>> m_contents = contents;
}

//void initRoom(std::string name, std::string description, std::string enviro, std::vector<std::reference_wrapper<Object>> contents ={})
//{
//    m_name = name;
//    m_description = description;
//    m_enviro = enviro;
//    m_contents = contents;
//}

std::string Room::getName()
{
	return m_name;
}
void Room::showContents()
{
    for (unsigned int i = 0; i < m_contents.size(); i++)
    {
        std::cout << m_contents[i].get().getName() << ", ";
		std::cout << "\n\n";
    }
}

void Room::showNeighbors()
{
    for (unsigned int i = 0; i < m_neighbors.size(); i++)
    {
        std::cout << m_neighbors[i].get().getName() << ", ";
        std::cout << "\n\n";
    }
}

void Room::addObject(Object& item)
{
    m_contents.push_back(item);
}

void Room::removeObject(Object& item)
{
	//m_contents.erase(std::remove(m_contents.begin(), m_contents.end(), item), m_contents.end());
}


bool Room::enviroRoll()
{
	srand(static_cast<unsigned int>(time (0)));
	int randomNumber = rand();
	int roll = (randomNumber % 12) + 1;

	if (roll < 5)
	{
		return true;
	}

	else
		return false;
}

bool Room::monsterRoll()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int roll = (randomNumber % 12) + 1;

	if (roll < 4)
	{
		return true;
	}

	else
		return false;
}