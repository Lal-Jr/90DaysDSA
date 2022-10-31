#include<bits/stdc++.h>

using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top1;
        int top2;
    
    Stack(int s){
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    void push1(int element){
        if(top2 - top1 > 1)
            arr[++top1] = element;
        else
            cout<<"Stack Overflow";
    }

    int pop1(){
        if(top1 > -1){
            int ans = arr[top--];
            return ans;
        }
            
        else 
            cout<<"Stack is Empty";
    }

    void push2(int element){
        if(top2 - top1 > 1)
            arr[--top2] = element;
        else
            cout<<"Stack Overflow";
    }

    void pop2(){
        if(top2 < size){
            int ans = arr[top++];
            return ans;
        }
        else 
            cout<<"Stack is Empty";
    }
}

int main(){

    return 0;
}