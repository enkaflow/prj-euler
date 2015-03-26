#include<iostream>
#include<ctime>

using namespace std;

int main() {
    clock_t prgm_timer= clock();



    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}
