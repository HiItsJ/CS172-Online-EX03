//
//  Fan.hpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Fan_hpp
#define Fan_hpp

#include <stdio.h>

class Fan{
    int speed;
    bool on;
    double radius;
public:
    Fan();
    int getSpeed();
    bool getOn();
    double getRadius();
    void setSpeed(int s);
    void setOn(bool o);
    void setRadius(double r);
};

#endif /* Fan_hpp */
