#include<iostream>
using namespace std;
int main ()
{
float a [2],b[2],c[2];
cout<<"ingrese a: ";
cin >>a[0]>>a[1];
cout <<"ingrese b: ";
cin >>b[0]>>b[1];
c[0]=a[0]+b[0];
c[1]=a[1]+b[1];
cout <<"Resultado=( "<<c[0]<<", "<<c[1]<<" )"<<endl;
return(0);
}
