#include<iostream>
using namespace std;

class Dollar
{
  int d;
  public:
  Dollar()
  {

  }
  Dollar(int d)
  {
    this->d=d;
  }
  void display()
  {
    cout<<"Dollar= "<<d<<endl;
  }
};

int main()
{
    system("cls");
    int x=50;
    Dollar d;
    d=x;
    d.display();
    return 0;
}