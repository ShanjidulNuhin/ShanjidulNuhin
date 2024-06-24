#include<bits/stdc++.h>
using namespace std;

void printmatrix(int **p, int r,int c){
for(int i=0; i<r;i++){
    for(int j=0; j<c; j++){
        cout<<p[i][j]<<" ";

    }
    cout<<endl;
}
}
int main(){
    int row;
int column;
cout<<"Enter the row:"<<endl;
cin>>row;
cout<<"Enter the column:"<<endl;
cin>>column;
srand (time(0));
int **m= new int*[row];
for(int i=0;i<row;i++){
    m[i]=new int [column];}

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            m[i][j]=rand();
        }
    }
    cout<<"Here is the matrix____"<<endl;
    printmatrix(m,row,column);
    return 0;
}
