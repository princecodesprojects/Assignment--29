#include<iostream>
using namespace std;

class Item
{
  int i;
  public:
  Item()
  {

  }
  Item(int x)
  {
     i=x;
  }
  void display()
  {
    cout<<"i="<<i<<endl;
  }
  

};

class Product
{
    int x,y;
    public:
    Product()
    {

    }
    Product(int a,int b)
    {
        x=a; y=b;
    }
    void display()
    {
        cout<<"x= "<<x<<" y= "<<y<<endl;
    }
    
    operator Item()
   {
    cout<<"Item() called for conversion"<<endl;
    return (x+y);
   }
};



int main()
{
    system("cls");
    Item i1;
    Product p1(3,4);
    i1=p1;
    i1.display();
    return 0;
}