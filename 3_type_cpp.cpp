#include<iostream>
using namespace std;
int main(){
    signed int num = 2247483647;
    /*
    * for signed it means minimum value will be: -2147483648 
    * and maximum vavlue would be : 2147483647
    * and for signed case :minimum = 0;
    *                      maximum = 4294967295
    * 
    *
    * CASE OF Char
    * signed char minimum: -128
    *             maximum: 127
    * unsigned char minimum: 0;
    *               maximum: 255
    * 
    
    */ 
   unsigned int unsigned_value = 4294967295;
   int signed_value = 4294967295;
   cout<<"unsigned int on 4294967295 is: "<<unsigned_value<<endl;
   cout<<"signed int on 4294967295 is: "<<signed_value<<endl;
   signed char ch1 = -19;
   unsigned char ch2 = -19; // the character out is same becausebith storing the same binary number check the int they have

   cout<<"signed char on -10 is: "<<(int)ch1<<endl;
   cout<<"unsigned char on -10 is: "<<(int)ch2<<endl;// this is because it storing the number from 0 to 255!!

   short int m = 30000;
   cout<<"short value is "<<m<<endl;

    
}