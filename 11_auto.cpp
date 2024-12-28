#include<iostream>
int main(){
    const int ci = 90;
    auto *ptr = &ci;
    // what const affect thr ptr exactly
    // const int *ptr = &ci
    // int *const ptr = &ci;
    const int flow = 2324;
    ptr = &flow;

    // time of reference 
    int i =0,&r = i;
    auto a = r;
    // here r datatype is int& but in the reference it's type is deduct to it's pointing object type 
    // so here r is pointing to i which is int so a is integer not reference to someone.
    i= 12;
    std::cout<<"r changes to "<<r<<std::endl; // r is reference to i so it show change also
    std::cout<<"a changes to "<<a<<std::endl; // a is not reference to i or r so it is not changed

    // series of expression on top level and bottom level const in auto case
    const int pi = 90,&cr = pi;
    auto b = pi; // int b = pi because const here will be top level so it will be ignored.
    auto c = cr; // here auto infer as int not int& because it don't take cr type when it is reference it takes pointed object type which is int here
    auto d = &i; // here &i is address of integer  so d will be pointer tp integer
    auto e = &pi; /// here const is a low level so it will not dropped
    std::cout<<*e<<std::endl;

    // auto in case of multiple declaraion in one statements
    int num1 = 90;
    const int num2 = 89;
    auto k = num2,&l = num1; // correct because in bith way we can use const int type
    auto &m = num2,*p =&num1; // both side const int used where in pointer const is low level so it is not ignored
    auto &n = num1,*p2 = &num2; // firat ine is int and second one is const int inconsistency so it is ERROR.

}