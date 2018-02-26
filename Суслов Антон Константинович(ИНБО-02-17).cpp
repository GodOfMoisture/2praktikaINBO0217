#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main ()
{
	float a = 3.5;
	float x = 0.7;
	float y;
	float t;

	if (a<=x)
	{
	y= a+log(a+x);
	cout <<	"y = "<< y <<endl;

	}
	if (a>x)
	{
		y= sqrt(sin(a*x));
		cout <<	"y = "<< y <<endl;
	}

	if (a>y)
	{
	  t=y/(a-x);
	  cout <<"t = "<< t <<endl;
	}
	if(a=y)
	{
		t=y/(a-x)+(a+x)/y*y;
		cout <<"t = "<< t <<endl;
	}
	if(a>y)
	{
   t=tan(a*x)+cos(2*a*y);
   cout <<"t = "<< t <<endl;

    }
    cout << "Value: "<<endl;
    cout <<	"a = "<< a <<endl;
    cout <<	"x = "<< x <<endl;
    cout <<	"y = "<< y <<endl;
    cout <<	"t = "<< t <<endl;
    system("pause");
	return 0;


}
