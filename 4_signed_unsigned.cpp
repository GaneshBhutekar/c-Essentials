#include<iostream>
using namespace std;
int main(){
    unsigned char actor = 257; // this will store mod qith 255
    char actor1 = 128; // this will store the mod with 127
    cout<<actor<<endl;
    cout<<actor1<<endl; 
    unsigned int num = 4294967296; // this one is maximum from limit 4,294,967,295 so the value stored will be mod with 4,294,967,295
    cout<<"number will be "<<num<<endl;
    char character = 1000;
    cout<<character<<endl;
    if (-10){
        cout<<"zero is only false and all are true"<<endl;

    }
    else{
        cout<<"no negative numbers are also false "<<endl;
    }

    /*
    *  now we will check what will happen if we trye to do operwtion arithmaticaly on unsigned and signed ones    
    */


   // ADDITION.
   int x = -10; 
   unsigned y = 1;
   cout<<x+x<<endl;
   cout<< x+y<<endl; // here value of x will change to the unsigned by 4294967296 - 10 = 4294967286 (x value);
   // The behavior is same like storomg the negative number to unsigned object like
   unsigned int z = -10;
   cout<<"value is "<<z<<endl;

    // SUBSTRACTION.
    unsigned int a = 10;
    unsigned b = 100;
    cout<<a+b<<endl;
    cout<<a-b<<endl; // here the output is below 0 so it will suvstract the maximum value 4294967296 called "wrap around"
    
    // unsinged on loop
    /*
    * as we know that if value becames less than 0 in unsigned case it will wrap again in 
    * between the range from last 4294967296 ity means -1 became 4294967295 ......
    * * So in loop if loop is to iterate where i is decreaseing tilll 0 it will go infinite because
    * after 0 -1 in unsigned became 4294967295 and it will goes on
    * to avaoid this don't use unsigned  or don't let i go to negative
    */
   for(unsigned i = 10;i>=0;--i){ // infinitely treverse
    cout<<"i will not stop"<<endl;
    if (i == 4294967200){
        cout<<"this is going to infinite but stop at this iteration"<<endl;
        break;
    }
   }

   for(unsigned i = 11;i>0;--i){
    cout<<"it will stop!!!!!"<<endl;
   }

/*
                                AT THE END CONCLUSION
            Don't mix up the objects of signed and unsigned during the expresion
            if there is ensure that how to handles unsigned ones.

*/


}