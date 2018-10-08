#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler - Ornekler" << endl;
         
         int toplam =0;
		  
         for (int a=0; a< 5 ; a++){ 
    
	     int okunandeger;
             cout << "lutfen bir sayi giriniz" << endl;
             cin >> okunandeger;
             toplam += okunandeger; 
             
	 }
    cout << "ortalamasi:" << toplam/5 << endl;
    
    return 0;
}
