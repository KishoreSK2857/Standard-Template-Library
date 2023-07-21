/*Implement a C++ program that uses the STL priority queue to
find the Kth smallest element in an unsorted array.*/


#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int,10> a{2,41,3,7,5,9,1,56,32,4};  //array
    priority_queue<int> q;                    //priority queue
    cout<<"enter the value of k ";
    int k;
    cin>>k;
    for(int i=0;i<10;i++)
    {
        q.push(a[i]);                        //pushing array elements into priority queue
    }
    for(int i=10;i>k;i--)
    {
        q.pop();                             //pop until kth element
    }
    cout<<"The "<<k<<"th smallest element is "<<q.top()<<endl;
    return 0;
}
