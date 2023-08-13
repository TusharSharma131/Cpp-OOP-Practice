#include<iostream>
using namespace std;

//--------------------------------Default Constructor----------------------------//

// class Employee
// {
//     public:

//     string Name, City;

//     // default constructor
     
//       Employee()
//       {
//         Name = "Tushar";
//         City = "Delhi";
//       }
// };

// int main()
// {
//     cout<<"\nFetching name and city of first employee...\n";
//     Employee e1;

//     cout<<"Name: "<<e1.Name<<"\nCity: "<<e1.City<<endl;
//     return 0;
// }


//------------------------------Parametrized Constructor------------------------------//


// class EmpRecord
// {
//   private:

//   int id;
//   string Name;
//   float Salary;

//   public:

//   //Parametrized Constructor

//   EmpRecord(int i, string n, float s)
//   {
//       id  = i;
//       Name = n;
//       Salary = s;
//   }

//   void display()
//   {
//     cout<<endl<<id<<" "<<Name<<" "<<Salary<<endl;
//   }

// };


// int main()
// {
//   EmpRecord e1(101,"Tushar",40000); // Implicit call
//   EmpRecord e2 = EmpRecord(102,"Avirat",50000);  // Explicit Call

//   e1.display();
//   e2.display();

//   return 0;
// }


//----------------------------------Copy Constructor--------------------------------//


// class Student
// {
//   private:

//   int Roll_No;
//   string Name, City;
//   long long int Mobile;

//    public:

//   // Parameterized Constructor
//   Student(int r, string n, string c, long long int m)
//   {
//     this->Roll_No = r;
//     this->Name = n;
//     this->City = c;
//     this->Mobile = m;
//   }

//    // Copy Constructor
//   Student(Student &stu)
//   {
//     Roll_No = stu.Roll_No;
//     Name = stu.Name;
//     City = stu.City;
//     Mobile = stu.Mobile;
//   }

//   void display()
//   {
//     cout<<Roll_No<<" "<<Name<<" "<<City<<" "<<Mobile<<endl;
//   }

// };

// int main()
// {
//   cout<<"\nFetching student record from the Database...\n";
//   Student stu(21225,"Shubham","Chandigarh",6280543900);
//   Student stu0(21226,"Tushar","Delhi",6280927840);

//   Student stu1(stu);  // stu1 = stu 
//   Student stu2(stu0); // stu1 = stu0

//   stu1.display();
//   stu2.display();

//   return 0;
// }


//------------------------------Dynamic Constructor-------------------------------//

// class Employee {
//   int* due_projects;

//   public:
    
//     Employee() {
//     // Allocating memory at run time.
//       due_projects = new int;
//       *due_projects = 0;
//     }

//     Employee(int x) {
//       due_projects = new int;
//       *due_projects = x;
//     }
    
//     void display() {
//       cout << *due_projects << endl;
//     }
// };


// int main() {
 
//   Employee employee1 = Employee();
//   cout << "Due projects for employee1:\n";
//   employee1.display();

//   Employee employee2 = Employee(10);
//   cout << "Due projects for employee2:\n";
//   employee2.display();

//   return 0;
// }