#include<math.h>
#include<iostream>
using namespace std;
void root(double a,double b,double c)
{
    double discriminant,root1,root2,real,imgpart;
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        root1=(-b + sqrt(discriminant))/(2*a);
        root2=(-b - sqrt(discriminant))/(2*a);
        cout<<"Roots are real and different"<<endl;
        cout<<"Root1="<<root1<<endl;
        cout<<"Root2"<<root2<<endl;
      
    }
    else if(discriminant==0)
    {
        root1=-b/2*a;
        cout<<"Roots are real and same"<<endl;
        cout<<"Root1=Root2="<<root1<<endl;
        
    }
    else
    {
        real=-b/2*a;
        imgpart=(sqrt(-discriminant))/(2*a);
        cout<<"Roots are complex and different"<<endl;
        cout<<"Root1="<<real<<"+"<<imgpart<<"i"<<endl;
        cout<<"Root2="<<real<<"-"<<imgpart<<"i"<<endl;
        
    }
   
}
int main()
{
    double a,b,c;
    cout<<"Enter the a,b,c coefficient:\n";
    cin>>a>>b>>c;
    
    root(a,b,c);
}
