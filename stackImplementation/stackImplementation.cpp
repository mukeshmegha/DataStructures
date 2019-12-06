#include "stackImplementation.h"

void stackImplementation::create()
{   
    int number_of_elements, element;
    cout<<"Enter Number of Elements to be inserted to the <NEW STACK> ";
    cin>>number_of_elements;
    for(int i=0 ;i<number_of_elements;i++)
    {   
        cout<<"\nEnter the Element: ";
        cin>>element;
        stk_class.push(element);
    }
    
    top_element = stk_class.top();
    
    cout<<"\nThe Top Element in the satck is : "<<top_element;
    return;
}

void stackImplementation::display()
{
    stack<int> temp_stack ;
    int top_ele;
    cout<<"\nThe Created Stack Is: \n";
    while(!stk_class.empty())
    {
        top_ele = stk_class.top();
        cout<<" "<<top_ele; 
        temp_stack.push(top_ele);
        stk_class.pop();
    }
    while(!temp_stack.empty())
    {
        top_ele = temp_stack.top();
        stk_class.push(top_ele);
        temp_stack.pop();
    }
    cout<<endl;
    return;
}

void stackImplementation::insertElementsAtPos()
{
    int element,pos;
    cout<<"\nPlease enter the element to be inserted and the POSITION from <Top>:  ";
    cin>>element>>pos;
    
    int stk_top;
    stack<int> tmp_stk;
    
    if(pos != 1)
    {
        cout<<"Entering at the %d of the <STACK>.\n"<<pos;
       
        for(int i=0;i<pos;i++)
        {
            stk_top = stk_class.top();
            tmp_stk.push(stk_top);
            stk_class.pop();
        }
        stk_class.push(element);
        while(!tmp_stk.empty())
        {
            stk_top = tmp_stk.top();
            stk_class.push(stk_top);
            tmp_stk.pop();            
        }        
    }        
    else
    {
        cout<<"Entering at the TOP of the <STACK>.\n ";
        stk_class.push(element);
    }
    
    display();
    return;
        
}

void stackImplementation::removeElementsAtPos()
{
    int element;
    cout<<"\nPlease enter the element to be <REMOVED> from Stack:  \n";
    cin>>element;
    
    int stk_top;
    stack<int> tmp_stk;
    
    while(!stk_class.empty())
    {
        stk_top = stk_class.top();
        if(stk_top == element)
        {
            stk_class.pop();
            break;
        }
        else
        {
            tmp_stk.push(stk_top);
            stk_class.pop();
        }            
    }
    
    while(!tmp_stk.empty())
    {
        stk_top = tmp_stk.top();
        stk_class.push(stk_top);
        tmp_stk.pop();
    }
    
    display();
    return;
        
}

int main()
{  
    stackImplementation objstk;
    cout<<"STACK IMPLEMENTATION.\n";
    objstk.create();
    
    int choice;
    cout<<"\nEnter the Operation you want to perform on the Stack.\n";
    cout<<" 1 as insertElementsAtPos \n 2 as removeElementsAtPos \n 3 as insertatposition \n 4 as deletenode \n 5 as reverseList \n 6 as reverseRecursive\n";
    cin>>choice;
    switch(choice)
    {
        case 1: objstk.insertElementsAtPos();
                break;
        case 2: objstk.removeElementsAtPos();
                break;
       /* case 3: objstk.insertatposition();
                break;
        case 4: objstk.deletenode();
                break;
        case 5: objstk.reverseList();
                break;
        case 6: objstk.recursiveReverse(rFirst);
                break;*/
        default: objstk.display();
                break;
    }

    return 0;
}
