#include<iostream>
#include<memory>
using namespace std;

class MyClass
{
    private:
    int value;

   public:

   MyClass(int val) : value(10)
   {
    cout<<"Constructing MyClass with value "<<value<<endl;
   }

   ~MyClass()
   {
    cout<<"Destructing MyClass with value "<<value<<endl;
   }
   
   void display()
   {
    cout<<"value : "<<value<<endl;
   }

};


int main()
{
    // using shared pointer to automatically manage the memory

    shared_ptr<MyClass>obj1 = make_shared<MyClass>(10);
    shared_ptr<MyClass>obj2 = obj1;

    obj1->display();
    obj2->display();

    // automatically object collect in garbage when no longer used

    return 0;
}