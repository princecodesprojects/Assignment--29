#include<iostream>
using namespace std;

class Complex
{
  int real,img;
  public:
  Complex()
  {

  }
  Complex(int r,int i)
  {
     real=r; img=i;
  }
  Complex(int x)
  {
    real=x;img=x;
  }
  void display()
  {
    cout<<"Real= "<<real<<" Imag= "<<img<<endl;
  }
  operator int()
  {
    cout<<"int() called"<<endl;
    return (real+img);
  }
};

int main()
{
    system("cls");
    Complex c1(2,3);
    int x;
    x=c1;
    c1.display();
    cout<<"x= "<<x<<endl;
    return 0;
}