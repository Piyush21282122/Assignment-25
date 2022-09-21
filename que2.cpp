

#include<iostream>
#include<conio.h>
using namespace std;
class Time 
{
    private:
       int hr;
       int min;
       int sec;
    public:
       void set_data(int x,int y,int z)
       {
          hr = x;
          min = y;
          sec = z;
       }
       void display_data()
       {
          cout<<hr<<" hr "<<min<<" min "<<sec<<" sec";
          cout<<endl;
       }

};

int main()
{
    Time t1;
    int x,y,z;

    cout<<"Enter hr ,minute and second "<<endl;
    cin>>x>>y>>z;

    t1.set_data(x,y,z);
    t1.display_data();

    getch();
    return 0;

}