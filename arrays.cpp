#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
    cout <<"dizinin eleman sayisi:";
    cin >> n ;

    cout <<"elemanlari gir:";
    int a[n];
        for (int i = 0; i < n; i++){
			cin >> a[i] ;
		}
	
    int toplam = 0;
	    for (int i =0; i < n; i++){
        toplam += a[i];
        }
    cout << " dizinin elemanlari toplami:"<< toplam ;
    
}
