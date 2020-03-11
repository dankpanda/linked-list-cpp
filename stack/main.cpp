#include <iostream>
#include "headerstack.h"
using namespace std;

int main(){
    int user_input;
    cout << "1.\tInteger Stack" << endl;
    cout << "2.\tString Stack" << endl; // The string stack is unable to receive space separated inputs
    cout << "Input >> ";
    cin >> user_input;
    
    switch(user_input){
        case 1:{
            Stack<int> myobj;
            break;
        
        }
        
        case 2:{
            Stack<string> myobj;
            break;
        }
    }
    return 0;
}