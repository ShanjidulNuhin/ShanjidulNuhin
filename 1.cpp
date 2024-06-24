#include<iostream>
using namespace std;

int *makeDouble(int *a, int n){
    int *b = new int [n];
  for(int i=0; i<n; i++) b[i]=a[i]*2;
   return b;
}
/*int *addNumber(int *a, int n , int num){
    int *b= new int [n+1];
    b[0]= num;
    for (int i=0; i<n; i++) b[i+1]=a[i];
    return b;
}*/

int *addNumber(int *a, int n, int num){
    int *b=new int [n+1];
    b[0]=num;
    for(int i=0; i<n; i++) b[i+1]=a[i];
    return b;
}

int *addLast(int *a, int n, int num){
    int *s=new int [n+1];
    s[n+1]=num;
    for(int i=0; i<n;i++) s[i]=a[i-1];
    return s;
}

void printList(int *a, int n){
for(int i=0; i<n; i++){cout<<a[i]<<" ";}

cout<<endl;
cout<<"============="<<endl;
}
int main(){
int a[5]={10,20,30,40,50};
printList (a,5);
int *p= makeDouble(a,5);
printList(p,5);
int *x=addNumber(a,5,100);
printList(x,6);
int*j=addLast(a,5,90);
printList(j,6);

}
