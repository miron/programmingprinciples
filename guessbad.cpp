#include "std_lib_facilities.h"
int main()
{
   char a;
   cout << "Think of a number between 1 and 100, answer with (y/n):\n";
   cout << "Is it <= 50?\n";
   cin >> a;
       if(a=='y'){
          cout << "Is it <=25?\n";
          cin >> a; 
          if(a=='y'){}
       else cout << "is it <=37?\n";
       } 

       else{ 
           cout << "Is it <=75?\n";
           cin >> a; 
           if(a=='y'){
              cout << "is it <61?\n";
              cin >> a;
              if(a=='y'){
                  cout << "is it <57?\n";
                  cin >> a;
                  if(a=='y'){
                        cout << "is it <54?\n";
                        cin >> a;
                        if(a=='y'){
                            cout << "is it 53?\n";
                            cin >> a;
                            if(a=='y') cout << "Got ya!\n";
                            else{ 
                                cout << "is it 52?\n";
                                cin >> a;
                                if(a=='y') cout << "Got ya!\n";
                                else cout << "It is 51.\n";
                            }
                        }
                        else{ 
                            cout << "is it 56?\n";
                            cin >> a;
                            if(a=='y') cout << "Got ya!\n";
                            else{
                               cout << "is it 55?\n";
                               cin >> a;
                               if(a=='y') cout << "Got ya!\n";
                               else cout << "it is 54.\n";
                            }
                        }
                 }
                  else{ 
                            cout << "is it 60?\n";
                            cin >> a;
                            if(a=='y') cout << "Got ya!\n";
                            else{
                                cout << "is it 59?\n";
                                cin >> a;
                                if(a=='y') cout << "Got ya!\n";
                                else{
                                   cout << "is it 58?\n";
                                   cin >> a;
                                   if(a=='y') cout << "Got ya!\n";
                                   else cout << "it is 57.\n";
                                }
                            }            
               }
             }  
              else{     cout << "is it < 65?\n"; 
                        cin >> a;
                        if(a=='y'){
                            cout << "is it 64?\n";
                            cin >> a;
                            if(a=='y') cout << "Got ya!\n";
                            else{
                                cout << "is it 63?\n";
                                cin >> a;
                                if(a=='y') cout << "Got ya!\n";
                                else{
                                   cout << "is it 62?\n";
                                   cin >> a;
                                   if(a=='y') cout << "Got ya!\n";
                                   else cout << "it is 61.\n";
                                }
                            }            
                        }
                        else{
                        }
              }

            }
        }
}
