#include<iostream>
#include<typeinfo>


class demo{
    public:
    int value;
    demo(int value=-999){
        this->value = value;
    }
    friend std::ostream& operator<<(std::ostream& os,demo &s){
        std::cout<<"value contains: "<<s.value<<std::endl;
        return os;
    }
};


int myvar;
// this myvar is defined in outside of the any function so it is initialized with 0 
std::string mystring;

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
    std::cout<<"value is 0 because it is defined outside of any function"<<myvar<<std::endl;
    int Num;
    std::cout<<"garbage value because it is define within the function "<<Num<<std::endl;
    std::string str1;
    std::cout<<"unintialized string contains: "<<str1<<std::endl;


    // NOW IT IS CLASS TYPE
    demo var5 = 10;
    std::cout<<var5<<std::endl; // this is how it is initialized 
    /*
    * here below var6 is not initliazed so we initialized it with -999 in class demo
    * this is about constructor you have to mention what if user not defing the element 
    * in builtin it is garbage value 
    * unlike here it is -999
    * if i do not do default value in class then there will be error    
    */
    demo var6;  
    std::cout<<var6<<std::endl;
    // int i = {3.14};
    // std::cout<<"i value is "<<i<<std::endl;
    // double salary = wage = 99.9;
    std::cout<<"string which is outside the functions "<<mystring<<std::endl;
    std::cout<<"hello world"<<std::to_string(122)<<std::endl;

    

    
}