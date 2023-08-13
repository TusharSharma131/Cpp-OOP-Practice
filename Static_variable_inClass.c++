#include<iostream>
using namespace std;

class MyClass
{
    public:
    static int i;

    MyClass()
    {
        cout<<"Hey, I am constructor, I used to initialize the object"<<endl;
    }

   ~MyClass()
   {
     cout<<"Hey, I am destructor, I used to delete the object"<<endl;
   }

};

int MyClass :: i = 0;

int main()
{
     //---------------------------If Object is not Static------------------------------//

    // int x = 0;

    // cout<<"The test id is "<<MyClass:: i<<endl; // direct use without object
    // if(x == 0)
    // {
    //   MyClass obj;
    // }
    // cout<<"Object is not static that's why I print after destructor"<<endl;

    //-----------------------------If object is static-----------------------------//

    // int x = 0;

    // cout<<"The test id is "<<MyClass::i<<endl;
    // if(x == 0)
    // {
    //     static MyClass obj;
    // }

    // cout<<"Now Object is static and have lifetime access in the program, Now I print before Destructor"<<endl;

    return 0;
}