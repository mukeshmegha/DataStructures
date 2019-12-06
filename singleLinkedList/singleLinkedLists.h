#ifndef SINGLELINKEDLISTS_H
#define SINGLELINKEDLISTS_H

#include "iostream"
#include "cstring"
#include "cmath"
#include "iomanip"

using namespace std;

class Node
{
    private:
        int data;           //Linked list integer data.
        Node *link;         //Liked list address pointer.
        Node *first, *last;
    public:
        Node()
        {
            first = NULL;
            last = NULL;
        }
        Node* create();
        void insertListBeginning();
        void insertListEnd();
        void insertatposition();
        void deletenode();
        void reverseList();
        void recursiveReverse(Node* first);
        void printList();
};


#endif // SINGLELINKEDLISTS_H
