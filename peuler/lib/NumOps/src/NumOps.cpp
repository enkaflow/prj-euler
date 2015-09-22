#include "NumOps.h"
#include <math.h>

namespace kdubs {
    bool isPrime(int n) {
        if(n%2 == 0) return false;
        for(int i=3; i <= n/2; ++i)  { 
            if(n%i == 0) return false;
        }
        return true;
    }

    bool isSquare(int n) {
        return sqrt(n) == floor(sqrt(n));
    }  

    int digitSum(int n) {
        int sum = 0;
        if(n < 0) return -1;
        while(n != 0) {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }

    int numProperDivisors(int n) {
        return 0;
    }

}//namespace kdubs
