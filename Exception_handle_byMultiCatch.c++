#include<iostream>
using namespace std;

int main()
{
    double numerator,denominator,arr[4] = {0.0, 0.0, 0.0, 0.0};

    int index;
    cout<<"\nEnter the index to show division result at that index : ";
    cin>>index;

    try
    {
        // exception 1
         if(index>4)
         {
            throw "Array goes out of bound !!";
         }

         // only executes if above exception not came

         cout<<"\nEnter the numerator value : ";
         cin>>numerator;
         cout<<"\nEnter the denominator value : ";
         cin>>denominator;

         // exception 2

         if(denominator == 0)
         {
            throw 0;
         }

          arr[index] = numerator/denominator;
          cout<<"\nThe result of division is "<<arr[index]<<" stored at index "<<index;
    }
    
    // handle exception 1
    catch(char const* msg)
    {
        cout<<msg<<endl;
    }

    // handle exception 2
    catch(int num)
    {
       cout<<"numerator can't divide by "<<num<<endl;
    }
    return 0;
}