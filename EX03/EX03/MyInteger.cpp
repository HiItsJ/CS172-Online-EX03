//
//  MyInteger.cpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "MyInteger.hpp"

MyInteger::MyInteger(int x){
    value = x;
}
const int MyInteger::getValue(){
    return value;
}
const bool MyInteger::isEven(){
    if (value%2 == 0){
        return true;
    }
    else {
        return false;
    }
}
const bool MyInteger::isOdd(){
    if (value%2 == 1){
        return true;
    }
    else {
        return false;
    }
}
bool MyInteger::isEven(int x){
    if (x%2 == 0){
        return true;
    }
    else {
        return false;
    }
}
bool MyInteger::isOdd(int x){
    if (x%2 == 1){
        return true;
    }
    else {
        return false;
    }
}
const bool MyInteger::equals(int x){
    if (value == x){
        return true;
    }
    else {
        return false;
    }
}
