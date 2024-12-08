
#ifndef SALES_ITEM_H
#define SALES_ITEM_H
#include<iostream>
using namespace std;
class sales_item{
    public:
    float total_revenue =0.0;
    int cps_sold =0;
    float avg_price=0.0;
    string book_name = "not mentioned";
    string isbn;
    sales_item(string isbn){
        this-> isbn = isbn;
    }

    void sold(float price){
        // change the average
        avg_price = (cps_sold*avg_price + price)/(cps_sold+1.00);
        ++cps_sold;
        total_revenue+=price;
    }

    void details(){
        cout<<"book isbn: "<<this->isbn<<endl;
        cout<<"total book sold: "<<this->cps_sold<<endl;
        cout<<"total revenue generated: "<<this->total_revenue<<"$"<<endl;
        cout<<"average price to sale: "<<this->avg_price<<"$"<<endl;

    }

    /*
    * The below operator is non member funcition but using friend we can include it in class
    * The First one is for ostream object (cout etc) so whenever  '<<' used in other files this function will be called
    * This function have parameter first one is os which is ostream object and other is s which data type os class name
    * The function return ostream again
    * Similary istream << function do. 
    * we can create this for other operator as well we may see this in future
    
    */
    friend ostream& operator<<(ostream& os,const sales_item& s){
        os<<"isbn number is "<<s.isbn<<endl;
        return os;
    }
    friend istream& operator>>(istream& os,sales_item& s){
        cout<<"enter the book name"<<endl;
        cin>>s.book_name;
        return os;
    }

};

#endif