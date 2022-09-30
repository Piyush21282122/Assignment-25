

#include<iostream>
#include<conio.h>
using namespace std;

class Square
{
    private:
      int number;
      int sq;
      static int count;
    public:
       void setNumber(int n)
       {
         number =  n;
       }
       int getNumber()
       {
         return number;
       }
       int getSQ()
       {
          return sq;
       }
       int getCount()
       {
         return count;
       }
       void calculatesquare()
       {
         sq = number *number;
         count++;
       }

};

int Square:: count=0;

int main()
{
    Square s1;
    s1.setNumber(10);
    s1.calculatesquare();
    cout<<s1.getNumber()<<"  square is  "<<s1.getSQ();
    cout<<endl;
    cout<<"count is "<<s1.getCount();

    getch();
    return 0;

}