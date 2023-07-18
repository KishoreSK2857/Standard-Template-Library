#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<float>container;    // creating a vector
    // vector created in float datatype because median value can be of float value
	
	int x,size;
    cout<<"enter number of integers in the Container"<<endl;
    cin>>size;                   // getting the number of inputs
    cout<<"Enter the integers"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>x;
        container.push_back(x);
    }
    sort(container.begin(),container.end());   //sorting
    cout<<"Median = ";
    if((size%2))
    cout<<container[(size)/2];                
    else
      cout<<((container[size/2]+container[(size-1)/2])/2);    
    return 0;
}
