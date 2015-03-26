#include "BigNumber.h"
#include <iostream>

BigNumber::BigNumber() {
    for(int i=0; i< 1000; ++i) {
        _number[i] = 0;
    }
}

BigNumber::BigNumber(const int n) {
}

BigNumber::BigNumber(const char *number) {
    int length = 0;
    while(number[length] != '\0') {
        length++;
    }

    for(int i = 0; i < 1000; ++i) {
        _number[i] = 0;
    }

    for(int i = 0; i < length; ++i) {
        _number[999-length+i+1] = static_cast<int>( number[i] - '0' );
    }
}

int BigNumber::length() const {
    int index;
    for(int i = 0; i < 1000; ++i) {
        if(_number[i] != 0) { 
            index = i;
            break;
        }
        if(i == 999)
            return 0;
    }
    return 1000-index; 
}

void BigNumber::print() const {
    int len = this->length();
    for(int i = 0; i < len; ++i) {    
        std::cout << _number[1000-len+i];
    }
    std::cout << std::endl;
}

int BigNumber::digitSum() const{
    int sum = 0;
    for(int i = 0; i < 1000; ++i) {
        sum += _number[i];
    }
    return sum;
}
//operators/////////////////////
BigNumber BigNumber::operator+ (const BigNumber & addend) {
    BigNumber sum;

    for(int i = 0; i < 1000; ++i) {
        sum._number[i] = _number[i] + addend._number[i];
    }

    sum.flushCarries(); 
    return sum;
}

void BigNumber::operator= (const BigNumber & input) {
    for(int i = 0; i < 1000; ++i) {
        _number[i] = input._number[i];
    }   
}

BigNumber BigNumber::operator* (const int mult) {
    BigNumber product;
    for(int i = 0; i < 1000; ++i) {
        product._number[999-i] = _number[999-i] * mult;       
    }   

    product.flushCarries();
    return product;
}

BigNumber BigNumber::operator* (const BigNumber& mult) {
        
}
//end operators////////////////

//utility function

void BigNumber::flushCarries() {
    for(int i = 999; i >= 0; --i) {
        if(i == 0) break;
        _number[i-1] += _number[i]/10;
        _number[i] = _number[i] % 10;
    }
}
