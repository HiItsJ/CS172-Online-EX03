//
//  EvenNumber.cpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "EvenNumber.hpp"

EvenNumber::EvenNumber(){
    value = 0;
}
EvenNumber::EvenNumber(int x){
    value = x;
}
int EvenNumber::getValue(){
    return value;
}
int EvenNumber::getNext(){
    return value+2;
}
int EvenNumber::getPrevious(){
    return value-2;
}
