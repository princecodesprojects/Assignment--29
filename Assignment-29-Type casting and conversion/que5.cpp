
#include<iostream>
using namespace std;

class Invent1
{
   float a,b;
   public:
   Invent1()
   {

   }
   Invent1(int x,int y)
   {
      a=x; b=y;
   }
   
   void display()
   {
      cout<<"a= "<<a<<" b= "<<b<<endl;
   }
   operator float()
   {
      cout<<"float() called for Invebt1"<<endl;
      return a+b;
   }
   int getA()
   {
    return a;
   }
   int getB()
   {
    return b;
   }
};

class Invent2
{
   float a,b;
   public:
   Invent2()
   {

   }
   Invent2(int x,int y)
   {
      a=x; b=y;
   }
   Invent2(Invent1 s)
   {
      cout<<"Constructor called for conversion"<<endl;
      a=s.getA(); b=s.getB();
   }
   void display()
   {
      cout<<"a= "<<a<<" b= "<<b<<endl;
   }
};

int main()
{
    system("cls");
    Invent1 s1(4,5);
    Invent2 d1;
    float tv=s1;
    s1.display();
    cout<<"tv= "<<tv<<endl;
    d1=(Invent1)s1;
    d1.display();
    return 0;
}