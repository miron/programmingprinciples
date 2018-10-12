#include "std_lib_facilities.h"
int main()
{
    //string disliked = "Broccoli";
    vector<string> disliked = {"Broccoli", "Pizza", "Ale"};
    vector<string> words;
    for(string temp; cin>>temp;)
        words.push_back(temp);
    cout << "Number of words: " << words.size() << '\n';

    sort(words);


    for(int i=0; i<words.size(); ++i){
        for (string x : disliked)
        if(words[i]==x)
            words[i]="Bleep"
    }
        

    for(int i=0; i<words.size(); ++i)
        if(i==0 || words[i-1]!=words[i]) 
        //if(words[i]!=disliked)
        //if(for(string x : disliked) words[i]!=x);
            cout << words[i] << '\n';
    
    
}
