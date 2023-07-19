#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// Function to perform matrix multiplication

vector<vector<int>> Multiplication(const vector<int>& A, const vector<int>& B, int rA, int cA, int cB)   // function vector datatype
{
    vector<vector<int>> c(rA, vector<int>(cB, 0));

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            for (int k = 0; k < cA; k++)
            {
                c[i][j] += A[i * cA + k] * B[k * cB + j];      //rowA value * columnB value
            }
        }
    }

    return c;
}

// Function to display a matrix Elements

void Matrixdisplay( vector<vector<int>>& matrix)
{
    for ( vector<int>& row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    //getting rows and columns of matrix 1
    int rA, cA, rB, cB;
    cout << "Enter the number of rows for matrix A: "<<endl;
    cin >> rA ;
    cout << "Enter the number of columns for matrix A: "<<endl;
    cin >> cA;

    //getting rows and columns of matrix 2
    cout << "Enter the number of rows for matrix B: "<<endl;
    cin >> rB;
    cout << "Enter the number of columns for matrix B: "<<endl;
    cin >> cB;
    if (cA != rB)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return 1;
    }
    vector<int> A(rA * cA);
    vector<int> B(rB * cB);

    //getting matrix elements
    cout << "Matrix A:" << endl;
    for (int i = 0; i < rA; i++)
    {
        cout<<"enter the elements of row "<<(i+1)<<endl;
        for (int j = 0; j < cA; j++)
        {
            cin >> A[ (i * cA) + j];
        }
    }
    cout << "Matrix B:" << endl;
    for (int i = 0; i < rB; i++)
    {
        cout<<"enter the elements of row "<<(i+1)<<endl;
        for (int j = 0; j < cB; j++)
        {
            cin >> B[i * cB + j];
        }
    }
    vector<vector<int>> c = Multiplication(A, B, rA, cA, cB);
     cout<<"Matrix A"<<endl;
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cout << A[(i * cA) + j]<<" ";
        }
        cout<<endl;
    }
    cout << "matrix B:" << endl;
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout << B[(i * cB) + j]<<" ";
        }
        cout<<endl;
    }
    cout << "Matrix multiplication:" << endl;
    matrixdisplay(c);
    return 0;
}

