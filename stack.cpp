#include<bits/stdc++.h>
using namespace std;

int n=5;
int top= -1;
int Stack[5];

bool isFull(){
return top==n-1?true:false;
}
bool isEmpty(){
return top==-1?true:false;
}
void push(int x){
    if (isFull()){
        cout<<"This stack is full"<<endl;
    }
    top++;
    Stack[top]=x;
}
void pop(){
    if (isEmpty()){
        cout<<"Empty"<<endl;
    }else{
        top--;
    }

}
void printStack(){
for (int i=0; i<n; i--){ cout<<Stack[i]<<endl;}
cout<<"==========="<<endl;
}
int main(){
    /*int n=5;
    int top =-1;
    int *Stack =new int [n];*/
    push (10);
    push (20);
    push (30);
    push (40);
    printStack();



return 0;
}
