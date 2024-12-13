#include<iostream>

// declare the variable which is defined in file1.cpp
extern int x;
void incrementit(){
    ++x;
}
int addition(int a,int b){
    return a+b;
}
