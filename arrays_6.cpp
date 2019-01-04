#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "dizinin eleman sayisi:";
    cin>> n ;
    cout<< "elemanlari gir:";
    int a[n];
    int toplam = 0;
        for (int i = 0; i < n; i++){
	    cin>> a[i] ;
	    toplam = toplam + a[i];
        }
     int eb = a[0];
     int ek = a[0];
     for (int i = 0; i < n; i++){
			
	     if (eb < a[i])
                 eb = a[i];	
		           
	     if (ek > a[i])
		 ek = a[i];   
     } 
	
    cout<< "maks:" << toplam-ek << endl ;
    cout<< "min:" << toplam-eb << endl;
    
}
