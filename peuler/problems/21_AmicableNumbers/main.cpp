#include<iostream>
#include<ctime>

using namespace std;

void calculateDivisorSums(int numbers[], const int limit);

int main() {
    clock_t prgm_timer= clock();

    int divisorSum[10000] = {0};
    bool amicableNumbers[10000] = {0};

    calculateDivisorSums(divisorSum, 10000);    

//    for(int i = 0; i < 10000; ++i) {
//        cout << "array[" << i << "] = " << divisorSum[i] << endl;
//    }

    //find all amicable pairs
    for(int i = 2; i < 10000; ++i) {
        int amic = divisorSum[i];
        if(amic >= 10000) 
            continue;
        if((divisorSum[amic] == i) && (amic != i)) {
            amicableNumbers[i] = true;
            amicableNumbers[amic] = true;
        }
    }

    //find sum
    int sum = 0;
    for(int i = 2; i < 10000; ++i) {
        if(amicableNumbers[i] == true)
            sum += i;
    }
    
    cout << sum << endl;

    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}

void calculateDivisorSums(int numbers[], const int limit) {
//assumes size of numbers is >= limit...    
    for(int i = 2; i < limit; ++i) {
        numbers[i] = 0;
        for(int j=1; j<i; ++j) {
            if(i%j == 0)
                numbers[i] += j;
        }   
    }
}
