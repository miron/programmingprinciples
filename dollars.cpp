#include "std_lib_facilities.h"
int main(){
    cout << "How many pennies do you have?\n";
    double pennies;
    cin >> pennies;
    cout << "How many nickles do you have?\n";
    double nickles;
    cin >> nickles;
    cout << "How many dimes do you have?\n";
    double dimes;
    cin >> dimes;
    cout << "How many quarters do you have?\n";
    double quarters;
    cin >> quarters;
    cout << "How many half dollars do you have?\n";
    double hdollars;
    cin >> hdollars;
    cout << "How many dollars do you have?\n";
    double dollars;
    cin >> dollars;
    if (pennies==1)
        cout << "you have 1 penny\n";
    else if (pennies==0);
    else cout << "you have " << pennies << " pennies\n";
    if (nickles==1)
        cout << "you have 1 nickle\n";
    else if (nickles==0);
    else cout << "you have " << nickles << " nickles\n";
    if (dimes==1)
        cout << "you have 1 dime\n";
    else if (dimes==0);
    else cout << "you have " << dimes << " dimes\n";
    if (quarters==1)
        cout << "you have 1 quarter\n";
    else if (quarters==0);
    else cout << "you have " << quarters << " quarters\n";
    if (hdollars==1)
        cout << "you have 1 half dollar\n";
    else if (hdollars==0);
    else cout << "you have " << hdollars << " half dollars\n";
    if (dollars==1)
        cout << "you have 1 dollar\n";
    else if (dollars==0);
    else cout << "you have " << dollars << " dollars\n";
    cout << "The value of your coins equals $" << (pennies + 5*nickles + 10*dimes + 25*quarters + 50*hdollars + 100*dollars)/100 << ".\n"; 
}
