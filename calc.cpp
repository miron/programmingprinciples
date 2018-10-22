#include "std_lib_facilities.h"
int main()
{
    double val1, val2, result;
    char operat;
    string text;
    cout << "Input value 1\n";
    cin >> val1;
    cout << "Input value 2\n";
    cin >> val2;
    cout << "Input operator\n";
    cin >> operat;
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

