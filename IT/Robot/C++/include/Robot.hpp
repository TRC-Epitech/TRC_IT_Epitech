/*
 * Created on Wed Jun 04 2025
 *
 * Copyright (c) 2025 Tekbot Epitech
 */

#ifndef ROBOT_HPP_
#define ROBOT_HPP_
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> // pour rand()
#include <ctime>

#include "../include/Error.hpp"

enum status {
    INACTIVE,
    ACTIVE
};

typedef struct pos {
    float x;
    float y;
    float z;
} Position;

class Robot {
    public:
        // Constructor
        Robot(const std::string& name);
        
        // [============== Pure Virtual Method ============]
        virtual void move(float dx, float dy, float dz) = 0;

        // [============== Common Methods ============]
        void recharge(float amount);
        void update_temperature(); // Simulation of overgheadting
        void displayStatus() const;
        void stop();

        // [============== Getters ============]
        std::string getName() const;
        float getBatteryLevel() const;
        Position getPosition() const;
        status getStatus() const;
        float getTemperature() const;

        // [============== Setters ============]
        void setBatteryLevel(float battery_level);
        void setPosition(Position position);
        void setStatus(std::string& status);
        void setSpeed(float new_speed);
        void setWeight(float weight);
        
        // Destructor
        virtual ~Robot();
        
    protected:
        std::string _name;
        float _battery_level;
        Position _position;
        std::string _status;
        float _speed;
        float _max_speed;
        float _weight;
        float _temperature;
};

#endif /* !ROBOT_HPP_ */
