/*
** Epibot, 2025
** TRC_IT_Epitech
** File description:
** CollectorRobot
*/

#ifndef COLLECTORROBOT_HPP_
#define COLLECTORROBOT_HPP_
#include "Robot.hpp"

class CollectorRobot : public Robot {
    public:
        CollectorRobot(std::string& name, int max_capacity, Position sortingRobotPosition);

        void move(float dx, float dy, float dz) override;

        bool isWaste(int waste);

        void collect(int waste);
 
        ~CollectorRobot();

    private:
        bool _is_moving;
        int _max_capacity;

};

#endif /* !COLLECTORROBOT_HPP_ */
