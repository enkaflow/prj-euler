#ifndef BIGNUMBER_H
#define BIGNUMBER_H

class BigNumber {
public:
    void flushCarries();
    BigNumber();
    BigNumber(const int);
    BigNumber(const char *);
    int length() const;
    void print() const;
    int digitSum() const;

    BigNumber operator+ (const BigNumber & addend);
    void operator= (const BigNumber & input);
    BigNumber operator* (const int);
    BigNumber operator* (const BigNumber & multiplicand);
    
private:    
    int _number[1000];
};

#endif
