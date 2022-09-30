

#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle 
{
    private:
       int l,b;
       int area;
    public:
       void setL(int L)
       {
          l = L;
       }
       void setB(int B)
       {
         b = B;
       }
       int getL()
       {
          return l;
       }
       int getB()
       {
         return b;
       }
       int getArea()
       {
         return area;
       }
       void calculateRectangleArea()
       {
         area = l*b;
       }
};

int main()
{
    Rectangle r1,r2;
    r1.setL(10);
    r1.setB(20);
    r1.calculateRectangleArea();

    cout<<"Area of Recatngle is "<<r1.getArea();
    cout<<endl;

    r2.setL(20);
    r2.setB(30);
    r2.calculateRectangleArea();
    cout<<"Area of Rectnagle is "<<r2.getArea();
    cout<<endl;

    getch();
    return 0;
}