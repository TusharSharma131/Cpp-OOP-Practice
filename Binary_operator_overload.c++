#include<iostream>
using namespace std;

class Distance
{
    public:

    int feet, inch;

    Distance()
    {
      this->feet = 0;
      this->inch = 0;
    }

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

   // binary operator overloading by passing object as arguement

   Distance operator +(Distance &d2)
   {
      // create an object to return
      Distance d3;

      d3.feet = this->feet + d2.feet;
      d3.inch = this->inch + d2.inch;

      //return the object 
      return d3;
   }
};

int main()
{
    Distance d1(8,9);
    Distance d2(10,2);
    Distance d3;

    // Use Overloaded operator
    d3 = d1 + d2;

    cout<<"Feet and inches are : "<<d3.feet<<"'"<<d3.inch<<endl;

    return 0;
}
