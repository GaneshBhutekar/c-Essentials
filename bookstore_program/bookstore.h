#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include<iostream>
using namespace std;
// create class which contain revenue,isbn and average all the time

// we are doing +,<< and >>
class bookstore{
    public:
    double revenue = 0.0; // this will be the value after the defining the object which is uninitilized
    double avg_price = 0.0;
    string isbn;
    int times =1;

};

istream& operator>>(istream& os,bookstore &s){
    cout<<"enter the isbn id: ";
    os>>s.isbn;
    cout<<"enter the price"<<endl;
    cin >> s.revenue;
    return os;
    
}

ostream& operator<<(ostream& os,bookstore &s){
    cout<<"isbn id: "<<s.isbn<<"\ntotal revenue: "<<s.revenue<<"\navg price to sold: "<<s.avg_price<<endl;
    cout<<"times: "<<s.times<<endl;
    s.times=1;
    return os;
}

int operator+(bookstore &s1,bookstore &s2){
    // add and put this again to the s2
    s2.revenue = s2.revenue+ s1.revenue;
    s2.times++;
    s2.avg_price = (s2.revenue)/s2.times;
    return 0;
    
}
#endif