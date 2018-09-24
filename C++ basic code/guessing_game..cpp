#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int tahmin ;
	int cevap;
	srand(time (NULL));
	int random = rand () % 10;
	don:
	cout << "bir sayi tahmin edin:  "<< endl;
	cin >> tahmin ;
	
	while (tahmin != random)
	{
		if (tahmin < random )
		    cout << "cevaptan kucuk"<<endl;
		    
		else if (tahmin > random)
		    cout << "cevaptan buyuk"<<endl;
	
	 goto don;
	    
	}
	  cout << "dogru cevap"<<endl;
} 
