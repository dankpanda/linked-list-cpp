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
    
    node *front, *rear;
    
public:
    // Constructor
    LinkedList(){
        front = NULL;
        rear = NULL;
        menu();
    }
    
    // Enqueue method
    void enqueue(){
        T data;
        cout << "Input data to enque >> ";
        cin >> data;
        
        node *temp = new node;
        temp -> data = data;
        temp -> next = NULL;
        
         // Prevents error when top == NULL
        if(front == NULL){
            front = temp;
            rear = temp;
        }
        
        else{
            rear -> next = temp;
            rear = temp;
            
        }
    }
    
    // Dequeue method
    void dequeue(){
        node *temp = new node;
        
        // Custom message when list is empty
        if(front == NULL){
            cout << "The list is empty" << endl;
        }
        
        else{
            temp = front;
            front = front -> next;
            delete temp;
        }
    }

    // Get method
    void get(){
        int index;
        cout << "Enter index >> ";
        cin >> index;
        
         // Checks whether index value entered is valid
        if(index > size()-1){
            cout << "There is not enough item for that index value" << endl;
        }
        
        else{
            node *temp = new node;
            temp = front;
            
            for(int i = 0; i < index; i++)
            {
                temp = temp -> next;
            }
            cout << temp -> data;
        }
    }
    
    // Size method
    int size(){
        node *temp = new node;
        int counter = 0;
        temp = front;
        
        while(temp != NULL){
            counter ++;
            temp = temp -> next;
        }
        return counter;
    } 
    
    // Display method
    void display(){
        node *temp = new node;
        
        if(front != NULL){
            temp = front;
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
            cout << "1.\tEnqueue" << endl;
            cout << "2.\tDequeue" << endl;
            cout << "3.\tGet" << endl;
            cout << "4.\tSize" << endl;
            cout << "5.\tShow all" << endl;
            cout << "6.\tExit" << endl;
            cout << "Input >> ";
            cin >> user_input;
            
            // Redirecting user to appropriate function
            switch(user_input){
                case 1: {
                    enqueue();
                    break;
                }
                
                case 2: {
                    dequeue();
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


