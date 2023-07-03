#include <iostream>
#include "linkedlist.hh"

#ifndef STACK_HH
#define STACK_HH

template <typename T>  struct stack {
    private:
        linkedList<T> a;
    
    public:
        void push(T data){
            node<T>* i = new node<T>(data);
            a.insert(i);
        }

        T peak(){
            return a.getTop()->data;
        }

        T pop(){
            node<T>* i = a.getTop();
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
