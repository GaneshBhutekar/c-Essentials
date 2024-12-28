#include<iostream>


/*
    DESCRIPTION:
    just read the variable from right to left to get the type and how declarator works
*/
int main(){
    const double num = 90.99;
    const double *ptr = &num;
    double num1 = 66.8;
    ptr = &num1;
    /*
    * here the const to pointer is pointing to the ptr itself so 
    * Because of thet you cnnot change the object value through ptr
    * but you can change the object to next object by pointing on next address 
    */
    std::cout<<"value that pointed by ptr is "<<*ptr<<std::endl;

    
    
    
    // if we point const ptr then 
    int var = 100;
    int *const myptr = &var;
    *myptr = 78;
    int var1 = 56;
    // myptr = &var1;
    /*
    * Here we can change the the valuye of the object through poiinter .myptr
    * because * is not on myptr 
    * But you cannot change the object because the pointer is at const that's why.
    */
    std::cout<<var<<std::endl;



    int num2 = 69;
    const int *p = &num2; // so it should not change the value of the object
    // the abive is same to int const *p = &num2;
    int num3 = 89;
    p = &num3;


    int num3 = 115;
    const int *const p1 = &num3;
    // here we cannot change the value of num3 by p1 and also cannot
    // change the address pointed by p1.




}