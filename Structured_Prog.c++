#include<iostream>
using namespace std;

// Function to calculate the factorial.

int factorial(int n)
{
    int fact = 1;

    for(int i= 1; i<=n; i++)
    {
        fact*=i;
    }

    return fact;
}


// Function to calculate the fibonacci series

void fibonacci(int n)
{
    int prev = 0, curr = 1;
    cout<<prev<<" ";

    for(int i=1; i<=n; i++)
    {
        cout<<curr<<" ";

        int next = prev + curr;
        prev = curr;
        curr = next;
    } 
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"The Factorial is : "<<factorial(num)<<endl;
    cout<<"Fibonacci Series is : ";
    fibonacci(num);

    return 0;
}