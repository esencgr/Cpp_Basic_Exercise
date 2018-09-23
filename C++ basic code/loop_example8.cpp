#include <iostream>
using namespace std;
int main()
{
	int n, asayi=0, esayi=0 ,ssayi=0;
	
    cout << "Ornekler - Donguler" << endl;
    cout << "kac sayi girilecek: ";
    cin >>n;
	  
    for (int i=1; i<=n; i++) 
    {
    	int g;
    	cin >> g ;
    	
    	if (g==0)
    	ssayi++;
    	
    	else if (g<0)
    	esayi++;
    	
    	else 
    	asayi++;
	}
	cout << "pozitifler:"<< (float)asayi/n<< endl;
	cout << "negatifler:"<< (float)esayi/n<< endl;
	cout << "sifirlar:"<< (float)ssayi/n<< endl;

 }
