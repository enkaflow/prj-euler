#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

int main() {
    clock_t prgm_timer= clock();
    
    for(int i = 1; i < 10; i++) {
        for(int j = i; j < 10; j++) {
            for(int k = 0; k < 10; k++) {
                if(i == j && j ==k) continue;
                float frac = (10*i + j)/static_cast<float>(10*j+k);
                float frac2 = static_cast<float>(i)/k;
                if( fabs (frac-frac2) < 0.001) {
                    cout << 10*i+j << "/" << 10*j+k << endl;
                }
            }
        }
    }


    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}
