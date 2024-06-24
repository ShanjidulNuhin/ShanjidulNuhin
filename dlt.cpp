#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int *addBegining(int *a, int n , int num){
int *b= new int [n+1];
b[0]= num;
for (int i=0; i<n; i++) b[i+1]=a[i];
return b;
}

void printList(int *a, int n){
for (int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int *makeDouble (int *m, int n){
int *b =new int[n];
    for(int i=0; i<n; i++) b[i]=m[i]*2;
        return b;
}*/
void printList(int *a, int n){
for (int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int search(int *a, int n, int num){
    for(int i=0; i<n; i++){
        if(a[i]==num)
            return i;
    }
    return -1;
}

int *deleteItem(int *a, int n, int index){
    if(index<0 || index>=n) return a;
    int *b= new int [n-1];
    for(int i=0; i<index; i++) b[i]=a[i];
    for(int i=index; i<n-1; i++) b[i]= a[i+1];
    return b;
}


int main(){

int a[5] = {10,20,30,40,50};
printList(a,5);
//int *p = makeDouble(a,5);
//printList(p,5);
//int *p= addBegining(a,5,100);
 //printList(a,6);
int index=search(a,5,30);
    if(index != -1){
        cout<<"Index of 30: "<<index<<endl;
        int *p= deleteItem(a,5,index);
        printList(p,4);
        delete[] p;
    } else {
        cout<<"30 not found in the array"<<endl;
    }
    return 0;
return 0;
}


