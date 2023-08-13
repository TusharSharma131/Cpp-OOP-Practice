#include<iostream>
using namespace std;

class WebsiteName // Interface because it can contain only abstract methods
{
    public:

    virtual string getString()=0;  // Pure Virtual function   
};

class shortName : public WebsiteName
{
    public:

   // must to define in derived class in Interface

   string getString()
   {
     return "GF";
   }
};

class fullName : public WebsiteName
{
   public:

   string getString()
   {
     return "GeekFlare";
   }
};

int main()
{
    WebsiteName* ptr;

    shortName sh;
    fullName full;

    ptr = &sh;
    cout<<"\nThe Short form is : "<<ptr->getString()<<endl;

    ptr = &full;
    cout<<"The Full form is : "<<ptr->getString()<<endl;

    return 0;
}