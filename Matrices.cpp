#include <iostream>
using namespace std;
int main ()
{
float m[2][2];
int f=0,c=0;
do{
c=0;
do{
cout <<"ingerse m[ "<<f+1<<" ][ "<<c+1<<" ]: ";
	cin >>m[f][c];
c=c+1;
}while (c<2);
f=f+1;
}while (f<2);
f=0;
do{
c=0;
do{
cout <<m[f][c]<<" ";
	c=c+1;
}while (c<2);
cout <<endl;
f=f+1;
}while (f<2);
return (0);
}
