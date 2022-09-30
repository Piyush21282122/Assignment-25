

#include<iostream>
#include<conio.h>
#define PI 3.14
using namespace std;
class Area
{
    private:
       int radius;
       int length,breadth;
       int side;
    public:
      void setRadius(int r)
      {
         radius = r;
      }
      void setLength(int l)
      {
         length = l;
      }
      void setBreadth(int b)
      {
         breadth = b;
      }
      void setSide(int s)
      {
         side = s;
      }
      float areaOfCircle()
      {
         return PI*radius*radius;
      }
      float areaOfRectangle()
      {
         return length*breadth;
      }
      int areaOfSquare()
      {
         return side*side;
      }
};


int main()
{
    Area a1;

    a1.setRadius(5);
    a1.setBreadth(10);
    a1.setLength(20);
    a1.setSide(2);

    cout<<" Area of Circle is "<<a1.areaOfCircle();
    cout<<endl;
    cout<<" Area of Rectangle is "<<a1.areaOfRectangle();
    cout<<endl;
    cout<<" Area of Square is "<<a1.areaOfSquare();
    cout<<endl;

    getch();
    return 0;

}