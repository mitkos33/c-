//
// Created by Dimitar Penchev on 15.04.25.
//

#include <iostream>
using namespace std;

void  arraySum() {
    int n = 1, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    const long index = n;

    if (n >10)
    {
       cout << "Invalid size of array" << endl;
       return;
    }
    
    int* array = new int[index];

    for (int i = 0; i < index; i++) {
        cout << "Enter number: ";
        cin >> array[i];
    }

    for (int i = 0; i < index; i++) {
        sum += array[i];
    }

    cout << "Sum of array: " << sum << endl;

    array[0] = 10;

    cout << array[0] << endl;
    delete[] array;
}

int main() {
    arraySum();
    return 0;
}