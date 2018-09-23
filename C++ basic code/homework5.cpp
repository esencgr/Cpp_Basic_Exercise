#include <iostream>

using namespace std;
int main()
{
  int x,y,z;
  cout << "birinci sayi:"; 
  cin >> x ;
  cout << "ikinci sayi:"; 
  cin >> y;
  cout << "ucuncu sayi:"; 
  cin >> z;
  
  if (x>y && x>z)
  {
  	cout << "en buyuk  " << x << endl ;
  	if (y<z)
  	cout << "en kucuk  " << y << endl;
  	else 
  	cout << "en kucuk  " << z << endl;
  }
  if (y>x && y>z)
  {
  	cout << "en buyuk  " << y << endl ;
  	if (x<z)
  	cout << "en kucuk  " << x << endl;
  	else 
  	cout << "en kucuk  " << z << endl;
  }
  if (z>y && z>x)
  {
  	cout << "en buyuk  " << z << endl ;
  	if (y<x)
  	cout << "en kucuk  " << y << endl;
  	else 
  	cout << "en kucuk  " << x << endl;
  }
  return 0;
}
