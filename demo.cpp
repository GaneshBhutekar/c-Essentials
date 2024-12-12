#include<iostream>
#include<typeinfo>
int main(){
    int num1 = 100,num2 = 1000,num3;
    std::cout<<"hello world"<<std::endl;
    std:: string book("101x-123"); // oooo you can initia;ise the string like this also
    int num(100); // because num and book are thhe object and they take literals as a parameter to constructor
    std::cout<<"number initialized by bracket "<<num<<std::endl;
    std::cout<<"book name is "<<book<<std::endl;
    
    std::cout<<typeid(num).name()<<std::endl;
    std::cout<<typeid(book).name()<<std::endl;
    char a = '1';
    std::cout<<typeid(a).name()<<std::endl;
    bool var = true;
    std::cout<<typeid(var).name()<<std::endl;


    //WAY TO INITIALIZATION IN C++
    int var1 = 0;
    int var2 = {0};
    int var3{0};
    int var4(0);
    std::cout<<typeid(var2).name()<<std::endl;


    // DATA LOSS SITUATION
    long double Id = 3.141592;
    // initialize in 'p' where curly bracket use(list initialization).
    int p{Id};
    std::cout<<"in \"p\" literal is stored "<<a<<" and you can see Data loss value should be 3.14 something"<<std::endl;

    int q(Id);
    std::cout<<"using normal bracket value stored is "<<q<<std::endl;
    std::cout<<"as we can see that the point value is trancuted there"<<std::endl;
    




}