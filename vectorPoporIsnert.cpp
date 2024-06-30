//vector resize
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v)//method(display)datatype(vector<int>)
{
for (int i=0;i<v.size();i++)//v.size return vector size
    {
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
vector<int>vec;//centext(vector)type(int)vector name (vec)
int a,si;
cout<<"Enter the size of your vector: ";
cin>>si;
for (int i=0;i<si;i++)//add elements
    {
    cout<<"Enter elements: ";
    cin >>a;
    vec.push_back(a);
}
display(vec);//call display
vector<int>::iterator iter=vec.begin();//for point the iterator from 1st element
vec.iscert(iter,566);//iter works like pointer who point an element in vector
//566 will insert in program
//if you want to point 566 after one number simple you have to write (iter+1,566)
//(inter+1,5,566)=566 will insert 5 times
display(vec);
return 0;
}

