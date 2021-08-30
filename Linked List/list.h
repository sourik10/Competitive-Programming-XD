#include<bits/stdc++.h>
using namespace std;



//forward declaration
class LinkedList;


class Node{

    //data member is declared in private modifieer
    int data; 
   


public:

 Node* next;

    Node(int d){
        data=d;
        next=NULL;
    }


    //getter function for data member
    int getdata(){
        return data;
    }




    friend class LinkedList;


/* **destructor for Node class
    ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout<<"deleting node with data "<<data<<endl;

    }
*/

};

class LinkedList{

    Node* head;
    Node* tail;

public:

    LinkedList(){
        head=NULL;
        tail=NULL;
    }

    Node* begin(){
        return head;

    }


    //push_front operation ---FIFO
    void push_front(int data){

        //empty linked list
        if(head==NULL){
            Node* n=new Node(data);
            head=tail=n;
        }

        Node* n=new Node(data);
        n->next=head;
        head=n;


    }



    //push_back() operation---LIFO
    void push_back(int data){

        //empty linked list
        if(head==NULL){
            Node* n=new Node(data);
            head=tail=n;
        }

        Node* n=new Node(data);
        tail->next=n;
        tail=n;
    }


    
    //insert from beginning 
    void insert(int data,int p){

        //insert at first position
        if(p==0){
            push_front(data);
            return;
        }



        //any position except the first position(0)
        Node* temp=head;
        for(int j=1;j<=p-1;j++){
            temp=temp->next;
        }

        Node* n=new Node(data);
        n->next=temp->next;
        temp->next=n;

    }



    //printing the linked list
    void print(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->getdata()<<"->";
            temp=temp->next;
            
        }
    }



    //search any data in LInked list
    bool search_data(int key){

        Node* temp= head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }




    //recursive search in LL
    bool recursive_search(Node* head,int key){
        Node* temp=head;
        if(temp==NULL){
            return false;
        }

        if(temp->data==key){
            return true;
        }
        return recursive_search(temp->next,key);
    }

   
/*  **destructor for LinkedList class
    ~LinkedList(){
        if(head!=NULL){
            delete head;
            head=NULL;
            
        }

    }   

*/


};




