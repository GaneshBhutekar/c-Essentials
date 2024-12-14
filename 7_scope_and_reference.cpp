#include<iostream>
int demo = 70;
int main(){
    int demo = 100;
    int y = 1;

    if (y!=0){
        int demo = 99;
        std::cout<<::demo<<std::endl;
    }

    int i = 100;
    int sum = 0;
    for(int i =0;i!=10;++i)
        sum+=i;
    std::cout<<i<<" "<<sum<<std::endl;

    int a = 98;
    int &ref = a;
    ref+=2;
    std::cout<<"value of a after lvalue reference "<<a<<std::endl;
    int &&ref1 = 11;
    // int &num = 17; This is not correct.
    /*
    * l value reference is permanent it is & or nothing varible is alib=ve till the execution is in the scope 
    * It Has memory
    * r value reference don't hagev the memory it is just use to store the temporary value
    */

   // Example
   int var1 = 11;
   int &var2 = var1; // here var1 is not temporary 
   int &&var3 = 11; // here 11 is temporary
   // we cannot use pointer on the rvalue reference
//    int *add = var3; This is error you can nnot do but you can do modifications
    var3 = 88;
    std::cout<<"you can modify the rvaluereference "<<var3<<std::endl;
    // int &var4; // you have to initialize the reference this is error.
    int val = 1.01;
    std::cout<<"value 's value "<<val<<std::endl;

    int j;
    int &ri = i;
    i =5;
    ri =10;
    std::cout<<i<<" "<<ri<<std::endl;





}