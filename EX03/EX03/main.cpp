//
//  main.cpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include "Fan.hpp"

int main(){
    Fan fan1;
    Fan fan2;
    
    fan1.setSpeed(3);
    fan1.setOn(true);
    fan1.setRadius(10);
    
    fan2.setSpeed(2);
    fan2.setOn(false);
    fan2.setRadius(5);
    
    std::cout<<"Two fan objects were created!\nThe first fan had its speed set to "<<fan1.getSpeed()<<", its radius set to "<<fan1.getRadius()<<", and was turned on(its on status set to "<<fan1.getOn()<<").\nThe second fan had its speed set to "<<fan2.getSpeed()<<", its radius to "<<fan2.getRadius()<<", and was left off(its on status set to "<<fan2.getOn()<<")."<<std::endl;
}
