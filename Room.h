#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include <algorithm>

class Object;
class Player;

class Room
{
    private:
    std::string m_name;
    std::string m_description;
    std::string m_enviro;
    std::vector<std::reference_wrapper<Object>> m_contents;
    std::vector<std::reference_wrapper<Room>> m_neighbors;
    
    public:
    Room(std::string name, std::string description,  std::string enviro, std::vector<std::reference_wrapper<Room>> neighbors, std::vector<std::reference_wrapper<Object>> contents);
	bool enviroRoll();
	bool monsterRoll();
    std::string getName();
    std::string getDescription() {return m_description;}
    std::string getEnviro(){return m_enviro;}
    std::vector<std::reference_wrapper<Object>> getContents() {return m_contents;}
    std::vector<std::reference_wrapper<Room>> getNeighbors() {return m_neighbors;}
    void showContents();
    void showNeighbors();
    void initRoom(std::string name, std::string description, std::vector<std::reference_wrapper<Object>> contents, std::string enviro);
    void addObject(Object& item);
    void removeObject(Object& item);
};

#endif