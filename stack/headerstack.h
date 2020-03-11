#pragma once
#include <iostream>
using namespace std;

template <class T>
class Stack{
    
    // Variables
    T* stack;
    int head = -1;
    int length;

public:
    
    // Constructor
    Stack(){
        cout << "Enter stack capacity >> ";
        cin >> length;
        stack = new T[length];
        display();
    }
    
    // Push method
    void push(){
        if(head < length-1){
        cout << "Enter data to be pushed >> ";
        T data;
        cin >> data;
        head++;
        stack[head] = data;
        cout << data << " has been added to the stack" << endl;
        } 
        else{
            cout << "The stack is full" << endl;
        }
    }

    // Pop method
    void pop(){
        if(head!= -1){
            cout << stack[head] << " has been popped from the stack" << endl;
            head--;
        } else{
            cout << "The stack is empty" <<endl;
        }
    }   
    
    // Size method
    int size(){
        cout << "Size of the stack is ";
        return head+1;
    }
    
    // Get method
    void get(){
        if(head != -1){
        cout << "Top of the stack is " << stack[head] << endl;
        } else {
            cout << "The stack is empty" << endl;
        }
    }
    
    // Show all method
    void show_all(){
        for(int i = 0; i < head+1; i++){
            cout << stack[i] << + " | ";
        }
        cout << endl;
    }
    
    // Display method
    void display(){
        int user_input;
        
        while(true){
            cout << "\n=====================================" << endl;
            cout << "                Stack                 " << endl;
            cout << "=====================================" << endl;
            cout << "1.\tPush" << endl;
            cout << "2.\tPop" << endl;
            cout << "3.\tGet" << endl;
            cout << "4.\tSize" << endl;
            cout << "5.\tShow all" << endl;
            cout << "6.\tExit" << endl;
            cout << "Input >> ";
            cin >> user_input;
            
            // Redirecting user to appropriate function
            switch(user_input){
                case 1: {
                    push();
                    break;
                }
                
                case 2: {
                    pop();
                    break;
                }
                
                case 3: {
                    get();
                    break;
                }
                case 4: {
                    cout << size() << endl;
                    break;
                }
                
                case 5: {
                    show_all();
                    break;
                }
                
                case 6: exit(0);
                
                default: cout << "Please enter a valid input" << endl;
            }
        }
    }
};