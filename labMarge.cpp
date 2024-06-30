#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int b[], int c[], int d, int e) {
    int i=0, j=0, k=0;
    while (i<=d-1&&j<=e-1) {
        if (a[i]>b[j]) {
            c[k++]=b[j++];
        } else {
            c[k++]=a[i++];
        }
    }
    while (i<=d-1) {
        c[k++]=a[i++];
    }
    while (j<=e-1) {
        c[k++]=b[j++];
    }
}

int main() {
    int d=4;
    int e=3;
    int a[]={23, 24, 45, 60};
    int b[]={20, 30, 40};
    int c[d+e];

    Merge(a, b, c, d, e);

    for (int i=0; i<d+e; i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    return 0;
}
