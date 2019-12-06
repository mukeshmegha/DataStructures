#include "singleLinkedLists.h"
//Single Linked List Implementation using OPPS Concepts.............

Node* Node::create()
{    
    int noelement,num;
    cout<<"How many elements do you want to enter?\n";
    cin>>noelement;
    for(int i=0;i<noelement;i++)
    {   
        cout<<"\nEnter the Number for the List Enrty!!\n";
        cin>>num;
        Node *temp = new Node();
        temp->data = num;
        temp->link = NULL;
        if(first==NULL)
        { 
            first = temp;
            last = temp;
        }
        else
        {   
            last->link = temp;
            last = temp;
        }
    }
    printList();
    return first;
}

void Node::insertListBeginning()
{
    int num;
    cout<<"\nEnter the Number for the List Enrty at Beginning!!\n";
    cin>>num;
    Node* temp = new Node();
    temp->data = num;
    temp->link = first;
    first = temp;
    printList();
    return;
}

void Node::insertListEnd()
{
    int num;
    cout<<"\nEnter the Number for the List Enrty at End!!\n";
    cin>>num;
    Node* temp = new Node();
    temp->data = num;
    temp->link = NULL;
    last->link = temp;
    last= temp;
    printList();
    return;
}

void Node::insertatposition()
{
    if(first==NULL)
    {
        cout<<"List is EMPTY, EXITING!!!!\n";
        return;
    }
    cout<<"The Created List is :\n";
    printList();
    
    int num,pos;
    cout<<"Enter the [New Element] and the [Position] to which the node is to be added.\n";
    cin>>num>>pos;
    Node *temp = new Node();
    temp->data = num;
    temp->link = NULL;
    
    Node *prev = first;
    for(int i=0;i<(pos-1);i++)
    {
        prev = prev->link;
    }
    
    temp->link = prev->link;
    prev->link = temp;
    printList();
    return;
}

void Node::deletenode()
{   
    if(first==NULL)
    {
        cout<<"List is EMPTY, EXITING!!!!\n";
        return;
    }
    cout<<"The Created List is :\n";
    printList();
    
    int pos;
    cout<<"Enter the [Position] to which the node is to be removed.\n";
    cin>>pos;
    
    Node *head = first;
    for(int i=0;i<pos-2;i++)
    {
        head = head->link;
    }
    Node *remove = head->link;
    head->link = remove->link;
    delete(remove);
    printList();
    return;
}

void Node::printList()
{   
    Node* temp = first;
    cout<<"\nThe List is: \n";
    while(temp!=NULL)
    {           
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
    return;
}

void Node::reverseList()
{
    Node *current,*prev,*next;
    current = first;
    prev = NULL;
    while(current!=NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    first = prev;
    last = next;
    printList();
    return;
}

void Node::recursiveReverse(Node* current)
{
    if(current->link==NULL)
    {
        first = current;
        return;
    }

    recursiveReverse(current->link);

    Node* next = current->link;
    next->link = current;
    current->link = NULL;
    last = next;
    printList();
}

int main()
{   
    Node newNode;
    Node* rFirst; //used for the recursive function to get the first node element.
    cout<<"SINGLE LINKED LIST IMPLEMENTATION.\n";
    rFirst = newNode.create();
    
    int choice;
    cout<<"Enter the Operation you want to perform on the Linked List.\n";
    cout<<" 1 as insertListBeginning \n 2 as insertListEnd \n 3 as insertatposition \n 4 as deletenode \n 5 as reverseList \n 6 as reverseRecursive\n";
    cin>>choice;
    switch(choice)
    {
        case 1: newNode.insertListBeginning();
                break;
        case 2: newNode.insertListEnd();
                break;
        case 3: newNode.insertatposition();
                break;
        case 4: newNode.deletenode();
                break;
        case 5: newNode.reverseList();
                break;
        case 6: newNode.recursiveReverse(rFirst);
                break;
        default: newNode.printList();
                break;
    }
	
	return 0;
}
