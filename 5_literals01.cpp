#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double number = 4.00;
    cout<<scientific<<setprecision(2)<<number<<endl; 
    // here scientific and set precision are manipulators which are use to format I/O streams
    /*
    * Fact: why string size is more than 1 if "Ganesh" is string then size is 7 because
    * use of \0 at the end whixh is terminator called null character so 
    * 'A' as a character size is 1 and "A" as a string size is 2.
    * 
    * when you write paragraoh in cout or whereever the literals of string seperated by space tab new line
    * is concatinated to each other..
    
    */

    cout<<"here this paragraph string literals      are concatinated when we \n do tab space new line "<<endl;
    // endl flush etc are manipulator for I/O stream
    /*
    * Backslah, quotation (single or double), question mark,vertical tab backspace etc 
    * have the special meaning in the c++ language we cannnot use it directly we have to is escape sequence
    * 
    * 
    * And we cannot 
    */
   cout<<"this is alarm which not ringing \a"<<endl; // not working i think it don't have access
   cout<<"ABCD\bEF"<<endl; // here D will be removed because the backspace escape sequence
   cout<<"helloworld\vhelloIndia"<<endl; // my cmd is not able to make new line with tab so it used non printable symbol
   cout<<"ThisSymbolUses\rIDon'tKnowP"<<endl; 
   // \r is used to bring cursor back tp start and whatever written after the \r will start replacing
   cout<<"here there should be big \t space "<<endl;
   cout<<"\x4d"<<endl; // Alphabets start from the 41.
    cout<<"\1111"<<endl;
    unsigned int x = 123U; // with suffux of unsigned 
    unsigned int y = 123; // without suffix of unsigned
    /*
    * just need to understand that here in x 123 is stored as unsigned 
    * but in y it is stored as signed way because we are not use U there
    * similary with L,ULL,LL etc.. 
    */
    x-=200;
    y-=200;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    cout<<"\145"<<endl;
    cout<<"\012"<<endl;



}