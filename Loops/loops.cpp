#include <iostream>
using namespace std;

int main() {
    cout << "Примери за цикли в C++\n\n";
    
    // For цикъл
    cout << "1. For цикъл (извежда числа от 1 до 5):\n";
    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";
    
    // While цикъл
    cout << "2. While цикъл (извежда числа от 1 до 5):\n";
    int j = 1;
    while(j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << "\n\n";
    
    // Do-while цикъл
    cout << "3. Do-while цикъл (извежда числа от 1 до 5):\n";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while(k <= 5);
    cout << "\n\n";
    
    // Вложен for цикъл (матрица)
    cout << "4. Вложен for цикъл (създава матрица 3x3):\n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout << "[" << row << "," << col << "] ";
        }
        cout << "\n";
    }
    
    return 0;
} 