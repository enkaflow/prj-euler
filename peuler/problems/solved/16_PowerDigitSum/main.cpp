#include<iostream>
#include"BigNumber.h"
#include<string>
#include<string.h>

using namespace std;


int main() {
    string input;
    char a[2] = { '1', 0 };
    BigNumber number(a);

    number.print();

    for(int i = 0; i < 1000; ++i) {
        
        number = number * 2;
    }

    number.print();
    cout << "digit sum: " << number.digitSum();
    cout << "length: " << number.length();
    return 0;
}
