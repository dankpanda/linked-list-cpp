#pragma once
#include <iostream>
using namespace std;

template <class T>
class Queue{
    
    T* queue;
    int head = -1;
    int length;
    
public:
    
    // Constructor
    Queue(int value){
        queue = new T[value];
        length = value;
        display();
    }
    
    // Enqueue method
    void enqueue(T data){
        head++;
        queue[head] = data;
        cout << data << " has been added to the que" << endl;
    }
    
    // Dequeue method
    void dequeue(){
        if(head != -1){
        T temp = queue[0];
        
        for(int i =0; i<head; i++){
            queue[i] = queue[i+1];
        }
        head--;
        cout << temp << " has been popped from the queue" << endl;
        } else {
            cout << "The que is empty" << endl;
        }
    }
    
    // Size method
    int size(){
        return head+1;
    }
    
    // Get method
    void get(){
        if(head != -1){
        cout << "First in que is " << queue[0] << endl;
        } else {
            cout << "The que is empty" << endl;
        }
    }
    
    // Show all method
    void show_all(){
        for(int i = 0; i <= head; i++){
            cout << queue[i] << " | ";
        }
        cout << endl;
    }
    
    // Display method
    void display(){
        int user_input;
        while(true){
            cout << "\n=====================================" << endl;
                cout << "               Queue                " << endl;
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
                        if(head < length-1){
                        T data;
                        cout << "Enter data to be qued >> ";
                        cin >> data;
                        enqueue(data);
                        break;
                        } else {cout << "Que is full" << endl;
                        break;
                        }
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
                        cout << "Size of que is " << size() << endl;
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