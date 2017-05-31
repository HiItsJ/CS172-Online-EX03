//
//  main.cpp
//  EX03
//
//  Created by Josiah on 5/30/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include "Fan.hpp"
#include "QuadraticEquation.hpp"
#include "EvenNumber.hpp"

using namespace std;

void EX01(){
    Fan fan1;
    Fan fan2;
    
    fan1.setSpeed(3);
    fan1.setOn(true);
    fan1.setRadius(10);
    
    fan2.setSpeed(2);
    fan2.setOn(false);
    fan2.setRadius(5);
    
    cout<<"Two fan objects were created!\nThe first fan had its speed set to "<<fan1.getSpeed()<<", its radius set to "<<fan1.getRadius()<<", and was turned on(its on status set to "<<fan1.getOn()<<").\nThe second fan had its speed set to "<<fan2.getSpeed()<<", its radius to "<<fan2.getRadius()<<", and was left off(its on status set to "<<fan2.getOn()<<")."<<endl;
}
void EX02(){
    int input, input2, input3;
    cout<<"Enter values for a, b, and c.\na = ";
    cin>>input;
    cout<<"b = ";
    cin>>input2;
    cout<<"c = ";
    cin>>input3;
    QuadraticEquation* eqn = new QuadraticEquation(input, input2, input3);
    cout<<"The discriminant of a, b, and c is "<<eqn->getDiscriminant()<<endl;
    if (eqn->getDiscriminant()>0){
        cout<<"The two roots are "<<eqn->getRoot1()<<" and "<<eqn->getRoot2()<<endl;
    }
    if (eqn->getDiscriminant()==0){
        cout<<"The one root is "<<eqn->getRoot1()<<endl;
    }
    else if (eqn->getDiscriminant()<0){
        cout<<"There are no real roots."<<endl;
    }
}
void EX03(){
    EvenNumber* number = new EvenNumber(16);
    cout<<"16 is an even number!\nThe next even number after 16 is "<<number->getNext()<<"\nThe previous even number before 16 is "<<number->getPrevious()<<endl;
}
//EX04
string stringSort(string& s){
    string sorted = "";
    for (int i=0; i<s.length()-1; i++){
        if (s.substr(i, i+1)>s.substr(i+1, i+2)){
            
        }
    }
    return sorted;
}
int main(){
    EX01();
    EX02();
    EX03();
}
