/*
** Epibot, 2025
** TRC_IT_Epitech
** File description:
** 
*/

#ifndef SORTINGROBOT_HPP_
#define SORTINGROBOT_HPP_
#include "Robot.hpp"
#include <vector>
#include <iostream>

class SortingRobot : public Robot {
    public:
        SortingRobot(std::string& name);

        void move(void) override;

        void sort(Waste waste);

        std::vector<Waste> getContainer(void) const;

        std::vector<Waste> getPlasticContainer(void) const;

        std::vector<Waste> getMetalContainer(void) const;

        std::vector<Waste> getHouseholdContainer(void) const;

        ~SortingRobot();

    private:
        std::vector<Waste> _container;
        std::vector<Waste> _plastic_container;
        std::vector<Waste> _metal_container;
        std::vector<Waste> _glass_container;
        std::vector<Waste> _household_waste_container;
};

#endif /* !SORTINGROBOT_HPP_ */
