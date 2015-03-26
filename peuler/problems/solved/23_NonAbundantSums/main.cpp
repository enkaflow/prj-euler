#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool isAbundant(int);
int main() {
    vector<int> abundantNums;
    for(int i = 0; i < 28123; ++i) {
        if(isAbundant(i)) {
            abundantNums.push_back(i);
        }
    }   

    cout << "abundant nums found..." << endl;

    set<int> possibleSums;
    
    for(int i=0; i < abundantNums.size(); ++i) {
        for(int j=0; j < abundantNums.size(); ++j) {
            int sum = abundantNums[i] + abundantNums[j];
            if(sum > 28123) continue;
            possibleSums.insert(sum);
        }
    } 
   
    cout << "possible sums found..." << endl;

    int total = 0;
    for(int i=0; i < 28123; ++i) {
        if(possibleSums.find(i) == possibleSums.end())
            total += i;
    } 

    cout << "total is " << total << endl;

    return 0;
}

bool isAbundant(int n) {
    int sum = 0;
    for(int i=1; i <= n/2; ++i) {
        if((n%i) == 0) {
            sum += i;
        }
    }
    return sum > n;
}
