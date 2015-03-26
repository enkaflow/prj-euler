#include<iostream>

using namespace std;

int main() {
    int counter = 1;    
    for(int b = 0; b <= 2; ++b) { //100
    for(int c = 0; c <= 4; ++c) { //50
    for(int d = 0; d <= 10; ++d) { //20
    for(int e = 0; e <= 20; ++e) { //10
    for(int f = 0; f <= 40; ++f) { //5
    for(int g = 0; g <= 100; ++g) {
    for(int h = 0; h <= 200; ++h) {
        if(h + 2*g + 5*f + 10*e + 20*d + 50*c + 100*b == 200)
            counter++;


}
}
}
}
}
    }
    }

    cout << counter;

    return 0;
}

//1, 2, 5, 10, 20, 50, 100, 200

