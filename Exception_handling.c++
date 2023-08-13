#include<iostream>
using namespace std;

int main()
{
    int numerator,denominator,divide;

    cout<<"\nEnter the numerator : ";
    cin>>numerator;
    cout<<"\nEnter the denominator : ";
    cin>>denominator;

    // try catch block basically used to handle the exception

    try
    {
        // exception raise then it thrown to catch by throw keyword 
        if(denominator == 0)
        {
            throw 0;
        }

        //only executes if exception not came

        int divide = numerator/denominator;
        cout<<"The result of division is : "<<divide<<endl;
    }

    catch(int num_exception)
    {
        cout<<"Numerator can't divide by "<<num_exception<<endl;
    }
    return 0;
}
