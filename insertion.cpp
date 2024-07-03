#include<bits/stdc++.h>//This includes all the standard library headers in C++
using namespace std;

void insertionSort(int A[], int n)
{
    for (int i=1; i<n; i++) //this is a outer for loop it starts for the second elements (index 1)
//first i=1 and n=user input. so n>1 it will go in temp.
        {
        int temp = A[i];//temp stores the value of the current elements to be positioned in the stored part.
        //A[i] is the value of i=1 index.
        int j = i-1;
        /*
        j=i-1
         =1-1
         =0
    */
        while (j>=0 && A[j]>temp) //while loop is for swap elements
            /*here j>=0 is true so it will go to the next step.
            /A[j]=A[0];
            the value of 0 index
            if it is true go to inside the loop
            */
        {
            A[j+1] = A[j];
        /*A[j+1]=A[j]
          A[0+1]=A[0]
          the value in 0 index will transfer to 1 index.
          */
            j--;
            /*
            j value will decrease the the value of j is -1.
            it will check the condition of while loop and found the j>=0 is false
            then it will go out ang check A[j+1]=temp.
            */
        }
        A[j+1] = temp;
        /*
        A[-1+1=0]=temp
        the value of temp is the value of i=1 index
        the value of A[0] index will transfer to temp.
        */
    }
}

int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }

    insertionSort(A, n);//for call the sort array "A"

    cout<<"Sorted array: ";
    for (int i=0; i<n; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}
