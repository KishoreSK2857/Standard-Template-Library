#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

template<typename T>
void vsort(vector<T> &a)
{
    //sort(a.begin(),a.end());
    for(int j=0;j<a.size()-1;j++)
    {
           for(int i=0;i<a.size()-j-1;i++)
    {
        if(a[i]>a[i+1])
        {
              a[i]+=a[i+1];
              a[i+1]=a[i]-a[i+1];
              a[i]-=a[i+1];
        }
    }
}}

template<typename T>
void print(vector<T> x)
{
    for(auto a:x)
        cout<<a<<" ";
        cout<<endl;
}

int main()
{
  vector<int> v1{2,5,8,9,6,3,4,1};
  vector<float> v2{1,2,0.3,0.9,5.5,5};
  vsort(v1);
  vsort(v2);
  print(v1);
  print(v2);

    return 0;
}
