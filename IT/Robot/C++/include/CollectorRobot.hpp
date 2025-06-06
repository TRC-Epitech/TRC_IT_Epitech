/*
** Epibot, 2025
** TRC_IT_Epitech
** File description:
** CollectorRobot
*/

#ifndef COLLECTORROBOT_HPP_
#define COLLECTORROBOT_HPP_
#include "Robot.hpp"
#include <vector>

class CollectorRobot : public Robot {
    public:
        CollectorRobot(std::string& name, int max_capacity, Position sortingRobotPosition, std::vector<std::string> arenaMap);
        void move(void) override;
        bool isWaste(char character);
        void collect(char character);
        void decharge(std::vector<Waste> &sorterContainer);
        ~CollectorRobot();
    private:
        bool _is_moving;
        int _max_capacity;
        std::vector<Waste> _container;
};

#endif /* !COLLECTORROBOT_HPP_ */
