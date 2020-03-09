#pragma once
#include <iostream>

using namespace std;

// Creating class template
template <class T>
class LinkedList{
    
private:
    struct node{
        T data;
        node* next;
    };
    
    node *top;
    
public:
// Constructor
    LinkedList(){
        top = NULL;
        menu();
    }
    
    // Push method
    void push(){
        T data;
        cout << "Input data to push >> ";
        cin >> data;
        
        node *temp = new node;
        temp -> data = data;
        
        // Prevents error when top == NULL
        if(top == NULL){
            temp -> next = NULL;
            top = temp;
        }
        
        else{
            temp -> next = top;
            top = temp;
        }
    }
    
    // Pop method
    void pop(){
        node *temp = new node;
        
        // Custom message when list is empty
        if(top == NULL){
            cout << "The list is empty" << endl;
        }
        
        else{
            temp = top;
            top = temp -> next;
            delete temp;
        }
    }
    
    // Get method
    void get(){
        int index;
        cout << "Input index >> ";
        cin >> index;
        
        // Checks whether index value entered is valid
        if(index > size()-1){
            cout << "There is not enough item for that index value" << endl;
        }
        
        else{
            node *temp = new node;
            temp = top;
            
            for(int i = 0; i < index; i++){
                temp = temp -> next;
            }
            cout << temp -> data;
        }
        
    }
    // Size method
    int size(){
        node *temp = new node;
        int counter = 0;
        temp = top;
        
        while(temp != NULL){
            counter ++;
            temp = temp -> next;
        }
        return counter;
    } 
    
    // Display method
    void display(){
        node *temp = new node;
        
        if(top != NULL){
            temp = top;
            while(temp != NULL){
                cout << temp -> data << "   |";
                temp = temp -> next;
            }
            cout << "\n";
        }
        
        // Custom message when list is empty
        else{
            cout << "The list is empty" << endl;
        }
    }
    
    
    // User interface
    void menu(){
        int user_input;
        
        while(true){
            cout << "\n=====================================" << endl;
            cout << "             Linked List             " << endl;
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
                    cout << "Size >> " << size() << endl;
                    break;
                }
                
                case 5: {
                    display();
                    break;
                }
                
                case 6: {
                    exit(0);
                }
                
                default: {
                    cout << "Please enter a valid input" << endl;
                }
            }
        }
    }

};
