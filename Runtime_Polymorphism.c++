#include<iostream>
using namespace std;

class Shape 
{
    public:

   // virtual function mainly declared in base class and override in derived class
    virtual void Draw()
    {
        cout<<"Drawing a Shape"<<endl;
    }
};

class circle : public Shape
{
  public:

  // base class function overriden once time

   void Draw() override
   {
     cout<<"Drawing a circle"<<endl;
   }
};

class square : public Shape
{
  public:

  //base class function overriden twice time

  void Draw() override
  {
    cout<<"Drawing a square"<<endl;
  }
};

int main()
{
    Shape* ShapePtr;   // Pointer of base class type to points to objects of derived class

    circle cir;
    square sq;

    ShapePtr = &cir;
    ShapePtr->Draw();  // Output : Drawing a circle

    ShapePtr = &sq;
    ShapePtr->Draw();  // Output : Drawing a square

    return 0;
}
