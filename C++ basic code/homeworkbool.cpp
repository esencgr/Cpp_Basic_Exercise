#include <iostream>

using namespace std;
int main()
{
  int x,y;
  cout << "birinci sayi:"; 
  cin >> x ;
  cout << "ikinci sayi:"; 
  cin >> y;
  
  bool esit=false;
  bool kucuk=false; //ilk sayi için 
  
  if (x==y){
  	esit=true;
  	cout << "sayilar esit "<< endl;
  	cout << "sayilar farkli degil"<< endl;
  }
  else {
  	cout << "sayilar esit degil"<< endl;
	cout << "sayilar farklidir"<< endl;	
  }
  
  if (x<y){
  	kucuk=true;
  	cout << "ilk sayi kucuk"<< endl;
  	cout << "ilk sayi kucuk esit"<< endl;
  }
  else {
  	cout << "ilk sayi kucuk degil"<< endl;
	  if (esit)	// if(true) if(false)
	  cout << "ilk sayi kucuk esit"<< endl;
	  else 
	  cout << "ilk sayi kucuk esit degil"<< endl;
  }
  if (kucuk) // x<y
  {
  	cout << "ikinci sayi buyuk"<< endl;
  	cout << "ikinci sayi buyuk esit"<< endl;
  }
  else {
  	cout << "ikinci sayi buyuk degil"<< endl;
  	 if (esit)	// if(true) if(false)
	   cout << "ilk sayi buyuk esit"<< endl;
	   else 
	   cout << "ilk sayi buyuk esit degil"<< endl;
  }
  return 0;
}
