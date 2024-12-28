#include<iostream>
#include<vector>
#include<queue>

int global_var = 190;
constexpr int factorial(int n){
    if (n==1){
        return 1;
    }

    n = n * factorial(n-1);
    return n;
}


constexpr int addition(int a,int b){
    return a+b;
}

constexpr int get_the_number(){
    return 23;
}
int main(){
    constexpr int ans = factorial(4);
    std::cout<<"answer is "<<ans<<std::endl;
    constexpr int a = 10;
    constexpr int b = get_the_number();
    constexpr int ans1 = addition(a,b);
    std::cout<<"answer  is "<<ans1 <<std::endl;    


    /*
    We can use only literal type not like where dynamic memory involved , virtual function 
    Or any runtime dependency 
    just literal type is "simple enough type".
    */

//    constexpr std::string  letter  = "Ganesh Goroba bhutekar"; This will throw error because string type is not leteral type
    // constexpr int num = 45; 
    // constexpr int *ptr = &num;
    
    /*
    We cannot do that because pointer stores the memory not value and num's mamory is 
    not fixed because it's memory is stored in stack frame where main function is stacked once the main
    function is over then in stack main function return and destroyed with it;s variable 
    
    */

   // but we can use constexpr pointer on fixed memory allocation like nullptr,0, global variblle
   /*
   Why global variable 
   because global variable have fixed mamory and cannot destroyed if any function is retrned 
   because it is stored in data segment(part of program memory).
   */

  constexpr int *ptr1 = 0; // fixed memory allocation
  constexpr int *ptr2 = nullptr; // also fixed
  constexpr int *ptr3 = &global_var; // global var have fixed memory allocated
  int number = 156;
  int *ptr4 = &number;
  int num = 190;
  int *constexpr ptr = &num;


}