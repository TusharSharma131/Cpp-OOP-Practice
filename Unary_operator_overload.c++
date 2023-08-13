#include<iostream>
using namespace std;

class Distance
{
    private:

    int feet, inch;

    public:

   Distance(int f, int i)
   {
     this->feet = f;
     this->inch = i;
   }

   //overloading unary operator
    void operator -()
    {
      feet--;
      inch--;
    }
    
    void display()
    {
        cout<<"The feet and inches are : "<<feet<<"'"<<inch;
    }

};


int main()
{
    Distance d1(8,9);

    // use overloaded operator
    -d1;

    d1.display();

    return 0;
}