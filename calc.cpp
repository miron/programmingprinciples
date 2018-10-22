#include "std_lib_facilities.h"
int main()
{
    double val1, val2, result;
    char operat;
    string text;
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    vector<string> digits = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    cout << "Input value 1\n";
    cin >> val1;
    cout << "Input value 2\n";
    cin >> val2;
    cout << "Input operator\n";
    cin >> operat;
    for(int i=0; i<numbers.size(); ++i){
       if(numbers[i]==val1) val1=i;
       else if(digits[i]==val1) val1=numbers[i];
    }
  
    switch(operat){
    case '+':
         text="The sum of "; 
         result = val1+val2;
         break;
    case '-':
         text="The difference of ";
         result = val1-val2;
         break;
    case '*':
         text="The product of "; 
         result = val1*val2;
         break;
    case '/':
         text="The quotient of "; 
         result = val1/val2;
         break;
    }
    cout << text << val1 << " and " << val2 << " is " << result << "\n";
}

