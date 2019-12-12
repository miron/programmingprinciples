#include "std_lib_facilities.h"
int main()
{
    double number1, number2;
    while(cin>>number1>>number2)   
        if(number1<number2){
            if(number2-number1<1.0/100)
        cout << "The smaller vallue is: " << number1 << "\nThe larger value is: " << number2<< '\n' << "The Numbers are almost equal\n";
            else
        cout << "The smaller vallue is: " << number1 << "\nThe larger value is: " << number2<< '\n';
        }
        else if(number2<number1){
            if(number1-number2<1.0/100)
        cout << "The smaller vallue is: " << number2 << "\nThe larger value is: " << number1<< '\n' << "The Numbers are almost equal\n";
            else
        cout << "The smaller vallue is: " << number2 << "\nThe larger value is: " << number1<< '\n';
            }
        else if(number2==number1)
        cout << "The numbers are equal\n";

}
