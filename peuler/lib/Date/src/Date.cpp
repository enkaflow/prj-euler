#include"Date.h"
#include<iostream>

using namespace std;

const int Date::_monthSizes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/*** CONSTRUCTORS ***/

Date::Date(int month, int day, int year) :
        _month(month),
        _day(day),
        _year(year) {}
Date::Date(const Date& d) :
        _month(d._month),
        _day(d._day),
        _year(d._year) {}
Date::Date() :
        _month(1),
        _day(1),
        _year(1900) {}
/*** END CONSTRUCTORS ***/

/*** MEMBER FUNCTIONS ***/
void Date::print() {
    std::cout << _month << "/" << _day << "/" << _year << std::endl;

}
void Date::advDay() { 
    _day++;
    if(_month == 2 && isLeapYear()) {
        if(_day == 30) {
            _day = 1;
            advMonth();
        }
        return;
    }
    if(_day > _monthSizes[_month]) {
        _day = 1;
        advMonth();       
    }
}

void Date::advMonth() {
    _month++;
    if(_month == 13) {
        _month = 1;
        advYear();
    }
}
void Date::advYear() {_year++;}

bool Date::isLeapYear() {
    return isLeapYear(_year);
}

bool Date::isLeapYear(int year) {
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }    
    return false;
}
/*** END MEMBER FUNCTIONS ***/

/*** OPERATORS ***/

Date& Date::operator=(Date rhs) {
    swap(*this, rhs);   
    return *this;
}

Date& Date::operator+=(const int n) {
    for(int i = 0; i < n; ++i)
        advDay();
    return *this;
}

Date& Date::operator++() {
   advDay();
   return *this;
}

bool Date::operator==(const Date& d) {
    if(d._year == _year) {
        if(d._month == _month) {
            if(d._day == _day) {
                return true;
            }
        }
    }
    return false;
}

bool Date::operator>(const Date& d) {
    if(_year > d._year) 
        return true;
    else if (_year == d._year) {
        if(_month > d._month)
            return true;
        else if(_month == d._month) {
            if(_day > d._day)
                return true;
        }
    }
    return false;
}

bool Date::operator<(const Date& d) {
    if(_year < d._year) 
        return true;
    else if (_year == d._year) {
        if(_month < d._month)
            return true;
        else if(_month == d._month) {
            if(_day < d._day)
                return true;
        }
    }
    return false;
}

bool Date::operator>=(const Date& d) {
    return (*this > d) || (*this == d); 
}

bool Date::operator<=(const Date& d) {
    return (*this < d) || (*this == d);
}

/*** END OPERATORS ***/

/*** FRIEND FUNCTION ***/
void swap(Date& first, Date& second) {
    using std::swap;
    swap(first._month, second._month);
    swap(first._day, second._day);
    swap(first._year, second._year);
}
/*** END FRIEND FUNCTIONS ***/
