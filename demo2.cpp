#include<iostream>
typedef long long int lli; 
using letter = std::string;
int main(){
    lli num = 13442735821;
    std::cout<<"number is "<<num<<std::endl;
    letter character = "hello world";
    std::cout<<character<<std::endl;

    // aliases on the pointer.
    typedef char *pstring;
    const pstring cstr = 0;
    const pstring *ps;
    
}