

#include<iostream>
#include<conio.h>
using namespace std;
class Reverse
{
    private:
       int number;
       int reverse_number;
    public:
       void setNumber(int n)
       {
         number = n;
       }
       int getNumber()
       {
         return number;
       }
       int getReverseNumber()
       {
         return reverse_number;
       }
       void calculateReverseNumber();

};

void Reverse:: calculateReverseNumber()
{
   int result,s=0;

   while(number != 0)
   {
      result = number%10;
      s=s*10 + result;
      number =  number/10;
   }
   reverse_number = s;
}

int main()
{
    Reverse r1,r2;

    r1.setNumber(123);
    r1.calculateReverseNumber();
    cout<<"reverse number is "<<r1.getReverseNumber();
    getch();
    return 0;
}