#include<iostream>
using namespace std;

int main()
{
// static type checking going here
int x = 10;
x = 11;
//x = "Hello"  // error: string value is not assigned to x, that's why it is static type

x = 12.5 ; //Note : this is float but taken as a integer

x = 14.78;

cout<<x<<endl;  // means it hold multiple values of same type
 
return 0;

}