#include <bits/stdc++.h>
using namespace std;
stack<int> linearSearch(int *p, int n, int item) {
    stack<int> indices;
    for (int i = 0; i < n; i++) {
        if (p[i] == item) {
            indices.push(i);
        }
    }
    return indices;
}
int main() {
    int n = 100000;
    int *a = new int[n];
    ifstream fin("100k.txt");
    for (int i = 0; i < n; i++) {
        fin>>a[i];
    }
    fin.close();
    stack<int> multiple_index = linearSearch(a, n, 200);
    while (!multiple_index.empty()){
        cout<<"Index:"<<multiple_index.top() <<",Value: "<<a[multiple_index.top()]<<endl;
        multiple_index.pop();
    }
    delete[] a;
    return 0;
}
