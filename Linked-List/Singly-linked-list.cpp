#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor for freeing memory of removed node
    ~Node(){
        //To know which value is going to be freed
        int value = this -> data;
        //freeing memory
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";  //print data of temp
        temp = temp -> next;      //move temp pointer to next location
    }
    cout<<endl;
}

//function to insert node at the beginning of the linked list
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//function to insert node at the end of the linked list
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

//function to insert node at any given position of the linked list
void insertAtPosition(Node* &head,Node* &tail,int d,int position){
    
    //Case to handle inserting at first position
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    //traversing a temp pointer to position behind the position where we want to insert.
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //Case to update the tail to last inserted node.
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating and adding a new node at position
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

//function to delete a node
void deleteNode(Node* &head,Node* &tail,int position){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
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
        prev -> next = current -> next;
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
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,22,3);
    print(head);

    insertAtPosition(head,tail,25,1);
    print(head);

    cout<<"Head -> "<<head -> data<<endl;
    cout<<"Tail -> "<<tail -> data<<endl;

    deleteNode(head,tail,1);
    print(head);

    deleteNode(head,tail,4);
    print(head);

    cout<<"Head -> "<<head -> data<<endl;
    cout<<"Tail -> "<<tail -> data<<endl;

    deleteNode(head,tail,3);
    print(head);

    cout<<"Head -> "<<head -> data<<endl;
    cout<<"Tail -> "<<tail -> data<<endl;

    return 0;
}
