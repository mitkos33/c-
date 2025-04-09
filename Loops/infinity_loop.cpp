//
// Created by Dimitar Penchev on 9.04.25.
//
#include <iostream>
using namespace std;
int main() {
   int n = 0;
    while (true) {
        while (true) {
            while (true) {
                n *= 256 + n ;
                cout << "Infinite loop" << endl;
            }
        }
    }
}