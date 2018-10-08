#include<iostream>
using namespace std;
int main()
{
	int sayi ;
	cout << "sayiyi giriniz : ";
	cin >> sayi;
	int ilksayi = sayi;
	int basamak = 0;
	int toplam = 0;
	int sayac = 0;
    	while (1)
    	{
    		sayi = sayi/10;
	    	sayac++;
	    	if (sayi <1) 
	        	break ;
	}
   cout << "girilen sayinin basamak sayisi : "<< sayac << endl;
   cout << "sayinin basamaklari :";
 
        for(int i = 0 ; i < sayac; i++){
            basamak = ilksayi % 10;
            ilksayi = ilksayi - basamak; 
            ilksayi = ilksayi / 10;
            cout << basamak << " "; 
            toplam += basamak;
        }
    cout << endl;
    cout << "basamaklar toplami :" << toplam;
}
