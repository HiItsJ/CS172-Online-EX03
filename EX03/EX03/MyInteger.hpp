//
//  MyInteger.hpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef MyInteger_hpp
#define MyInteger_hpp

#include <stdio.h>

class MyInteger{
    int value;
public:
    MyInteger(int x);
    const int getValue();
    const bool isEven();
    const bool isOdd();
    const bool isPrime();
    static bool isEven(int x);
    static bool isOdd(int x);
    static bool isPrime(int x);
    static bool isEven(const MyInteger& x);
    static bool isOdd(const MyInteger& x);
    static bool isPrime(const MyInteger& x);
    const bool equals(int x);
    const bool equals(const MyInteger& x);
    static int parseInt(const string& s);
};

#endif /* MyInteger_hpp */
