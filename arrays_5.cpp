#include <iostream>
#include<math.h>
using namespace std;

void dizi_yaz(int a[],int n){
    
     for (int i = 0 ; i < n; i++)
	 cout << a[i] << "  ";
		
}

void sirala (int a[],int n){
	
    int i,j,temp,x;
    for (i = 0 ; i < n; i++){
	for (j = i+1 ; j < n; j++){
	    if (a[i] > a[j]){
		temp = a[j];
	    	a[j] = a[i];
	    	a[i] = temp;
	     }		
	}
    }
	
}

int main()
{
    int x;
    cout<< "dizinin eleman sayisi:";
    cin>> x ;
    cout << "elemanlari gir:";
    int a[x];
        
       for (int i = 0; i < x; i++)
            cin>> a[i] ;
		
    int dizi[10];
    
    cout<< "dizi elemanlari sirasiz:";
    
        dizi_yaz(a,x);
	sirala (a,x);
	cout<< endl;
	
    cout<< "dizi elemanlari sirali:";
        
        dizi_yaz(a,x);    
}
