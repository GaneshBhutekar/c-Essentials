#include<iostream>


const int r1 = 100;
// int &ref1 = r1; ERROR beacuse you cannot use normal reference to the constant variable
const int &ref2 = r1;

int num = 15;
const int &ref3  = 15;
int main(){
    // ref3++; not possiblw you cannot change object value from there constant reference.
    std::cout<<num<<std::endl;

    // Example
    double num1 = 3.14;
    const int &ri = num1; // we know that ri is constant!
    std::cout<<ri<<std::endl;
    /*
    here what happend
    const int temp = num1; // ri is pointing to the temp
    const int&ri = temp; just beause the data ty[e is changed
    */

   // if ri is not constant 
//    int &ri1 = num1;
//    std::cout<<ri1<<std::endl;

   int j = 34;
   int &r1 = j;
   const int &r2 = j;
   // we can change the value by r1 but not by r2;
   ++r2;
   std::cout<<j<<std::endl;

}