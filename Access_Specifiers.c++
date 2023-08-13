#include<iostream>
using namespace std;

//------------------------------------Public-------------------------------------//

// class MyClass
// {
//     public:
//     double radius;

//     void computed_area()
//     {
//         cout<<"The Area of the Circle is : "<<endl;
//         cout<<3.14*radius*radius;
//     }
// };

// int main()
// {
//     MyClass obj;
//     obj.radius = 5.6;
//     obj.computed_area();

//     return 0;
// }

//------------------------------------Private------------------------------------//

// class MyClass
// {
//     private:
//     double side;

//     public:
//     void computed_area(double s)
//     {
//         side = s;
//         cout<<"The Area of the Square"<<endl;
//         cout<<side*side;
//     }
// };

// int main()
// {
//     MyClass obj;

//     // obj.side = 4.5;  // error : I can't access directly because data member is private.

//     obj.computed_area(4);

//     return 0;
// }


//-------------------------------------Protected-----------------------------------//

// class MyClass
// {
//   protected:
//   double length, width;

//   double computed_area(double l, double w)
//   {
//     length = l;
//     width = w;
//     cout<<"The Area of the rectangle"<<endl;
//     return length*width;
//   }
// };

// class child : private MyClass
// {
// // if I make base class private, means all attributes & behaviors of base class becomes private members of child class from now.
//     public:
//     void display()
//     {
//       cout<<computed_area(4,5); // Func. declared under Protected and subclass able to access
//     }
// };

// int main()
// {
//     child ch;
//    // ch.computed_area(); // error: function "MyClass::computed_area" is inaccessible.

//    ch.display();

//    return 0;

// }