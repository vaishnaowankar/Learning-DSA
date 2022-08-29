//Implementing queue using array
#include<iostream>
using namespace std;

class Queue{
    //data members or properties
    public:
        int *arr;
        int qfront;
        int rear;
        int size;

        //constructor
        Queue(int size){
            this -> size = size;
            qfront = 0;
            rear = 0;
            arr = new int[size];
        }

        //behaviour or methods

        //pushing or inserting a data
        void enqueue(int data){
            if(rear == size){
                cout<<"Queue is full"<<endl;
            }
            else{
                arr[rear] = data;
                rear++;
            }
        }

        //poping or removing a data
        void dequeue(){
            if(qfront == rear){
                cout<<"Queue is empty"<<endl;
            }
            else{
                arr[qfront] = -1;
                qfront++;
                //condition to avoid wastage of space
                if(qfront == rear){
                    qfront = 0;
                    rear =0;
                }
            }
        }

        //function to return the front element    
        int front(){
            if(qfront == rear){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                return arr[qfront];
            }
        }

        //function to check if queue is empty
        void isEmpty(){
            if(qfront == rear){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue is not empty"<<endl;
            }
        }
};

//All operations in queue are O(1) time complexity.

int main(){

    Queue que(5);
    que.enqueue(10);
    que.enqueue(20);
    que.enqueue(30);
    que.enqueue(40);

    cout<<que.front()<<endl;
    que.dequeue();

    cout<<que.front()<<endl;
    que.dequeue();

    cout<<que.front()<<endl;
    que.dequeue();

    cout<<que.front()<<endl;
    que.dequeue();

    cout<<que.front()<<endl;
    que.isEmpty();

    return 0;

}