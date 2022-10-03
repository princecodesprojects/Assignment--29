#include<iostream>
using namespace std;

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
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

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
  Item(Product p)
  {
    cout<<"Constructor called for conversion"<<endl;
    i=p.getX()+p.getY();
  }
};

int main()
{
    system("cls");
    Item i1;
    Product p1(3,4);
    i1=(Item)p1;
    i1.display();
    return 0;
}