/*
** EPITECH PROJECT, 2024
** TRC_IT_Epitech
** File description:
** SortingRobot.cpp
*/

#include "../include/SortingRobot.hpp"

SortingRobot::SortingRobot(std::string& name) : Robot(name)
{
    _container = std::vector<Waste>();
    _plastic_container = std::vector<Waste>();
    _metal_container = std::vector<Waste>();
    _glass_container = std::vector<Waste>();
    _household_waste_container = std::vector<Waste>();
}

SortingRobot::~SortingRobot()
{
    _container.clear();
    _plastic_container.clear();
    _metal_container.clear();
    _glass_container.clear();
    _household_waste_container.clear();
}

void SortingRobot::move(void)
{
    return;
}

void SortingRobot::sort(Waste waste)
{
    if (waste.type == PLASTIC) {
        _plastic_container.push_back(waste);
    } else if (waste.type == METAL) {
        _metal_container.push_back(waste);
    } else if (waste.type == GLASS) {
        _glass_container.push_back(waste);
    } else if (waste.type == HOUSEHOLD_WASTE) {
        _household_waste_container.push_back(waste);
    } else {
        std::cerr << "Unknown waste type: " << waste.character << std::endl;
    }
    return;
}

std::vector<Waste> SortingRobot::getContainer(void) const
{
    return _container;
}

std::vector<Waste> SortingRobot::getPlasticContainer(void) const
{
    return _plastic_container;
}

std::vector<Waste> SortingRobot::getMetalContainer(void) const
{
    return _metal_container;
}

std::vector<Waste> SortingRobot::getHouseholdContainer(void) const
{
    return _household_waste_container;
}