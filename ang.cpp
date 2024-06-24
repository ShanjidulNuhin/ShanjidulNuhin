#include<bits/stdc++.h>
using namespace std;
void printList(int *p, int n){
for(int i=0; i<n; i++){
    cout<<p[i]<<endl;
}
}
void printAverage(int *p, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += p[i];
    }
    double average = static_cast<double>(sum) / n;
    cout << "The average is: " << average << endl;
}

int main(){
    int n=10;
    int *a= new int [n];
    ifstream fin("10k.txt");
    for (int i=0;i<n;i++){
        fin>>a[i];
    }
    printAverage(a,n);
    printList(a,n);
    delete[] a;
    return 0;
}

