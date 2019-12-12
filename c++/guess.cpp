#include "std_lib_facilities.h"

int main()
{
   char a;
   int min = 0;
   int max = 100;
   int guess = (max-min)/2;
   cout << "Think of a number between " << min << " and " << max << ". Ready?\n\n";
   while (guess>min){
           cout << "Is it <= " << guess <<" (y/n)?\n";
           cin >> a; 
       if(a=='y'){
           max=guess;
           if(max-min==1) guess=min;
           else guess-=(max-min)/2;
        }   
       else if(a=='n'){
           min=guess;
           guess+=(max-min)/2;
        }
   } 
           cout << "The number you thought of is " << max << "\n";

       
}


//high>low: problem with 100, 50
