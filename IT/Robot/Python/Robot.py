#
# Created on Wed Jun 04 2025
#
# Copyright (c) 2025 Tekbot Epitech
#

from abc import ABC, abstractmethod

class Robot(ABC):
    def __init__(self, name:str, battery_level:int):
        self._name = name
        self._battery_level = battery_level

    ## Getters
    @property
    def name(self):
        return self._name
    
    @property
    def battery_level(self):
        return self._battery_level
    
    ## Setters
    @name.setter
    def name(self, name:str):
        self._name = name

    @battery_level.setter
    def battery_level(self, level:int):
        self._battery_level = level

    @abstractmethod
    def move(self):
        pass


class GroundRobot(Robot):
    def move(self):
        if self.battery_level > 10:
            self._battery_level -= 10
            print(f"The robot {self.name} moves forward. @Patriko")
            print(f"The level of his battery is : {self.battery_level}")
        else:
            print(f"The robot {self.name} can't move forward. @Patriko")
            print(f"The level of his battery is : {self.battery_level}")

class FlyRobot(Robot):
    def move(self):
        if self.battery_level > 10:
            self._battery_level -= 10
            print(f"The robot {self.name} flies forward. @Patriko")
            print(f"The level of his battery is : {self.battery_level}")
        else:
            print(f"The robot {self.name} can't fly forward. @Patriko")
            print(f"The level of his battery is : {self.battery_level}")

if __name__ == "__main__":
    r1 = GroundRobot("TekBot-G", 50)
    r2 = FlyRobot("TekBot-F", 50)

    r1.move()
    r2.move()

    