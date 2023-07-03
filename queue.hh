#include <iostream>
#include "stack.hh"

#ifndef QUEUE_HH
#define QUEUE_HH

template <typename T> struct queue {
        
    private:
        stack<T> a;
        stack<T> b;

    public:
        
        void enqueue(T data){
            a.push(data);
        }

        T dequeue(){
            T data;
            while(a.isEmpty() == false){
                b.push(a.pop());
            }
            data = b.pop();
            
            while(b.isEmpty() == false){
                a.push(b.pop());
            }

            return data;

        }
};


#endif
