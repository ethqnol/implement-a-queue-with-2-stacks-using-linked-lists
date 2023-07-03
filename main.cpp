#include <iostream>
#include "linkedlist.hh"
#include "stack.hh"
#include "queue.hh"
#include <string> 
#include "customer.hh"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>



customer generateRandomCustomer(){
    
    string names[10] = {"Jack", "John", "Joe", "Matt", "Brian", "Olivia", "Oliver", "Theo", "Henry", "James"};
    string phoneNum[20] = { "46209451",
                            "461147242",
                            "461371049",
                            "461394424",
                            "461614222",
                            "462144214",
                            "462189439",
                            "462361439",
                            "463333521",
                            "463356423",
                            "463524829",
                            "463574393",
                            "463671295",
                            "464012314",
                            "464259538",
                            "466012022",
                            "468012312",
                            "468092022",
                            "468139942",
                            "468217666"
                        };
        customer person;
        person.name = names[rand() % 10];
        person.phone = phoneNum[rand() % 20];
        person.money = rand() % 500;
        return person;
}





int main(){
    srand(time(NULL));
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
   
   
    
    queue<customer> newQueue;

    for(int i = 0; i < 10; i++){
        newQueue.enqueue(generateRandomCustomer());
    }

    for(int i = 0; i < 10; i++){
        customer person = newQueue.dequeue();
        std::cout << person.name << ", " << person.phone << ", " << person.money << std::endl;
    }  

}
