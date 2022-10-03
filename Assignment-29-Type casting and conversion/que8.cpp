#include<iostream>
using namespace std;

class Rupee
{
  int r;
  public:
   Rupee()
   {

   }
   Rupee(int x)
   {
      r=x;
   }
   void display()
   {
    cout<<"Rupee= "<<r<<endl;
   }
   operator int()
   {
      cout<<"int() called for Rupee"<<endl;
      return r;
   }
};

int main()
{
    system("cls");
    Rupee r=10;
    r.display();
    int x=r;
    cout<<"x= "<<x<<endl;
    return 0;
}