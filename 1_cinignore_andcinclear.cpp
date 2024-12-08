#include<iostream>
using namespace std;
int main(){

    int sum = 0 , value = 0;
    while(cin>>value){
        sum+=value;
        cout<<"sum is "<<sum<<endl;
    }
    cout<<"done now check cin have remain buffer or not"<<endl;
    cout<<"enter the new value in value variable "<<endl;
    cin>>value;
    cout<<"value is at last "<<value<<endl;
    cout<<"can i do input agin "<<endl;
    cin.clear(); // to remove flag from cin called failbit.
    cin.ignore(INT_MAX,'|'); // to remove invalid value from cin.
    cin>>value;
    cout<<"final value is "<<value<<endl;
    // it means that you can't able to do cin again if the flag is there failbit to rwmove you have to use cin..clear()
    // if you want to do end of file witout input invalid kust do ctrl +z and enter you will get end of file.

}