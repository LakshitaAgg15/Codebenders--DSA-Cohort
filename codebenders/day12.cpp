#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main(){
    Node* root= new Node(1);
    Node* l= new Node(2);
    Node* r= new Node(3);
    root->left=l;
    root->right= r;
}