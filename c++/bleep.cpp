#include "std_lib_facilities.h"
int main()
{
    vector<string> disliked = {"Broccoli", "Pizza", "Ale"};
    vector<string> words;
    for(string temp; cin>>temp;)
        words.push_back(temp);
    cout << "Number of words: " << words.size() << '\n';


    for(int i=0; i<words.size(); ++i){
        for (string x : disliked)
            if(words[i]==x)
                words[i]="Bleep";
            cout << words[i] << '\n';
    }
        

    
    
}
