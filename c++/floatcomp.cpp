#include "std_lib_facilities.h"
int main(){
    cout << "Give me two numbers:\n";
    double var1 , var2;
    cin >> var1 >> var2;
    if (var1 < var2)
        cout << var1 << " is smaller and " << var2 << " is greater.\n"
             << "The difference is " << var2-var1 << "\n"
             << "and the ratio is " << var2/var1 << ".\n";

    if (var2 < var1) 
        cout << var2 << "is smaller and " << var1 << " is greater.\n"
             << "The difference is " << var1-var2 << "\n"
             << "and the ratio is " << var1/var2 << ".\n";

    if (var1 == var2)
        cout << "The numbers are equal.\nNone is smaller or larger, the difference is " << var1-var2 << " and the ratio is " << var1/var2 << "\n";
    cout << "The sum of " << var1 << " + " << var2 << " is: " << var1+var2 << "\nand the product is " << var1*var2 << "\n";

}
