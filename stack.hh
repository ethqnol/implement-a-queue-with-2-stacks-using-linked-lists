#include <iostream>
#include "linkedlist.hh"

#ifndef STACK_HH
#define STACK_HH

struct stack {
    private:
        linkedList a;
    
    public:
        void push(int data){
            node* i = new node(data);
            a.insert(i);
        }

        int peak(){
            return a.getTop()->data;
        }

        int pop(){
            node* i = a.getTop();
            a.deletePointer(i);
            return i->data;
        }

        bool isEmpty(){
            if(a.getTop() == NULL){
                return true;
            }
            return false;
        }
};



#endif