#include<iostream>
#include"BigNumber.h"
#include<string>
#include<string.h>

using namespace std;


int main(int argc, char* argv[]) {
    string input;
    char a[2] = { '1', 0 };
    BigNumber number(a);

    for(int i = 1; i < 101; ++i) {
        number = number * i;
    }

    number.print();
    cout << "digit sum: " << number.digitSum();
    cout << "length: " << number.length();
    return 0;
}
