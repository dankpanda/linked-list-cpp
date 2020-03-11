#include <iostream>
#include "linkedlist.h"
using namespace std;

int main(){
    int user_input;
    cout << "1.\tInteger Linked List" << endl;
    cout << "2.\tString Linked List" << endl; // The string linked list is unable to receive space separated inputs
    cout << "Input >> ";
    cin >> user_input;
    
    switch(user_input){
        case 1:{
            LinkedList<int> myobj;
            break;
        
        }
        
        case 2:{
            LinkedList<string> myobj;
            break;
        }
    }
    
    return 0;
}