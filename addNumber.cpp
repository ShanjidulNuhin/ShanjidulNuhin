#include<iostream>
using namespace std;

int *addBegining(int *a, int n , int num){
    int *b= new int [n+1];
    b[0]= num;
    for (int i=0; i<n; i++) b[i+1]=a[i];
    return b;
}

void printList(int *a, int n){
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"================="<<endl;
}

int *makeDouble (int *m, int n){
    int *b =new int[n];
    for(int i=0; i<n; i++) b[i]=m[i]*2;
    return b;
}

int main(){
    int a[5] = {10,20,30,40,50};
    printList(a,5);
    int *p = makeDouble(a,5);
    printList(p,5);
    p= addBegining(a,5,100);
    printList(p,6);
    delete[] p;
    return 0;
}
