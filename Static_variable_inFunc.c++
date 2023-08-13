#include<iostream>
using namespace std;

void demo()
{
    static int count = 0;

    cout<<count<<" ";

    // value will update and will be carried to next function call.

    count++;
}

int main()
{
    int i;

    cout<<"Count is : "<<endl;
    for(i=0; i<5; i++)
    {
        demo();
    }
    return 0;
}