//
//  EvenNumber.hpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef EvenNumber_hpp
#define EvenNumber_hpp

#include <stdio.h>

class EvenNumber{
    int value;
public:
    EvenNumber();
    EvenNumber(int x);
    int getValue();
    int getNext();
    int getPrevious();
};

#endif /* EvenNumber_hpp */
