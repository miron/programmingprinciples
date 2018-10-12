#include "std_lib_facilities.h"

bool smaller()
{

return true;
}
    

int main()
{
   char a;
   vector<int> number = {1,100};
           cout << "Think of a number between 1 and 100. Ready? Press \"r\" and enter.\n";
           cin >> a; 
           cout << "Is it <= " << number[1]/2 <<" (y/n)?\n";

   while (cin>>a){
       if(number[0]==number[1])
           cout << "The number you thought of is " << number[0] << "\n";
       else if(a=='y'){
           number[1]=number[1]/2;
           cout << "Is it <= " << number[1]/2 <<" (y/n)?\n";
        }   
       else if(a=='n'){
           number[0]=50+number[0]/2;
           cout << "Is it <= " << (number[1]+number[0])/2 <<" (y/n)?\n";
           if(a==')
        }
   } 

       
}
