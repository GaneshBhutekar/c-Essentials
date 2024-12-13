#include<iostream>
using namespace std;

void printvariable();
void incrementit();
extern int addition(int a,int b);
// extern int secret_variable = 1000; ERROR,,,,,
// extern int secret_variable;

int main(){
    // we declare the function above just like we declare std::cout and 
    // std:: cin when we use #include<iostream>
    std::cout<<"value before incrementation "<<std::endl;
    printvariable();
    incrementit();
    std::cout<<"after the incrementation "<<std::endl;
    printvariable();
    int ans = addition(4,3);
    std::cout<<"answer of addtion is "<<ans<<std::endl;
    extern int  secret_variable;
    secret_variable = 10000;
    std::cout<<"seceret variable value: "<<secret_variable<<endl;
}