#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int b[], int c[], int d, int e) {
    int i = 0, j = 0, k = 0;
    while (i <= d - 1 && j <= e - 1) {
        if (a[i] > b[j]) {
            c[k++] = b[j++];
        } else {
            c[k++] = a[i++];
        }
    }
    while (i <= d - 1) {
        c[k++] = a[i++];
    }
    while (j <= e - 1) {
        c[k++] = b[j++];
    }
}

int main() {
    int d, e;
    cout << "Enter the size of the first array: ";
    cin >> d;
    cout << "Enter the size of the second array: ";
    cin >> e;

    int a[d], b[e];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < d; i++) {
        cin >> a[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < e; i++) {
        cin >> b[i];
    }

    sort(a, a + d);
    sort(b, b + e);

    int c[d + e];

    Merge(a, b, c, d, e);

    for (int i = 0; i < d + e; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
