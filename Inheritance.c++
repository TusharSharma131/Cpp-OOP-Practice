#include <iostream>
using namespace std;

//--------------------------------Single Level Inheritance----------------------------//

//  class Account
//  {
//    public:
//    float salary = 60000;
//  };

//    class Programmer: public Account
//    {
//    public:
//    float bonus = 5000;
//    };

//    int main(void)
//    {
//      Programmer p1;
//      cout<<"Salary: "<<p1.salary<<endl;
//      cout<<"Bonus: "<<p1.bonus<<endl;

//     return 0;
// }

//------------------------------Multilevel Inheritance-------------------------------//

// class Animal
// {
// public:
//   void eat()
//   {
//     cout << "Eating..." << endl;
//   }
// };
// class Dog : public Animal
// {
// public:
//   void bark()
//   {
//     cout << "Barking..." << endl;
//   }
// };
// class BabyDog : public Dog
// {
// public:
//   void weep()
//   {
//     cout << "Weeping...";
//   }
// };
// int main(void)
// {
//   BabyDog d1;
//   d1.eat();
//   d1.bark();
//   d1.weep();
//   return 0;
// }


//--------------------------------Multiple Inheritance--------------------------------//


//first base class
// class Vehicle {
// public:
//     Vehicle() { cout << "This is a Vehicle\n"; }
// };
  
// // second base class
// class FourWheeler {
// public:
//     FourWheeler()
//     {
//         cout << "This is a 4 wheeler Vehicle\n";
//     }
// };
  
// // sub class derived from two base classes
// class Car : public Vehicle, public FourWheeler {
// };
  

// int main()
// {
//     Car obj;
//     return 0;
// }


//---------------------------------Hierarchical Inheritance----------------------------//

// class Vehicle
// {
// public:
//   Vehicle() 
//   { 
//     cout << "This is a Vehicle\n"; 
//   }
// };

// // first sub class
// class Car : public Vehicle
// {
// };

// // second sub class
// class Bus : public Vehicle
// {
// };

// int main()
// {
  
//   Car obj1;
//   Bus obj2;
//   return 0;
// }


//---------------------------------Hybrid Inheritance------------------------------//

// class Vehicle
// {
// public:
//   Vehicle()
//   {
//     cout << "This is a Vehicle\n";
//   }
// };

// // base class
// class Fare
// {
// public:
//   Fare()
//   {
//     cout << "Fare of Vehicle\n";
//   }
// };

// // first sub class
// class Car : public Vehicle
// {
// };

// // second sub class
// class Bus : public Vehicle, public Fare
// {
// };

// // main function
// int main()
// {

//   Bus obj2;
//   return 0;
// }


//--------------Handle Special case for ambiguity in hybrid inheritance----------------//


//Note: There are two ways to remove the ambiguity 
//      1. By using scope resolution operator
//      2. By using virtual function


//-------------------------Using Scope resolution operator------------------------//

// class ClassA
// {
// public:
//   int a;
// };

// class ClassB : public ClassA
// {
// public:
//   int b;
// };

// class ClassC : public ClassA
// {
// public:
//   int c;
// };

// class ClassD : public ClassB, public ClassC
// {
// public:
//   int d;
// };

// int main()
// {
//   ClassD obj;

//   // obj.a = 10;                  // Statement 1, Error
//   // obj.a = 100;                 // Statement 2, Error

//   obj.ClassB::a = 10;  // Statement 3
//   obj.ClassC::a = 100; // Statement 4

//   obj.b = 20;
//   obj.c = 30;
//   obj.d = 40;

//   cout << " a from ClassB  : " << obj.ClassB::a;
//   cout << "\n a from ClassC  : " << obj.ClassC::a;

//   cout << "\n b : " << obj.b;
//   cout << "\n c : " << obj.c;
//   cout << "\n d : " << obj.d << '\n';
// }


//------------------------------Using Virtual Function-----------------------------//

//Pending for sometime.....I will provide code soon....