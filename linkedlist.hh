
#include<iostream>

#ifndef LINKEDLIST_HH
#define LINKEDLIST_HH
template <typename T> struct node {
    T data;
    node *next;
    node *prev;

    node(T info){
        data = info;
        next = NULL;
        prev = NULL;
    }
};


template <typename T> struct linkedList {
    private:
        node<T> *head;

    public:
        linkedList(){
            head = NULL;
        }

        void insert(node<T> *newNode){
            newNode->next = head;
            if (head != NULL) {
                head->prev = newNode;
            }

            head = newNode;
            newNode->prev = NULL;

        }
 
        void print(){
            node<T>* i = head;
        
            if (i == NULL) {
                std::cout << "Empty" << std::endl;
            } else {
                while (i != NULL) {
                    std::cout << i->data << " ";
                    i = i->next;
                }
            }
        }

        node<T>* search(T x){
            node<T> *i = head;
            while(i != NULL && i->data != x){
                i = i->next;
            }
            return i;
        }

        void deletePointer(node<T>* nodePtr){

            if(nodePtr->prev != NULL){
                nodePtr->prev->next = nodePtr->next;

            } else {
                head = nodePtr->next;
            }

            if(nodePtr->next != NULL){
                nodePtr->next->prev = nodePtr->prev;
            }

        }

        node<T>* getTop(){
            return head;
        }

        int length(){
            node<T>* i = head;
            int counter = 0;
            while(i != NULL){
                counter++;
                i = i->next;
            }
            return counter;
        }
};

#endif
