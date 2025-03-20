//
// Created by Dimitar Penchev on 19.03.25.
//
#include <iostream>
#include "loop.h"
using namespace std;
int main(){

    // Print Hello world message 10 times
    for (int i = 0; i <= 10; i++)
    {
        cout << "Hello world: " <<i << endl;
    }

    // Multiply number by 2 until it is greater than 10
    int number = 4;
    for (int i = 1; i < 5; i++)
    {
        number *= 2;

        if (number >10){
            cout << "After " << i << " interations." << endl;
            cout << "Number is bigger than 10" << endl;
            break;
        }
       
    }

    // Print even numbers up to the value of number
    for (int i = 0; i <= number; i++)
    {
        if (i % 2 == 0){
            continue;
        }
        cout << i << endl;
    }
    

    return 0;

} 