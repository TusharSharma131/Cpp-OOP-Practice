#include<iostream>
using namespace std;

class MyClass
{
    public:
    int addition(int a, int b)
    {
        return a+b;
    }
    
    double addition(double c, double d)
    {
        return c+d;
    }
};

int main()
{
    MyClass obj;
    cout<<"The result of integer value addition : "<<obj.addition(4,5)<<endl;
    cout<<"The result of double value addition : "<<obj.addition(5.6,6.5)<<endl;

    return 0;
}