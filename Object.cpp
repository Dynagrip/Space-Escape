#include "Object.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

Object::Object(std::string name, std::string description)
{
    std::string m_name = name;
	std::string m_description = description;
}

std::string Object::getName()
{
	return m_name;
}
