/*
** EPITECH PROJECT, 2025
** TRC
** File description:
** Robot
*/

#include "../include/Robot.hpp"

// Constructor
Robot::Robot(const std::string& name): _name(name)
{
}

// [============== Common Methods ============]

// Destructor
Robot::~Robot()
{
    std::cout << "Destruction of " << _name << std::endl;
}
