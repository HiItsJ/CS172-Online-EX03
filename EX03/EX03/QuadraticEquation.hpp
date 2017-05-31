//
//  QuadraticEquation.hpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef QuadraticEquation_hpp
#define QuadraticEquation_hpp

#include <stdio.h>
#include <math.h>

class QuadraticEquation{
    int a, b, c;
public:
    QuadraticEquation(int a, int b, int c);
    int getA();
    int getB();
    int getC();
    int getDiscriminant();
    double getRoot1();
    double getRoot2();
};

#endif /* QuadraticEquation_hpp */
