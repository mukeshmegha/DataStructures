#include "dobuleLinkedLists.h"

void doublyLinkedList::create(int num)
{   
    int new_element;
    if(num == 0)
    {
        cout<<"Enter a valid numeric value!!\n";
        return ;
    }
        
    for(int i=0;i<num;i++)
    {
        cout<<"\nEnter the Element:  ";
        cin>>new_element;
        
        Node* temp = new Node();
        temp->data = new_element;
        temp->prev = rear;
        temp->next = NULL;
        
        if(rear == NULL)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }    
    }
    display();
    return ;
}

void doublyLinkedList::display()
{   
    Node* temp = front;
    cout<<"\nThe Created List is : ";
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return ;
}

void doublyLinkedList::insertAtBegining()
{
    int new_element;
    cout<< " \nEnter the Element to append it to Start of <LIST>: ";
    cin>>new_element;
    
    Node* temp = new Node();
    temp->prev = NULL;
    temp->data = new_element;
    temp->next = front;
    front->prev = temp;
    front = temp;
    
    display();
    return ;    
}

void doublyLinkedList::insertAtEnd()
{
    int new_element;
    cout<< " \nEnter the Element to append it to End of <LIST>: ";
    cin>>new_element;
    
    Node* temp = new Node();
    temp->next = NULL;
    temp->data = new_element;
    temp->prev = rear;
    rear->next = temp;
    rear = temp;
    
    display();
    return ;
}

void doublyLinkedList::insertAtPosition()
{
    int new_element,pos;
    cout<< " \nEnter the Element to append it to Position of <LIST>: ";
    cin>>new_element>>pos;
    
    Node* post_curr;
    Node* temp = new Node();
    temp->prev = NULL;
    temp->data = new_element;
    temp->next = NULL;
    
    Node* curr = front;
    
    for(int i=1;i<pos-1;i++)
    {
        curr = curr->next;
        if(curr == rear)
        {
            cout<<"Out of Bounds. ERROR !!!\n";
            return;
        }
    }

    post_curr = curr->next;
    temp->prev = curr;
    curr->next = temp;
    temp->next = post_curr;
    post_curr->prev = temp;
    curr = temp;
    
    display();
    return;
}

void doublyLinkedList::deletenode()
{
    int pos;
    cout<< " \nEnter the Element Position to be Deleted from <LIST>: ";
    cin>>pos;
    
    Node* curr = front;
    for(int i=1;i<pos;i++)
    {
        curr = curr->next;
    }    
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete(curr);
    
    display();
    return;
    
}

void doublyLinkedList::reverseList()
{
    Node* temp = rear;
    cout<<"\nThe reverse List is: \n";
    while(temp != NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->prev;
    }
    
    display();
    return;
}
int main()
{
    int num;
    doublyLinkedList newNode;
    cout<<"DOUBLE LINKED LIST IMPLEMENTATION.\n";
    cout<<"Enter the Number of Elements to be added to the DLLists.\n";
    cin>>num;

    newNode.create(num);
    
    int choice;
    cout<<"Enter the Operation you want to perform on the Linked List.\n";
    cout<<" 1 as insertListBeginning \n 2 as insertListEnd \n 3 as insertatposition \n 4 as deletenode \n 5 as reverseList \n 6 as reverseRecursive\n";
    cin>>choice;
    switch(choice)
    {
        case 1: newNode.insertAtBegining();
                break;
        case 2: newNode.insertAtEnd();
                break;
        case 3: newNode.insertAtPosition();
                break;
        case 4: newNode.deletenode();
                break;
        case 5: newNode.reverseList();
                break;
        //case 6: newNode.recursiveReverse(rFirst);
        //        break;
        default: newNode.display();
                break;
    }

    
}
