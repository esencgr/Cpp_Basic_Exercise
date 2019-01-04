/*#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler - Ornekler" << endl;
        
        int toplam =0;
		int sayi=0;
	    int okunandeger=0;
         for (int a=0; okunandeger!=-1 ; a++) 
             { 
             
             cout << "lutfen bir sayi giriniz" << endl;
             cin >> okunandeger;
             
             if (okunandeger==-1)
             break;
             
             toplam += okunandeger;
			 sayi++;
	  
             }
             cout << "ortalamasi:" << (float)toplam/sayi << endl;

}*/
#include <iostream>
using namespace std;
int main(){

        int toplam =0;
	int sayi=0;
	int okunandeger=0;
             for (;;){ 
             
                  cout << "lutfen bir sayi giriniz" << endl;
                  cin >> okunandeger;
             
                  if (okunandeger==-1)
                     break;
             
                  toplam += okunandeger;
	          sayi++;
	  
             }
cout << "ortalamasi:" << (float)toplam/sayi << endl;
}
