#include "std_lib_facilities.h"

vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int get_number(){
    int val;
    if(cin>>val) return val;
    cin.clear();
    string s;
    cin >> s;
    for(int i=0; i<numbers.size(); ++i) if(numbers[i]==s) val=i;
    return val;
}

int main()
try
{
    double val1, val2, result;
    char oper;
    string text;
    while(true){
    cout << "Input value 1\n";
    val1 = get_number();
    cout << "Input value 2\n";
    val2 = get_number();
    cout << "Input operor\n";
    cin >> oper;
    switch(oper){
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
    default:
         error("bad operator");
    }
    cout << text << val1 << " and " << val2 << " is " << result << "\n";
    }
}
catch(runtime_error e){
cout <<  e.what() << "\n";}

