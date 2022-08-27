#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data: "<<value<<endl;
    }
};

//function to print the linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//function to find length of linked list or traversing a linked list
int getLength(Node* &head){
    int len=0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

//Inserting new node at head
void insertAtHead(Node* &head ,Node* &tail, int d){
    
    //handling empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

//Inserting new node at tail
void insertAtTail(Node* &head,Node* &tail , int d){
    
    //handling empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
        
    }
    else{
        Node* temp = new Node(d);
        temp -> prev = tail;
        tail -> next = temp;
        tail = temp;
    }
    
}

//Inserting at a given position
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    
    //insert at start
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    //insert at last position
    if(temp -> next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> prev = temp;
    temp -> next = nodeToInsert;
}


//function to delete a node
void deleteNode(Node* &head,Node* &tail,int position){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last element
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = current;
            current = current -> next;
            cnt++;
        }

        
        

        //logic to delete the node
        
        
        current -> prev = NULL;
        prev -> next  = current -> next;
        //case to update tail of the linked list
        if(prev -> next == NULL){
            tail = prev ;
            return;
        }

        current -> next = NULL;
        delete current;
    }
}


int main(){
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    // print(head);

    //Remember if we dont have this initial node , then head and tail both point to NULL and we need to handle the empty list condition in insertAtHead and insertAtTail functions.
    Node* head = NULL;
    Node* tail = NULL;

    

    // cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,22);
    print(head);
    insertAtHead(head,tail,8);
    print(head);

    insertAtTail(head,tail,9);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,50);
    print(head);

    insertAtPosition(head,tail,7,20);
    print(head);

    deleteNode(head,tail,7);
    print(head);

    cout<<"Head: "<<head -> data<<endl;
    cout<<"Tail: "<<tail -> data<<endl;
    return 0;
}