#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int **creatematrix(int row, int col){
int **m= new int*[row];
for(int i=0;i<row;i++){
    m[i]=new int [col];
}
return m;
}
void printMatrix(int **p, int row, int col);

int main(){

    int row =4;
    int col=3;

    int **m = new int*[row];

    for (int i =0; i<row;i++){
        m[i]= new int[col];

    }
for (int i=0; i<row;i++){
    for(int j=0; j<col; j++){
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
