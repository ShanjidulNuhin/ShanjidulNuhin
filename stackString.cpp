#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int n;
    int top;
    string *s;
public:
    Stack(){
        n=5;
        top=-1;
        s= new string[n];
    }
    Stack(int n){
        this->n=n;
        top=-1;
        s=new string[n];
    }
    bool isFull(){
        return top==n-1?true:false;
    }
    bool isEmpty(){
        return top==-1?true:false;
    }
    void push(string x){
        if (isFull()){
            cout<<"This stack is full"<<endl;
        }else{
            s[++top]=x;
        }
    }
    void pop(){
        if (isEmpty()){
            cout<<"Empty"<<endl;
            return;
        }else{
            top--;
        }
    }
    void printStack(){
        for (int i=top; i>=0; i--){
            cout<<s[i]<<endl;
        }
        cout<<"==========="<<endl;
    }
};

int main(){
    Stack a(2);
    a.push("Nuhin");

    a.printStack();

    return 0;
}

