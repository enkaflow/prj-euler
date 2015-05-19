#include<iostream>
#include<ctime>
#include<Date.h>
using namespace std;

int main() {
    clock_t prgm_timer= clock();

    Date d(1, 7, 1900);
    Date start(1, 1, 1901);
    Date end(12, 31, 2000);

    while(d < start) {
        d += 7;
    }

    int sundayCount = 0;
    while(d < end) {
        d.print();
        if(d.getDay() == 1) {
            sundayCount++;
            cout << " ^^^ is Sunday!! " << endl;
        }
        d += 7;
    }

    cout << "#sundays: " << sundayCount << endl;

    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}
