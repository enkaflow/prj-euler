#ifndef DATE_H
#define DATE_H

#include<algorithm>

class Date {
public:
    Date(int month, int day, int year);
    Date(const Date&);
    Date();

    void print();

    void advDay();
    void advMonth();
    void advYear();  

    void setDay(const int d) {_day = d;}
    void setMonth(const int m) {_month = m;}
    void setYear(const int y) {_year = y;}
    int getDay() {return _day;}
    int getMonth() {return _month;}
    int getYear() {return _year;} 
 
    bool isLeapYear(); 
    static bool isLeapYear(int year);

    friend void swap(Date& first, Date& second);   

    Date& operator=(Date);
    Date& operator+=(const int);
    Date& operator++();
    bool operator==(const Date&);
    bool operator>(const Date&);
    bool operator<(const Date&);
    bool operator>=(const Date&);
    bool operator<=(const Date&);
private:
    int _month;
    int _day;
    int _year;
    
    static const int _monthSizes[13];
};


#endif
