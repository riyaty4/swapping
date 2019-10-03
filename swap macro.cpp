#include<iostream>
using namespace std;
# define swap(x,y,temp) temp=x; x=y; y=temp;
int main()
{
int x1,x2,t;
cout<<"enter the number "; //adding a new number
cin>>x1>>x2;
swap(x1,x2,t);
cout<<"x1= "<<x1<<"x2="<<x2;
return 0;
}

