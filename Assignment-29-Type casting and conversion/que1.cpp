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
};

int main()
{
    system("cls");
    Complex c1(2,3);
    int x=5;
    c1=x;
    c1.display();
    return 0;
}