#include<iostream>
using namespace std;

class Shape  // Abstract Class because it contain one Pure virtual function
{
    protected:
    float dimension;

    public:

    void getDimension()
    {
        cin>>dimension;
    }

    // Pure Virtual Function
    virtual float Calculate_Area()=0;
};

class circle : public Shape
{
   public:

   float Calculate_Area()
   {
     return 3.14*dimension*dimension;
   }
};

class square : public Shape
{
  public:

  float Calculate_Area()
  {
    return dimension*dimension;
  }
};

int main()
{
    Shape* ShapePtr;

    circle cir;
    square sq;

    ShapePtr = &cir;
    cout<<"\nEnter the dimension for Circle : ";
    ShapePtr->getDimension();
    cout<<"\nThe Area of the Circle is : "<<ShapePtr->Calculate_Area()<<endl;

    ShapePtr = &sq;
    cout<<"\nEnter the dimension for Square : ";
    ShapePtr->getDimension();
    cout<<"\nThe Area of the Square is : "<<ShapePtr->Calculate_Area()<<endl;

    return 0;

}