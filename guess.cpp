#include "std_lib_facilities.h"

bool smaller()
{

return true;
}
    

int main()
{
   char a;
   int min = 1;
   int max = 100;
           cout << "Think of a number between " << min << " and " << max << ". Ready? Press \"r\" and enter.\n";
           cin >> a; 
           cout << "Is it <= " << max/2 <<" (y/n)?\n";

   while (cin>>a){
       if(min==max)
           cout << "The number you thought of is " << min << "\n";
       else if(a=='y'){
           max=max/2;
           cout << "Is it <= " << max/2 <<" (y/n)?\n";
        }   
       else if(a=='n'){
           min=max/2+min/2;
           cout << "Is it <= " << (min+max)/2 <<" (y/n)?\n";
        }
   } 

       
}
