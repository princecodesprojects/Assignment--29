#include<iostream>
using namespace std;

class Time
{
  int hrs,mint,sec=0;
  public:
  Time()
  {
    sec=0;
  }
  Time(int t)
  {
    hrs=t/60;
    mint=t%60;
  }
  void display()
  {
    cout<<"Hours: "<<hrs<<" Minutes: "<<mint<<" Second: "<<sec<<endl;
  }
};

int main()
{
    system("cls");
    int duration;
    cout<<"Enter time duration in minutes"<<endl;
    cin>>duration;
    Time t1=duration;
    t1.display();
    return 0;
}