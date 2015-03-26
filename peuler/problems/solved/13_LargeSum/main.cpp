#include<iostream>
#include<BigNumber.h>
#include<string>
#include<string.h>

using namespace std;

int main() {
    string input;
    BigNumber sum;

    while(1) {
        cin >> input;
        if(cin.eof()) {
            break;
        }    
        BigNumber addend(input.c_str());
        sum = sum + addend;
    }

    sum.print();


    return 0;
}
