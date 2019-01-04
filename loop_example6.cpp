#include <iostream>
using namespace std;
int main()
{
int i=15;
int j=1;
int k=100;
int l=2;

while (i<100)
{
	cout << i << "\t" << j << "\t"<< k << "\t" << l << endl;
	i+=15;
	j+=5;
	k-=10;
	l*=2;
}
cout << endl;
cout << endl;
int us=2;

for (int i=1; i<=6 ; i++)
{
	cout << i*15 << "\t" << i*5 << "\t" << 100-(i-1)*10 << "\t" << us << endl;
	us*=2;
}

}
