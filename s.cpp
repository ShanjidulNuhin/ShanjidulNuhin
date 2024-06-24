#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printList(int *a, int n){
for (int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;


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
return 0;
}
