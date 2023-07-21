#include <iostream>
#include <thread>
#include <mutex>
#include <bits/stdc++.h>

using namespace std;

mutex m;

void print(int x)   //function for printing
{
    for(int i=0;i<=20;i++)
    {
        if((i%2)==x)
            cout<<i<<" ";
    }

}

void fun(int n)
{
    m.lock();               //lock to avoid data corruption 
    if(n==1)
    {
        cout<<endl<<"Odd numbers : ";
        print(n);
    }
    if(n==0)
    {
         cout<<endl<<"Even numbers: ";
         print(n);
    }
    m.unlock();
}

int main()
{
    thread t1(fun,1);   //thread for printing odd so the argument is 1
    thread t2(fun,0);   //thread for printing even so the argument is 0
    t1.join();
    t2.join();
    return 0;
}
