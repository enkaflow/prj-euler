#include<iostream>
#include<ctime>
#include<vector>
#include<iterator>
#include<math.h>
#include<fstream>
#include<algorithm>

using namespace std;

void generatePrimes(vector<int>& v, int limit);
bool isPrime(const int);
void readPrimes(vector<int>& v);

int main() {
    clock_t prgm_timer= clock();

	int max = 0;
	vector<int> primes;
	vector<int>::iterator it;
	vector<int>::iterator jt;
	vector<int>::iterator kt;
	
	//generatePrimes(primes, 1000000);
	readPrimes(primes);
	cout << primes.size() << " primes found!" << endl;
	
	int sum;
	int dist;
	for(it = primes.begin(); it != primes.end(); ++it) {
		for(jt = it; jt != primes.end(); ++jt) {
			sum = 0;
			dist = 0;
			dist = distance(it, jt);
			if(dist <= max) continue;
			
			for(kt = it; kt != jt; ++kt) {
				sum += *kt;
			}
			if(sum > 1000000) break;
			if(find(primes.begin(), primes.end(), sum) != primes.end()) {
				if(max < dist) {
					cout << "New max: " << *it << " to " << *jt << " = " << sum << ". distance " << dist << endl;
					max = dist;
				}
			}
		}
		if(sum > 1000000) continue;
	}
	
	cout << "Last max = " << max << endl;
/*	
	cout << "Check: " << endl;
	it = find(primes.begin(), primes.end(), 34337);
	jt = find(primes.begin(), primes.end(), 34631);
	sum = 0;
	for(kt = it; kt != jt; ++kt) {
		cout << *kt << " + ";
		sum += *kt;
	}
	cout << sum << endl;
*/
    prgm_timer = clock() - prgm_timer;
    cout << "Elapsed CPU time: " << 1000*prgm_timer/CLOCKS_PER_SEC;
    return 0;
}

void generatePrimes(vector<int>& v, int limit) {
	v.clear();
	for(int i=2; i <= limit; ++i) {
		if(isPrime(i))
			v.push_back(i);
	}
}

bool isPrime(const int in) {
	if(in < 2) return false;
	if(in == 2) return true;
	if(in % 2 == 0)return false;
	for(int i=3; i <= sqrt(in); i += 2) {
		if(in % i == 0)
			return false;
	}
	return true;
}

void readPrimes(vector<int>& v) {
	ifstream fin("primes.txt", ios::in);
	while(!fin.eof()) {
		int val;
		fin >> val;
		if(fin.eof())
			break;
		v.push_back(val);
	}
}
