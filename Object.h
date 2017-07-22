#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class Player;
class Room;

class Object
{
    private:
    std::string m_name;
    std::string m_description;
    
    public:
    
    Object(std::string name, std::string description);
	std::string getName();
    std::string getDescription(){return m_description;}
    void initObject(std::string name, std::string description);
};

#endif