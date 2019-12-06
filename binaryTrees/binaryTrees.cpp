#include "binaryTrees.h"

Node* binaryTrees::initializeNode(Node* temp)
{
    temp = rootNode;
    return temp;
}

Node* binaryTrees::insertNode(Node* rootNode, int num)
{   
    if(rootNode == NULL)
    {   
        Node* nwNode = new Node();
        nwNode->data = num;
        nwNode->right = NULL;
        nwNode->left = NULL;
        rootNode = nwNode;
    }
    else if(num <= rootNode->data)
    {           
        rootNode->left = insertNode(rootNode->left , num);
    }
    else
    {
        rootNode->right = insertNode(rootNode->right, num);
    }
    
    return rootNode;
}

void binaryTrees::searchNode(Node* rootNode, int num)
{  

    if(rootNode == NULL)
    {
        cout<<"The Tree is Empty!! Insert some elements.\n";
    }
    else if(num == rootNode->data)
    {
        cout<<"Found Element.\n";
    }
    else if(num < rootNode->data)
    {   
        cout<<"\nTraversing the ROOT NODE : \t"<< rootNode->data<<endl;
        searchNode(rootNode->left , num);
    }
    else if(num > rootNode->data)
    {
        cout<<"\nTraversing the ROOT NODE : \t"<< rootNode->data<<endl;
        searchNode(rootNode->right , num);
    }
    else
    {
       cout<<"No Elements FOUND.\n";
    }
    return ;
}


//solution to dynmaically ask user to create a balanced BST if the created tree is not and suggest the range of options for the input.

Node* binaryTrees::enterNodes(Node* rootNode)
{
    int num_of_elements,nw_num; 
    char choice;
    choice = 'N';
    
    cout<<"Please enter the Number of Nodes to be created for the TREE.\n";
    cin>> num_of_elements;
    
    int count = 0;
    cout<<"\nEntering the Elements for the Tree Structure.\n";
    while(count != num_of_elements)
    {   
        cin>>nw_num;
        rootNode = insertNode(rootNode,nw_num);
        count += 1;
    }
    cout<<"Do you want to enter more Nodes[Y/N] ? \n";
    cin>>choice;
    
    if((choice == 'Y')or(choice == 'y'))
    {
        rootNode = enterNodes(rootNode);
    }
    return rootNode;
}

int binaryTrees::heightBST(Node* rootNode)
{
    if(rootNode == NULL) return 0;
    
    return max(heightBST(rootNode->left),heightBST(rootNode->right));
    
}

void binaryTrees::breadthFirstSearch(Node* rootNode)
{
    if(rootNode == NULL) return;
    
    queue<Node*> qStore;
    
    qStore.push(rootNode);
    
    while(!qStore.empty())
    {
        Node* current = qStore.front();
        cout<<setw(30)<<current->data<<" ";
        if(current->left != NULL) qStore.push(current->left);
        if(current->right != NULL) qStore.push(current->right);
        qStore.pop();
        cout<<endl;
    }
    
}

void binaryTrees::depthFirstSearch(Node* rootNode)
{
    int str_choice;
    cout<<"Enter the option for type based DFS :"<<endl;
    cout<<"1. Pre Order Searching Technique.\n";
    cout<<"2. IN Order Searching Technique.\n";
    cout<<"3. Post Order Searching Technique.\n";
    cin>>str_choice;
    
    switch(str_choice)
    {
        case 1: 
            cout<<"DFS PreOrder Searching Selected\n";
            dfsPreOrderSearch(rootNode);
            break;
        case 2: 
            cout<<"DFS IN Order Searching Selected\n";
            dfsInOrderSearch(rootNode);
            break;
        case 3: 
            cout<<"DFS Post Order Searching Selected\n";
            dfsPostOrderSearch(rootNode);
            break;
        default:
            cout<<"Select either 1/2/3./n";
            break;
                
    }
}

void binaryTrees::dfsPreOrderSearch(Node* rootNode)
{
    if(rootNode == NULL) return;
    
    cout<<rootNode->data<<" ";
    dfsPreOrderSearch(rootNode->left);
    dfsPreOrderSearch(rootNode->right);
}

void binaryTrees::dfsInOrderSearch(Node* rootNode)
{
    if(rootNode == NULL) return;

    dfsInOrderSearch(rootNode->left);
    cout<<rootNode->data<<" ";
    dfsInOrderSearch(rootNode->right);
}

void binaryTrees::dfsPostOrderSearch(Node* rootNode)
{
    if(rootNode == NULL) return;

    dfsInOrderSearch(rootNode->left);    
    dfsInOrderSearch(rootNode->right);
    cout<<rootNode->data<<" ";
}

void binaryTrees::checkBinaryTree(Node* rootNode)
{
    if(isBSTCheck(rootNode,INT_MIN,INT_MAX)) 
        cout<<"The Created Tree is Binary Tree\n";
    else 
        cout<<"Not a Binary Tree";
    
    return;
}

bool binaryTrees::isBSTCheck(Node* rootNode, int min_value, int max_value)
{
    if(rootNode == NULL) return true;
    
    cout<<"rootNode->data"<<rootNode->data<<endl;
    cout<<"MIN"<<min_value<<endl;
    cout<<"MAX"<<max_value<<endl;
    
    if((rootNode->data < min_value)||(rootNode->data > max_value))
        return false;
        
    if((isBSTCheck(rootNode->left,min_value,rootNode->data))
    &&(isBSTCheck(rootNode->right,rootNode->data,max_value)))
    {
        cout<<"True.\n";
        return true;
    }
}

/*Deletion of Nodes from the Binary Tree......
Case1: No Children
Case2: One Child
Case3: 2 Children
*/

Node* binaryTrees::deleteNode(Node* rootNode, int data)
{
    if(rootNode == NULL) return rootNode;
    else if(data > rootNode->data) rootNode = deleteNode(rootNode->right,data);
    else if(data< rootNode->data) rootNode = deleteNode(rootNode->left,data);
    else
    {
        //case 0
        if((rootNode->left == NULL)&&(rootNode->right == NULL)){        
            delete rootNode;
            rootNode = NULL;        
        }
        //case 1
        else if (rootNode->right == NULL)
        {
            Node* temp = rootNode;
            rootNode = rootNode->left;
            delete temp;
            return rootNode;
        }
        else if (rootNode->left == NULL)
        {
            Node* temp = rootNode;
            rootNode = rootNode->right;
            delete temp;
            return rootNode;
        }
        else
        {
            Node* temp = findMIN(rootNode->right);
            cout<<"The Minimun value of the Node is: \n"<<temp->data;
            rootNode->data = temp->data;
            rootNode->right = deleteNode(rootNode->right,temp->data);
        }
    }
    return rootNode;
    
} 
Node* binaryTrees :: findMIN(Node* rootNode)
{
    if (rootNode == NULL) return rootNode;    
    if(rootNode->left != NULL) return rootNode = findMIN(rootNode->left);
}

int main()
{   
    Node *newNode;
    binaryTrees bst;
    int del_node;
    newNode = bst.initializeNode(newNode);
    
    
    
    cout<<"\n.............BINARY Tree Creation................\n";
    
    newNode = bst.enterNodes(newNode);
    
    //bst.depthFirstSearch(newNode);
    
    bst.checkBinaryTree(newNode);
    cout<<"Enter the node to be deleted.\n";
    cin>>del_node;
    newNode = bst.deleteNode(newNode,del_node);
    
 /*   cout<<"The MAX height is: "<<bst.heightBST(newNode);*/
   
  /*  int num;
    cout<<"Insert the Number to be searched.\n";
    cin>>num;
    
   bst.searchNode(newNode,num);*/
    
    return 0;
}
