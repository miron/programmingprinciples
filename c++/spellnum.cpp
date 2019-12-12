#include "std_lib_facilities.h"
int main()
{
vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
vector<string> digits = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
string spell;
cout << "Input spelled out number or digit:\n";
while(cin>> spell ){
   for(int i=0; i<numbers.size(); ++i){
       if(numbers[i]==spell) cout << "Digit is " << i << "\n";
       else if(digits[i]==spell) cout << "Spelled out its " <<  numbers[i] << "\n";
   }
}
}
