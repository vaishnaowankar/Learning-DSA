/* 
Before doubly ended queue we have some more types of queue i.e
Input restricted queue - means you can only insert from rear but can delete from both ends
Output restricted queue - means you can insert from both ends but delete from front only

Doubly ended queue is also called deque.
*/

#include<iostream>
using namespace std;

class deque{
    public:
        int *arr;
        int front;
        int rear;
        int size;

    //constructor
    deque(int size){
        this -> size = size;
        arr = new int[size];
        front = rear = -1;
    }

    //function to push data in front
    bool pushFront(int data){
        //checking if queue is full
        if(isFull()){
            cout << "Queue is full" << endl;
            return false;
        }

        //to push first element
        else if(isEmpty()){
            front = rear = 0;
        }

        //to maintain cyclic nature
        else if(front == 0){
            front = size - 1;
        }

        //normal flow
        else{
            front--;
        }

        arr[front] = data;
        return true;
    }

    //function to push data from rear
    bool pushRear(int data){
         //checking if queue is full
        if(isFull()){
            cout << "Queue is full" << endl;
            return false;
        }

        //to push first element
        else if(isEmpty()){
            front = rear = 0;
        }

        //to maintain cyclic nature
        else if(rear == size-1 && front !=0 ){
            rear = 0;
        }

        //normal flow
        else{
            rear++;
        }

        arr[rear] = data;
        return true;
    }   

    //function to pop data from front
    int popFront(){
        //condition to check if queue is empty
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        //condition to pop only one remaining element
        if(front == rear){
            front = rear = -1;
        }

        //to maintain cyclic nature
        else if(front == size-1){
            front = 0;
        }

        //normal flow
        else{
            front++;
        }

        return ans;
    }

    //function to pop data from rear or back
    int popRear(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;
        //to remove only existing element
        if (front == rear){
            front = rear = -1;
        }

        //to maintain cyclic nature
        else if(rear == 0){
            rear = size - 1;
        }

        //normal flow
        else{
            rear--;
        }
        return ans;
    }

    //function to return front element
    int getFront(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }


    //function to return rear element
    int getRear(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else{
            return arr[rear];
        }

    }

    //to check is queue is empty
    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    //to check is queue is full
    bool isFull(){
        if((front == 0 && rear == size-1) || (front !=0 && rear == (front-1)%(size-1))){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    deque testDeque(5);

    testDeque.pushFront(1);
    testDeque.pushFront(2);
    testDeque.pushFront(3);
    testDeque.pushRear(4);
    testDeque.pushRear(5);

    cout<<"Front element: "<<testDeque.getFront()<<endl;
    cout<<"Rear element: "<<testDeque.getRear()<<endl;

    testDeque.popFront();
    cout<<"Front element: "<<testDeque.getFront()<<endl;
    cout<<"Rear element: "<<testDeque.getRear()<<endl;

    testDeque.popRear();
    cout<<"Front element: "<<testDeque.getFront()<<endl;
    cout<<"Rear element: "<<testDeque.getRear()<<endl;

    return 0 ;

}