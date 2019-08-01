//RK Method
#include<iostream>
using namespace std;
float diff(float, float);
int main()
{
 float xo, yo,h,x1;
 float k,k1,k2,k3,k4,k11,k22,k33,k44;
 cout<<"\n Enter value of xo = ";
 cin>>xo;
 cout<<"Enter the value of yo = ";
 cin>>yo;
 cout<<"Enter the value of h = ";
 cin>>h;
 cout<<endl;
 int i=1;
 double y1;
 double y2;
 x1= i*h;
 k1 = diff(xo,yo);
 cout<<"The value of K1 (y0)= "<<k1<<endl;
 k2 = diff(xo +(h/2), yo + ((k1*h)/2));
 cout<<"The value of k2 (y0)= "<<k2<<endl;
 k3 = diff(xo +(h/2), yo + ((k2*h)/2));
 cout<<"The value of k3 (y0)= "<<k3<<endl;
 k4 = diff(xo + h , yo + k3*h);
 cout<<"The value of k4 (y0)="<<k4<<endl;
 cout<<endl;
 y1= yo+h*(k1+2*k2+2*k3+k4)/6 ;
 cout<<"The value of y1 = "<<y1<<endl;
 cout<<endl;
 k11 = diff(x1,y1);
 cout<<"The value of k1 (y1) = "<<k11<<endl;
 k22 = diff(x1 +(h/2), y1 + ((k11*h)/2));
 cout<<"The value of k2 (y1)= "<<k22<<endl;
 k33 = diff(x1 +(h/2), y1 + ((k22*h)/2));
 cout<<"The value of k3 (y1) ="<<k33<<endl;
 k44 = diff(x1 + h , y1 + k33*h);
 cout<<"The value of k4 (y1) ="<<k44<<endl;
 cout<<endl;
 y2= y1+h*(k11+2*k22+2*k33+k44)/6;
 cout<<"The value of y2 = "<<y2<<endl; 
}
float diff(float x, float y)
{
 float ans = 1+y+x*x;
 cout<<"";
 return ans;
}
