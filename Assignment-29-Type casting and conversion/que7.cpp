#include<iostream>
using namespace std;



class Minutes
{
   int mint;
   public:
   Minutes()
   {
     mint=0;
   }
   Minutes(int m)
   {
      mint=m;
   }
   void display()
   {
      cout<<"Minute: "<<mint<<endl;
   }
   
};

class Time
{
  int hrs,mint;
  public:
  Time()
  {

  }
  Time(int h,int m)
  {
     hrs=h; mint=m;
  }
  void display()
  {
    cout<<"Hours: "<<hrs<<" Minuts: "<<mint<<endl;
  }
  operator Minutes()
   {
      cout<<"Minutes() called"<<endl;
      return (hrs*60)+mint;
   }
};

int main()
{
    system("cls");
    Time t1(2,30);
    t1.display();
    Minutes m1;
    m1.display();
    m1=t1;
    m1.display();
    return 0;
}