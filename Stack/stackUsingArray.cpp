// Implementing stack using array

#include<iostream>
using namespace std;

class Stack{
        //properties
        public:
            int *arr;
            int top;
            int size;

        //behaviour or methods

        //constructor
        Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        //push operation
        void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack is full"<<endl;
            }
        }

        //pop operation
        void pop(){
            if(top >= 0){
                top--;
            }
            else{
                cout<<"Stack is empty"<<endl;
            }
        }

        //peek or top operation
        int peek(){
            if(top >= 0){
                return arr[top];
            }
            else{
                cout<<"Stack is empty"<<endl;
                return -1;
            }
        }

        //check if stack is empty
        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
};

//All operations in stack are O(1) time complexity.

int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}