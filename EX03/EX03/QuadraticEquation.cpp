//
//  QuadraticEquation.cpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "QuadraticEquation.hpp"

QuadraticEquation::QuadraticEquation(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
}
int QuadraticEquation::getA(){
    return a;
}
int QuadraticEquation::getB(){
    return b;
}
int QuadraticEquation::getC(){
    return c;
}
int QuadraticEquation::getDiscriminant(){
    return pow(b, 2)-4*a*c;
}
double QuadraticEquation::getRoot1(){
    if (getDiscriminant()==0){
        return 0;
    }
    return (-b+sqrt(pow(b, 2)-4*a*c))/(2*a);
}
double QuadraticEquation::getRoot2(){
    if (getDiscriminant()==0){
        return 0;
    }
    return (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
}
