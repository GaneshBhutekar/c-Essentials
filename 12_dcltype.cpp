#include<iostream>
#include<typeinfo>


char returning(){
    return 'i';
}
int main(){
    int z = 67;
    int x= 10;
    int & p = x;
    decltype(&p) b = &z; // here &p is assumed as address operator not reference so here b becomes pointer
    decltype(returning()) r ;


    decltype(p) ref= z;
    // p = p+1;
    ref++;
    std::cout<<z<<std::endl;
    std::cout<<x<<std::endl;


    // decltype in reference
    int i= 42,*ptr = &i,&q = i;
    // decltype(*ptr) c; // ERROR because c is reference and it should be initialized during defination
    /*
    Here What happened that ptr is a pointer pointing to integer and when 
    we try to dereference it by * it gives value here it is i and we can also change the i value
    It's clearly a reference so *ptr is reference to i that we access it or change the value of it
    */
   decltype(q+0) bb; // here q is reference but when you do + 0 then it is integer
   // here bb is integer type Because: q is reference here it is representing the value 42 and added by 0 gives 
   // 42 which is integer.


   int num1 = 15;
   int &myref = num1;
   int num2 = 20;
   decltype(myref) myref2 = num2; // This is reference
   ++myref2;
   std::cout<<num2<<std::endl;
   decltype(myref+0) num3 = 25;  // here expression calculate then result is integer so it is int
   std::cout<<num3<<std::endl;
   int *myptr =  &num2;   
   decltype(myptr) myptr2 = &num2;   // here it is pointer................
   ++(*myptr2);


   std::cout<<num2<<std::endl;
   
   decltype(*myptr2) ref3= num1; // this is reference *ptr work as reference because it can access the value and also change
   ref3 = 123456;
   std::cout<<num1<<std::endl;


   // With parenthesis it is reference

   int number1 = 12;
   int number2 = 13;
   decltype((number1)) refer2 = number2; // here inside there is variable so it is lvalue expression so here (number) act as reference
   decltype((number1+12)) refer1= number2; // it is integer because here inside bracket there is expresssion which gives the rvalue so it will return type of what we evaluated
   refer1++;
   std::cout<<number2<<std::endl;
   refer2++;
   std::cout<<number2<<std::endl;


    //exercise
    int number3 =  14;
    int number4 = 15;
    decltype(number3 = number4) d = number3; // here assignment is also yield a reference tyepe like same bracket do
    ++d;
    std::cout<<"number3 === "<<d<<std::endl;

    int &meraref1 = number3;
    int &meraref2 = number4;
    decltype(meraref1+meraref2) integer = 23;
    std::cout<<integer<<std::endl;

    // difference in auto and decltype
    // on the reference 
    int k_num = 12;
    int u_num = 17;
    int &k_ref = k_num;

    decltype(k_ref) k_ref2 = u_num; // this is integer 
    auto k_ref3 = k_ref; // here k_ref3 is not reference , it is integer type
    std::cout<<typeid(k_ref3).name()<<std::endl; // here it is integer
    std::cout<<typeid(k_ref2).name()<<std::endl; // here is is reference. here it is int showing because of reference of it is not distinguisable by typeid.
    // metaprogramming is programming where code is written to manipulatete other code at compile time 
    // using template metaprogramming we can write code that can be executed at compile time
    // using decltype we can write code that can be executed at compile time
    // using typeid we can write code that can be executed at runtime
    // using auto we can write code that can be executed at runtime


    // when the dcltype output is same as auto type
    int z_num = 20;
    decltype(z_num) f = 23; // here f is also integer accoring t provided z_num.
    auto ff = z_num; // here ff is also a integer according to provided z_num;
    // and dcltype not ignore top-level const.
    const int c_num = 56;
    decltype(c_num) cc = 23; // here cc is const int 
    auto ccc = c_num; // here ccc is just intger.
    // cc= 12;  //Error : cc used only as read only variable
    ccc = 90; // this can be done because ccc is just integer.
}