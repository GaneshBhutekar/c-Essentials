#include<iostream>
int main(){
    int num = 10;
    int *ptr = &num,&y = num,g=25;
    (*ptr)++; 
    /*
        why we cannot do *ptr++ because here operator precedence works
        ptr++ will execute first and then * This so do (*ptr)++;
    */

    std::cout<<"This is num "<<*ptr<<std::endl;
    std::cout<<"it is also num "<<y<<std::endl;


    // POINTER TO POINTER

    int inum = 99;
    int *pt = &inum; // this is pt is pointer to int.
    int **pt1 = &pt; // pt1 is pointer to pointer to int.
    // accessing pt address 
    std::cout<<*pt1<<std::endl;
    // accessing the inum value in three different way
    std::cout<<"direct way: inum "<<inum<<"\n"<<"indirect way:*pt "<<*pt<<"\ndouble indirect way:**pt1 "<<**pt1<<std::endl;
    /*
        Basically here pt1 ispointing to pt and pt is pointing to int inum    
    */
   //REFERENCE TO POINTER
   int i=70;
   int *p ;
   int *&r = p;
   r = &i;
   std::cout<<*p<<std::endl;
   r = 0; // now 



}