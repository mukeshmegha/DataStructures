#ifndef STACKIMPLEMENTATION_H
#define STACKIMPLEMENTATION_H

#include "iostream"
#include "stack"

using namespace std;



class stackImplementation
{   
    stack <int> stk_class;
    int top_element;
    
public:
    void create();
    void insertElementsAtPos();
    void removeElementsAtPos();
    void copyStack();
    void swapStack();
    void sortSwap();
    void display();
    

};

#endif // STACKIMPLEMENTATION_H
