#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>

class Stack {
private:
    vector<T> elements;

public:

    void push( T value)   // Push an element onto the stack
    {
        elements.push_back(value);
    }


    void pop()                  // Pop an element from the stack
     {
        if (!elements.empty())
            {
            elements.pop_back();
            }
        else
            {
            cout << "Stack is empty"<<endl;
            }
    }


    T top()              // Get the top element of the stack
    {
        if (!elements.empty())
            {
            return elements.back();
            } else
            {
            cout << "Stack is empty. No top element.\n";
            }
    }

    bool isempty()          // Check if the stack is empty
     {
        return elements.empty();
    }


    int size()            // Get the size of the stack
    {
        return elements.size();
    }
};

int main()
{
    Stack<int> s;

    cout << "Size of stack: " << s.size() <<endl ;


    s.push(10);     //can take input from user using cin
    s.push(50);
    s.push(30);

    cout << "Is the stack empty: ";
     if(s.isempty())
        cout<<"No"<<endl;
     else
        cout<<"Yes"<<endl;

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;
    cout << "Stack size after pop: " << s.size() << endl;

    return 0;
}
