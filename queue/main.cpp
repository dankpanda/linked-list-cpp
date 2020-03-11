#include <iostream>
#include "headerque.h"
using namespace std;

int main(){
    int user_input;
    int length;
    cout << "1.\tInteger Queue" << endl;
    cout << "2.\tString Queue" << endl; // The string queue is unable to receive space separated inputs
    cout << "Input >> ";
    cin >> user_input;
    cout << "Enter que capacity >> ";
    cin >> length;
    
    switch(user_input){
        case 1:{
            Queue<int> myobj(length);
            break;
        }
        
        case 2:{
            Queue<string> myobj(length);
            break;
        }
    }
    return 0;
}