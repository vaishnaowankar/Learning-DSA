#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value  = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed for data: "<<value<<endl;
    }
};


//function to insert a node with data(d) after a given element.
void insertNode(Node* &tail,int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;  //node pointing to itself makes it circular
    }
    else{
        //non-empty list 
        //assuming that the element is present in the list
        Node* current = tail;
        
        while(current -> data != element){
            current = current -> next;
        }

        //element found - current is representing element node
        Node* temp = new Node(d);   //node to be inserted 
        temp -> next  = current -> next;
        current -> next  = temp;
    }

}

//code for traversal of circular linked list
void print(Node* &tail){

    Node* temp = tail;

    //print empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    
    //using do while so that we can print even if there is only one node ie tail.
    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    } while(tail != temp);
    cout<<endl;
}

//function to delete a node with given value
void deleteNode(Node* &tail,int value){

    //Handling empty list
    if(tail == NULL){
        cout<<"List is empty, please check again."<<endl;
        return;
    }
    else{
        //handling non-empty list

        //assuming the value is present in the linked list
        Node* prev = tail;
        Node* current = prev -> next;

        //traversing till current is on the required value
        while(current -> data != value){
            prev = current;
            current = current -> next;
        }

        prev -> next = current -> next;
        //handling 1 node case
        //in this case all three(current,tail and prev point to deleting note, we need to retain tail )
        if(current == prev){
            tail = NULL;
        }

        //Handling >2 node linked list
        //Here if tail and current point to same location we are assigning tail to prev to save it
        else if(tail == current){
            tail = prev;
        }

        current -> next = NULL;
        delete current;
    }

}

int main(){
    Node* tail = NULL;

    //inserting when list is empty;
    insertNode(tail,5,2);
    print(tail);

    insertNode(tail,2,4);
    print(tail);

    insertNode(tail,4,6);
    print(tail);

    deleteNode(tail,4);
    print(tail);

    deleteNode(tail,6);
    print(tail);

    deleteNode(tail,2);
    print(tail);

    return 0;
}