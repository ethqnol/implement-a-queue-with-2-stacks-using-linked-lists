#include <iostream>
#include "stack.hh"

#ifndef QUEUE_HH
#define QUEUE_HH

struct queue {
        
    private:
        stack a;
        stack b;

    public:
        
        void enqueue(int data){
            a.push(data);
        }

        int dequeue(){
            int data;
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