#include "std_lib_facilities.h"

int main()
{
    cout << "Give me your full name:\n";
    string name = "???"; 
    string last = "???";
    cin >> name >> last;
    cout << "Give me your friends name:\n";
    string friends_name = "???";
    string friends_name_last = "???";
    cin >> friends_name >> friends_name_last;
    char friend_sex = '0';
    cout << "Whats your friend's sex (m/f)?";
    cin >> friend_sex;
    cout << "Give me your age:\n";
    int age = -1;
    cin >> age;
    if (age <= 0 or age >= 110)
        simple_error("you're kidding!");
    cout << "Dear " + name + " " + last + ",\n"
        << " How are you?, I am fine.\nThe weather is beautiful\nand I miss you guys.\n I heard you just had a birthday and you are " << age <<" years old.\n";
    if (age < 12)
        cout << "Next year you will be " << age+1 << " years old.\n";
    if (age == 17)
        cout << "Next year you will be able to vote.\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
cout << "Have you seen " << friends_name << " " << friends_name_last << " lately?\n";
    if (friend_sex == 'm')
                cout << "If you see " << friends_name << " " << friends_name_last << " please ask him to call me.\n";
    else 
                cout << "If you see " << friends_name << " " << friends_name_last << " please ask her to call me.\n" << "Yours sincerely,\n\n\nMiron\n";

        
}
