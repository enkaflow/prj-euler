#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    clock_t prgm_timer= clock();
    int counter = 0;
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    do {
        counter++;
        if(counter == 1000000) {
            for(int i =0; i < 10; ++i) {
                cout << digits[i];
            }   
            break;
        }
    } while(next_permutation(digits.begin(), digits.end()));

    prgm_timer = clock() - prgm_timer;
    cout << endl << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}
