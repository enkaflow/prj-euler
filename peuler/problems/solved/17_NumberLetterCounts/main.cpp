#include<iostream>

using namespace std;

int letterCount(int);

int main() {
    int sum = 0;
    for(int i=1; i < 1000; i++) 
        sum += letterCount(i);

    cout << sum;
    return 0;
}

int letterCount(int input) {
    int letters = 0;
    int unit, tens, hunnits; 
    

    unit = input%10;
    input /= 10;
    tens = input%10;
    input /= 10;
    hunnits = input%10;
    bool hasHundred = (hunnits == 0) ? false: true;

    switch(hunnits) {
        case 0:
            break;
        case 1:
            cerr << "one hundred ";
            letters += 10;
            break;
        case 2:
            cerr << "two hundred ";
            letters += 10;
            break;
        case 3:
            cerr << "three hundred ";
            letters += 12;
            break;
        case 4:
            cerr << "four hundred ";
            letters += 11;
            break;
        case 5:
            cerr << "five hundred ";
            letters += 11;
            break;
        case 6:
            cerr << "six hundred ";
            letters += 10;
            break;
        case 7:
            cerr << "seven hundred ";
            letters += 12;
            break;
        case 8:
            cerr << "eight hundred ";
            letters += 12;
            break;
        case 9:
            cerr << "nine hundred ";
            letters += 11;
            break;
    } //x hundred

    if(tens > 0 || unit > 0) {
        if(hasHundred) {
            letters += 3; //and
            cerr << "and ";
        }
    }  

    bool teens = false;
    switch(tens) {
        case 0:
            break;
        case 1:
            teens = true;
            switch(unit) {
                case 0:
                    cerr << "ten ";
                    letters += 3;
                    break;
                case 1:
                    cerr << "eleven ";
                    letters += 6;
                    break;
                case 2:
                    cerr << "twelve ";
                    letters += 6;
                    break;
                case 3:
                    cerr << "thirteen ";
                    letters += 8;
                    break;
                case 4:
                    cerr << "fourteen ";
                    letters += 8;
                    break;
                case 5:
                    cerr << "fifteen ";
                    letters += 7;
                    break; 
                case 6:
                    cerr << "sixteen ";
                    letters += 7;
                    break;
                case 7:
                    cerr << "seventeen ";
                    letters += 9;
                    break;
                case 8:
                    cerr << "eighteen ";
                    letters += 8;
                    break;
                case 9:
                    cerr << "nineteen ";
                    letters += 8;
                    break;
            }
            break;
        case 2:
            cerr << "twenty ";
            letters += 6;
            break;
        case 3:
            cerr << "thirty ";
            letters += 6;
            break;
        case 4:
            cerr << "forty ";
            letters += 5;
            break;
        case 5:
            cerr << "fifty ";
            letters += 5;
            break;
        case 6:
            cerr << "sixty ";
            letters += 5;
            break;
        case 7:
            cerr << "seventy ";
            letters += 7;
            break;
        case 8:
            cerr << "eighty ";
            letters += 6;
            break;
        case 9:
            cerr << "ninety ";
            letters += 6;
            break;
    }
 
    if(teens) {
        cerr << endl;
        return letters;
    }

    switch(unit) {
        case 0:
            break;
        case 1:
            cerr << "one";
            letters += 3;
            break;
        case 2:
            cerr << "two";
            letters += 3;
            break;
        case 3:
            cerr << "three";
            letters += 5;
            break;
        case 4:
            cerr << "four";
            letters += 4;
            break;
        case 5:
            cerr << "five";
            letters += 4;
            break;
        case 6:
            cerr << "six";
            letters += 3;
            break;
        case 7:
            cerr << "seven";
            letters += 5;
            break;
        case 8:
            cerr <<"eight";
            letters += 5;
            break;
        case 9:
            cerr << "nine";
            letters += 4;
            break;
    }
    cerr << endl; 
    return letters; 
}
