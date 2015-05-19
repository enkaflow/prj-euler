#include<iostream>
#include<ctime>

using namespace std;

int fact(int);
int factSum(int);

int main() {
    clock_t prgm_timer= clock();

    int sum = 0;
    for(int i = 10; i < 2540160; ++i) {
        if(i == factSum(i)) {
            cout << "found " << i << endl;
            sum += i;
        }
    }

    cout << endl << "sum : " << sum << endl;

    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}

int factSum(int in) {
    int sum = 0;    
    while(in != 0) {
        sum += fact(in%10);
        in /= 10;       
    }    

    return sum;
}

int fact(int in) {
    switch(in) {
        case 0: return 1;
        case 1: return 1;
        case 2: return 2;
        case 3: return 6;
        case 4: return 24;
        case 5: return 120;
        case 6: return 720;
        case 7: return 5040;
        case 8: return 40320;
        case 9: return 362880;
        default:
            cout << "factorial domain error" << endl;
            return 0;
    }
}
