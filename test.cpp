#include "std_lib_facilities.h"
int main(){
    vector<char> alphabet(26);
    for(int i=0; i<alphabet.size();++i)
        cout << alphabet[i] << char(55) << '\n';
}
