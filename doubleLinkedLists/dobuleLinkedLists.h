#ifndef DOBULELINKEDLISTS_H
#define DOBULELINKEDLISTS_H

#include "iostream"
using namespace std;


struct Node
{
    int data;
    Node* prev;
    Node* next;
};

class doublyLinkedList
{   
    Node* front;
    Node* rear;
    
public:
    doublyLinkedList(){
        front = NULL;
        rear = NULL;
    }
    void create(int num);
    void display();
    void insertAtBegining();
    void insertAtEnd();
    void insertAtPosition();
    void deletenode();
    void reverseList();

};

#endif // DOBULELINKEDLISTS_H
