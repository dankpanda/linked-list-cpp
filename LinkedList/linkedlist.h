#pragma once
#include <iostream>
using namespace std;


template <class T>
class LinkedList
{
    // Creating struct node
    struct node
    {
        T data;
        node* next;
    };
    
    private:
    node *head, *tail;
    
    // Constructor
    public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        menu();
    }
    
    // Create new node method
    void createnode(T data)
    {
        node *temp = new node;
        temp -> data = data;
        temp -> next = NULL;
        
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
            
        }
    }
    
    // Delete method
    void delete_at_index(int index)
    {
        if(index < size()){
        node *prev = new node;
        node *temp = new node;
        temp = head;
        
        for(int i = 0; i < index; i ++)
        {
            prev = temp;
            temp = temp-> next;
        }
        
        prev -> next = temp -> next;
        delete temp;
        } else cout << "There is no element at that index value " << endl;
    }
    
    // Display method
    void display()
    {
        node *temp = new node;
        temp = head;
        
        while(temp != NULL)
        {
            cout << temp -> data << " | ";
            temp = temp -> next;
        }
        cout << "\n";
    }
    
    // Get method
    void get(int index)
    {
        node *temp = new node;
        temp = head;
        if(index < size()){
        for(int i = 0; i < index; i++)
        {
            temp = temp -> next;
        }
        
        cout << "The element at index " << index << " is " << temp -> data << endl;
        }
        else cout << "There is not enough element for this index value" << endl;
    }
    
    // Size method
    int size()
    {
        node *temp = new node;
        int counter = 0;
        temp = head;
        
        while(temp != NULL)
        {
            counter ++;
            temp = temp -> next;
        }
        return counter;
    }
    
    // User interface
    void menu(){
        int user_input;
        
        while(true){
            cout << "\n=====================================" << endl;
            cout << "             Linked List             " << endl;
            cout << "=====================================" << endl;
            cout << "1.\tInsert" << endl;
            cout << "2.\tDelete" << endl;
            cout << "3.\tGet" << endl;
            cout << "4.\tSize" << endl;
            cout << "5.\tShow all" << endl;
            cout << "6.\tExit" << endl;
            cout << "Input >> ";
            cin >> user_input;
            
            // Redirecting user to appropriate function
            switch(user_input){
                case 1: {
                    T data;
                    cout << "Enter data to insert >> ";
                    cin >> data;
                    createnode(data);
                    break;
                }
                
                case 2: {
                    int index;
                    cout << "Enter index to delete >> ";
                    cin >> index;
                    delete_at_index(index);
                    break;
                }
                
                case 3: {
                    int index;
                    cout << "Enter index to get >> ";
                    cin >> index;
                    get(index);
                    break;
                }
                case 4: {
                    cout<< "The size of the linked list is "<< size()<<endl;
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
