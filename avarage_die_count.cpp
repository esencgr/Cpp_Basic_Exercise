#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>

using namespace std;

float hesap(){

int eleman;
cout << "Dizi ka� elemanl� olacak?: ";
cin >> eleman; 


      int dizi[eleman], i;
      float aritmetik,statik,toplam=0.0;
      cout << "girilen dizi: ";

 	     for(i = 0; i < eleman; i++)
  		cin>> dizi[i];


            for(i = 0 ; i < eleman; i++)
		toplam += dizi[i];

	       aritmetik = toplam/eleman;

cout <<"Girilen toplam eleman de�eri: " << toplam<<endl; // Bilgi ama�l�.
toplam = 0.0;
 	    for( i = 0; i < eleman; i++)

 	       toplam += pow(dizi[i] - aritmetik , 2.0); // form�l�n uyarlamas�.


	            statik = sqrt (toplam / (eleman-1)); // Sapmay� hesaplad�m ve statik de�i�kenine atad�m.
		    cout << "Aritmetik ortalama :" << aritmetik << endl; // Aritmetik sonu�.
		    cout << "Standart sapma degeri:" << statik;		  // Statik sonu�.

}

	void zar()
{
double sayi,i,k,tut,devam;
double olasilik,hedef;
int c;
        while(1) // Deney s�rekli tekrar edebilsin {
            k = 0;

            cout<< "Zar ka� kere at�lacak?: ";
            cin>> i;

	    tut = i;
	    basla:

	    cout<< "Hangi durum hesaplans�n?:  [1,2,3,4,5,6]: ";
            cin>> hedef;

                if(hedef < 1 || hedef > 6) // Se�imi denetledim.{
	            cout <<"Ge�ersiz se�im yapt�n�z.";
              	    goto basla;
                }
             srand( time (NULL)); // Rastgele say� �ekmek i�in.

		while(i != 0) // Olur ya hani s�f�r denk gelirse diye.
	 	{
     	            sayi=rand()%6+1;
     	            cout<<"Gelen zar: "<<sayi<<endl;

		        if(sayi==hedef)
		           {
			        k += 1; // At�lan zarlar.
		           }
     		        i--; // At��� s�n�rlad�m. Girdi�im say�dan azalacak.
     	        }
        cout<<endl;
        cout<<"Se�ti�iniz zar�n gelme olas�l���: "<<(k/tut)<<endl; // Sonu�.

        cout<<"Deney tekrar� i�in: 1 - Deney sonu i�in: 2 ---> "; // Tekrar teklifi.
        cin>>devam;
               if(devam==1)

	 	  continue; // Devam etsin.

 	       else

	 	   cout<<"Program sonland�."; break;	// Bitirsin.

        } // While sonu.

    }

    void para ()
    {
     double gelen,olasilik,i,sayi;
     double k,tut,devam;
    	while (1)
		{
		k=0;

		cout << "para kac kez atilsin:";
    	cin >> i;
    	tut = i;
    	don:
		cout <<"hangi olasilik hesaplanacak yazi (0) yada tura(1) ??: ";
		cin >> gelen;
    	    if (gelen!=0 && gelen!=1 )
    	    {
    	       cout<< "yanlis deger girildi!"<< endl;
    	       goto don;
			}
		srand(time (NULL));

	        for (i; i > 0; i--)
		    {
	    	sayi = rand()%2;

	    	if (sayi == 1)
	    	    cout << "tura geldi"<<endl;
	    	else
	    	    cout << "yazi geldi"<<endl;
	    	if (sayi == gelen)
			   k += 1;
		    }

			if (gelen == 1)
				cout << "tura gelme olasiligi :"<< (k/tut)<< endl;
			if (gelen == 0)
				cout << "yazi gelme olasiligi :"<< (k/tut)<< endl;


		        cout<< "Deney tekrar� i�in: 1 - Deney sonu i�in: 2 ---> "; // Tekrar teklifi.
                cin>> devam;
     	    if(devam == 1)
	 	    {
	 		cout<< endl; continue; // Devam etsin.
	 	    }
 	 	    else
	 	    {
	 		cout<< "Program sonland�."; break;	// Bitirsin.
	 	    }

       }

     }


int main()
{ setlocale(LC_ALL,"Turkish");
	int secim;
	cout<<setw(5)<<"��LEMNO"<<"setw(20)"<<"YAPILACAK ��LEM"<< endl
		<<setw(3)<<"1"<<setw(35)<<"ORTALAMA-STANDART SAPMA HESABI"<<endl
		<<setw(3)<<"2"<<setw(35)<<"OLASILIK HESABI - ZAR ATMA____"<<endl
		<<setw(3)<<"3"<<setw(35)<<"OLASILIK HESABI - PARA ATMA___"<<endl
		<<setw(3)<<"4"<<setw(35)<<"PROGRAMDAN �IKI�______________"<<endl<<endl;
		tetik:
		cout<<"��lem se�iniz: ";

		cin>>secim;
		switch(secim)
		{
			case 1:
			{
			hesap();
			break;
			}
			case 2:
			{
			zar();
			break;
			}
			case 3:
			{
		     para();
			break;
			}
			case 4:
			{
		    void uyu();
			break;
			}
			default: cout<< "Ge�ersiz se�im." <<endl;
			goto tetik;
		}
}
