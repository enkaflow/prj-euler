#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

bool isPrime(int);

int main() {
    clock_t prgm_timer= clock();
    int counter = 0;
    int max_counter = 0;
    for(int a = -999; a < 1000; ++a) {
        for(int b = -999; b < 1000; ++b) {
            if(!isPrime(b)) continue;
            counter = 0;
            while(1){
                int possiblePrime = counter * counter + a*counter + b;
                if(isPrime(possiblePrime)) {
                    counter++;
                    continue;
                }
                else break;
            }
            if(counter > max_counter) {
                cout << "new max: a="<< a << ", b=" << b << endl;
                cout << "    found " << counter << " primes" << endl;
                max_counter = counter;
            }
        }
    }   


    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}

bool isPrime(int n) {
    if(n <= 1) return false;
    int sn = sqrt(n);
    for(int i = 2; i <= sn; ++i) {
        if(n % i == 0)
            return false;
    }
    return true;   
}
