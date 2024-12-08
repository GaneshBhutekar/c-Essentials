#include<iostream>
#include "bookstore.h"
/*
    * program to get the input 
    * isbn,revenue,price
    * and when the isbn changed just print the book isbn , avg price,total revenue
    * and then proceed with new isbn.
    */ 
using namespace std;
int main(){
    bookstore currTrasc;
    bookstore Trasc;
    if (cin>>currTrasc){
        while(cin>>Trasc){
            // now we have two transaction just take a look '
            if (currTrasc.isbn == Trasc.isbn){
                // you have to add the 
                Trasc+currTrasc;

            }else{
                cout<<currTrasc;
                currTrasc = Trasc;
            }
        }
    }
    


}