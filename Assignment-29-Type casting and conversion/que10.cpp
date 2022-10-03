#include<iostream>
using namespace std;

class Dollar
{
   float d;
   public:
   Dollar()
   {
    cout<<"DC called for Dollar"<<endl;
   }
   Dollar(float a)
   {
    cout<<"PC called for Dollar"<<endl;
    d=a;
   }
   void display()
   {
     cout<<"Dollar= "<<d<<endl;
   }
   operator float()
   {
    cout<<"float() called for Dollar"<<endl;
    return d;
   }
   float getD()
   {
    return d;
   }

};

class Rupee
{
    float r;
    public:
    Rupee()
    {
        cout<<"DC called for Rupee"<<endl;
    }
    Rupee(float a)
    {
        cout<<"PC called for Rupee"<<endl;
        r=a;
    }
    void display()
    {
        cout<<"Rupee= "<<r<<endl;
    }
    operator float()
   {
    cout<<"float() called for Rupee"<<endl;
    return r;
   }
   operator Dollar()
   {
      cout<<"Dollar() called for Rupee"<<endl;
      return r/100;
   }
   Rupee(Dollar s)
   {
      cout<<"Rupee(Dollar) called for rupee"<<endl;
      r=s.getD()*100;
   }
};

int main()
{
    system("cls");
    Rupee r=23;
    Dollar d;
    d=r;
    d.display();
    r.display();
    r=d;
    d.display();
    r.display();
    return 0;
}