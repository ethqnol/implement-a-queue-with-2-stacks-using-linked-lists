#include <iostream>
#include "linkedlist.hh"
#include "stack.hh"
#include "queue.hh"


int main(){
    /*
    linkedList lst;
    for(int i = 0; i<10; i++){
        node* newNode = new node(5 + i);
        lst.insert(newNode);
    }
    
    lst.print();
    std::cout << lst.search(5) << std::endl;
    std::cout << lst.getTop() << std::endl;
    std::cout << lst.length() << std::endl;
    lst.deletePointer(lst.search(14));
    lst.print();
    */
   
   

    queue newQueue;

    for(int i = 0; i < 10; i++){
        newQueue.enqueue(i);
    }

    std::cout << newQueue.dequeue() << std::endl;
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 
    std::cout << newQueue.dequeue() << std::endl; 

}
