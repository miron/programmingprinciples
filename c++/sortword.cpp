#include "std_lib_facilities.h"
int main()
{
    cout << "Give me 3 names:\n";
    string var1 = " ", var2 = " ", var3 = " ";
    cin >> var1 >> var2 >> var3;
    if (var1 <= var2)
        if(var3 >= var2)
        cout << var1 << ", " << var2 << ", " << var3 << "\n";
        else cout << var3 << ", " << var1 << ", " << var2 << "\n";
    if (var1 >= var2)
        if(var3 >= var1)
        cout << var2 << ", " << var1 << ", " << var3 << "\n";
        else cout << var3 << ", " << var2 <<  ", " <<var1 << "\n";
        

}
