
#include<iostream>

#ifndef LINKEDLIST_HH
#define LINKEDLIST_HH
struct node {
    int data;
    node *next;
    node *prev;

    node(int num){
        data = num;
        next = NULL;
        prev = NULL;
    }
};


struct linkedList {
    private:
        node *head;

    public:
        linkedList(){
            head = NULL;
        }

        void insert(node *newNode){
            newNode->next = head;
            if (head != NULL) {
                head->prev = newNode;
            }

            head = newNode;
            newNode->prev = NULL;

        }
 
        void print(){
            node *i = head;
        
            if (i == NULL) {
                std::cout << "Empty" << std::endl;
            } else {
                while (i != NULL) {
                    std::cout << i->data << " ";
                    i = i->next;
                }
            }
        }

        node* search(int x){
            node *i = head;
            while(i != NULL && i->data != x){
                i = i->next;
            }
            return i;
        }

        void deletePointer(node* nodePtr){

            if(nodePtr->prev != NULL){
                nodePtr->prev->next = nodePtr->next;

            } else {
                head = nodePtr->next;
            }

            if(nodePtr->next != NULL){
                nodePtr->next->prev = nodePtr->prev;
            }

        }

        node* getTop(){
            return head;
        }

        int length(){
            node* i = head;
            int counter = 0;
            while(i != NULL){
                counter++;
                i = i->next;
            }
            return counter;
        }
};

#endif
