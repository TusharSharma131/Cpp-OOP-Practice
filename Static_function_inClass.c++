#include<iostream>
using namespace std;

class MyClass
{
    public:

    static void PrintMsg()
    {
        cout<<"\nThis function is static, not need to create object of class, I will directly call by using classname\n";
    }
};

int main()
{
    MyClass::PrintMsg();

    return 0;
}