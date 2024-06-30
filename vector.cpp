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
return 0;
}
