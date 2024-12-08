#include<iostream>
using namespace std;
int main(){
    /*
    WAP to print how many time the number cinsecuteively comes.'
    */

   int val = 0;
   int currval = 0;
   // currval is what you entered before 
   // and val is what you entering now if bioth are same than juystr increase the cnt
   // else new value occurs print previous num times it consecute
   if (cin >> currval) {
    int cnt = 1;
        while(cin>>val){
            // if nboth are same than increase the cnt;
            if (currval == val){
                cnt++;
            }else{
                // if it is not than you have new number but before print the older one
                cout<<currval<<" is printed "<<cnt<<" times"<<endl;
                cnt=1;
                currval = val;
            }
        }
   }
   // the loop will over with the if ciondition now just clear the biffer and remove flag also 
   cin.clear();
   cin.ignore(INT_MAX,'\n');
   cout<<"we are outside of the condition"<<endl;

}