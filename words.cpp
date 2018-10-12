#include "std_lib_facilities.h"

int main(){
    int number_of_words = 0;
    string previous = " "; //previous initialized to "not a word"
    string current; //current word
    while(cin>>current){  //check if the word is the same as last
        ++number_of_words; //increase word count
        if(previous == current) //check if the word is the same as last
            cout << "word number " << number_of_words << " repeated: " << current << "\n";
    previous=current;

    } 


}
