#include<bits/stdc++.h>
using namespace std;

//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// Output : 1 2 4 5 7 3 6
// Inorder : 4, 2,7,5,1,3,6
// Postorder : 4,7,5,2,6,3,1

class Node{

public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

//Preorder Build of the Tree Root, Left, Right Tree
Node* buildTree(){

    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}


void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout << root->data <<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}


void printInorder(Node *root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


void postOrder(Node * root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data <<" ";
}


//level-order traversal-----BFS(Breadth First Search)

void level_order_traversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }return;
}


int height(Node* root){

    //base case
    if(root==NULL){
        return 0;
    }

    return 1+ max(height(root->left),height(root->right));
}


int main(){

    Node * root = buildTree();

    cout<<"preOrder: "<<endl;
    printPreorder(root);
    cout<<endl;

    cout<<"inOrder: "<<endl;
    printInorder(root);
    cout<<endl;

    cout<<"postOrder: "<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"level_order_traversal: "<<endl;
    level_order_traversal(root);
    cout<<endl;


    cout<<"height: "<<height(root)<<endl;

    return 0;
}
