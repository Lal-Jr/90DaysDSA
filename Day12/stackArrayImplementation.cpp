#include<bits/stdc++.h>

using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1)
            arr[++top] = element;
        else
            cout<<"Stack Overflow";
    }

    void pop(){
        if(top >= 0)
            top--;
        else 
            cout<<"Stack is Empty";
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else {
            cout<<"Stack is empty";
            return -1;
        }
        
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        return false;
    }
};

int main(){
    Stack st(5);

    if(st.isEmpty()) cout<<"empty"<<endl;

    for(int i =0;i<5;i++)
        st.push(i);
    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}