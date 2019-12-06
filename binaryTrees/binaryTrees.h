#ifndef BINARYTREES_H
#define BINARYTREES_H

#include "iostream"
#include "string"
#include "iomanip"
#include "queue"
#include "climits" //INT_MIN.INT_MAX

using namespace std;

struct Node
{
    int data;
    
    Node* right;
    Node* left;
};



class binaryTrees
{   
    Node* rootNode;
    int height_left = 0;
    int height_right = 0;
    
public:

    binaryTrees()    
    {   
        rootNode = NULL;
    }
    Node* initializeNode(Node* temp);
    Node* enterNodes(Node* rootNode);
    Node* insertNode(Node* rootNode, int data);
    void searchNode(Node* rootNode, int data);
    int heightBST(Node* rootNode);
    //Traversal Algorithms....BFS DFS..................
    void breadthFirstSearch(Node* rootNode);
    void depthFirstSearch(Node* rootNode);
    void dfsPreOrderSearch(Node* rootNode);
    void dfsInOrderSearch(Node* rootNode);
    void dfsPostOrderSearch(Node* rootNode);
    void checkBinaryTree(Node* rootNode);
    bool isBSTCheck(Node* rootNode,int min,int max);
    //deletion nodes....................................
    Node* deleteNode(Node* rootNode,int data);
    Node* findMIN(Node* rootNode);
    
};

#endif // BINARYTREES_H
