#include<iostream>
int main(){
    int value = 10;
    int *ptr = &value;
    int &re1 = *ptr; 

    /*
    Basically Here re1 is working as a reference which pointing to the 
    dereference of ptr which is value and value has memory so re1 is 
    L value reference

    just here abive we can see that * and & are used diff 
    1. as a declarator (it made  compound type)
    2. as operator 
    */
    std::cout<<re1<<std::endl;
    re1++;
    std::cout<<value<<std::endl;

    // NULL pointer
    // not pointing to anyone
    int *pt = nullptr;
    int *pt1 = NULL;
    int *pt2 = 0;
    int *pt3;
    // this ALL are same
    // std::cout<<*pt1<<std::endl; // here * is using for dereferencing
    // std::cout<<*pt3<<std::endl;
    int num = 0;
    // int *myptr = num; // This is not valid because 0 is int type....
    std::cout<<num<<std::endl;
    /*
    we should not use uninitialized pointer because it may ne pointing to garbage value
    random address (valid one),
    */

   /*
   DIFFERENCE Between pointer and reference
   1. reference is not a object,pointer is
   2. reference can only point to one object in a lifetime it's just a alias, Whereas pointer where assisgnment
   operator works it will point itself to the new value.
   */
  if (pt1){
    std::cout<<"it is not undefined "<<std::endl;
  }else{
    std::cout<<"it is undefined"<<std::endl;
  }

  if(ptr){
    std::cout<<"is valid and not undefined"<<std::endl;
  }else{
    std::cout<<"it is not valid and undefined"<<std::endl;
  }

  if(pt1==pt){
    std::cout<<"both are pointing at null "<<std::endl;
  }else{
    std::cout<<"both pointing on the null but not same"<<std::endl;
  }

  // VOID POINTER
  int value2 = 10;
  double value3  = 34.12;
  int *onlyint = &value2;
  std::cout<<"this is not null pointer "<<*onlyint<<std::endl;
  void* mypoint = &value2;
//   std::cout<<"value of value2"<<*mypoint<<std::endl;
//   mypoint = &value3;                               // we cannot access the value because we don't know the type of the value
//   std::cout<<"value of value3"<<*mypoint<<std::endl;

/*
from NULL POINTER we can do only memory to memory actions , not with their object because
we don't know the type of the object
example that what we can do\
1. pass the void pointer to function to transfer the memory address
2. acion between memory to memory no object involve.
*/

int val1 = 10;
double val2 = 23.23;
void* P1 = &val1;
void* P2 = &val1;
void* P3 = &val2;
if (P1 == P2){
    std::cout<<"yes P1 and P2 is equall both are defined by void"<<std::endl;
}else{
    std::cout<<"not EQUALL"<<std::endl;
}
if (P1==P3){
    std::cout<<"how is this possible"<<std::endl;
}else{
    std::cout<<"yes they stire diffferent memory address but they dont know the type of object  it is"<<std::endl;
}
int vALUE = 5;
int *p = &vALUE;
if (p){std::cout<<"HAAAAAAAAAAa"<<std::endl;}
if(*p){std::cout<<"BHAI ZERO NAHI HAIN"<<std::endl;}

//EXERCISE
int i = 42;
int *POINT = &i;
*POINT = *POINT * *POINT;
std::cout<<"arithmetic answer is "<<i<<std::endl;


}