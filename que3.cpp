

#include<iostream>
#include<conio.h>
using  namespace std;
class factorial
{
    private:
       int n;
       int fact;
    public:
       void set_N(int x)
       {
          n  = x;
       }

       int get_N()
       {
           return n;
       }

       int get_factorial()
       {
         return fact;
       }


       void calculate_factorial()
       {
          int i,f=1;

          if(n <= 0)
          {
             fact = 1;
             return;
          }

          for(i=1;i<=n;i++)
          {
             f=f*i;
          }
          fact = f;
       }

};

int main()
{
    factorial f1,f2;

    f1.set_N(5);
    f2.set_N(2);
    f1.calculate_factorial();
    f2.calculate_factorial();
    cout<<"factorial of "<<f1.get_N()<<" is "<<f1.get_factorial();
    cout<<endl;
    cout<<"fcatorial of "<<f2.get_N()<<" is "<<f2.get_factorial();
    cout<<endl;

    getch();
    return 0;

}