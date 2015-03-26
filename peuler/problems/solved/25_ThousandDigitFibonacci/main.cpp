#include<iostream>
#include<BigNumber.h>
using namespace std;

int main() {
    char a[2] = {'1', 0};
    BigNumber fn2(a);
    BigNumber fn1(a);
    BigNumber fn;

    BigNumber * fib2 = &fn2;
    BigNumber * fib1 = &fn1;
    BigNumber * fib = &fn;

    BigNumber * tmp;
    int counter = 2;

    while(fib->length() < 1000) {
        *fib = *fib1 + *fib2;

        counter++;
        if(counter < 10) {
            cout << "f" << counter << ": ";
            fib->print();
            cout << endl;
            cout << "digits: " << fib->length() << endl;
        }
        if(counter % 100 == 0) {
            cout << "checkpoint. Digits is " << fib->length() << endl;
        }
        if(counter > 4780) {
            cout << "f" << counter << ": ";
            fib->print();
            cout << endl;
            cout << "digits: " << fib->length() << endl;
        }
        if(fib->length() == 1000)
            break;
        //rotate all pointers
        tmp = fib2;
        fib2 = fib1; //fib2 is old fib1
        fib1 = fib;  //fib1 is old fib
        fib = tmp; //fib is old fib2, to be overwritten
    }

    cout << "counter: " << counter << endl;
    cout << "length is : " << fib->length() << endl;
    return 0;
}
