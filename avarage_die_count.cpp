#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>

using namespace std;
 
float hesap(){
	
int eleman; 
cout << "Dizi kaç elemanlý olacak?: "; 
cin >> eleman; 
      
 
      int dizi[eleman], i;
      float aritmetik,statik,toplam=0.0; 
      cout << "girilen dizi: ";

 	     for(i = 0; i < eleman; i++)
  		cin>> dizi[i];
  		      
 	     
            for(i = 0 ; i < eleman; i++)  		        
		toplam += dizi[i];
  		  
	       aritmetik = toplam/eleman; 
 		
cout <<"Girilen toplam eleman deðeri: " << toplam<<endl; // Bilgi amaçlý.
toplam = 0.0;
 	    for( i = 0; i < eleman; i++) 
 	         
 	       toplam += pow(dizi[i] - aritmetik , 2.0); // formülün uyarlamasý.
	           
	
	            statik = sqrt (toplam / (eleman-1)); // Sapmayý hesapladým ve statik deðiþkenine atadým.
		    cout << "Aritmetik ortalama :" << aritmetik << endl; // Aritmetik sonuç.
		    cout << "Standart sapma degeri:" << statik;		  // Statik sonuç.
		        
} 
    
	void zar()
{
double sayi,i,k,tut,devam;
double olasilik,hedef;
int c;
        while(1) // Deney sürekli tekrar edebilsin {
            k = 0;
     
            cout<< "Zar kaç kere atýlacak?: ";
            cin>> i;
     
	    tut = i;
	    basla:
     
	    cout<< "Hangi durum hesaplansýn?:  [1,2,3,4,5,6]: ";
            cin>> hedef;
     
                if(hedef < 1 || hedef > 6) // Seçimi denetledim.{
	            cout <<"Geçersiz seçim yaptýnýz.";
              	    goto basla;
                } 
             srand( time (NULL)); // Rastgele sayý çekmek için.
     	
		while(i != 0) // Olur ya hani sýfýr denk gelirse diye.
	 	{ 
     	            sayi=rand()%6+1;
     	            cout<<"Gelen zar: "<<sayi<<endl;
     	
		        if(sayi==hedef)
		           {
			        k += 1; // Atýlan zarlar.
		           } 
     		        i--; // Atýþý sýnýrladým. Girdiðim sayýdan azalacak.
     	        }	
        cout<<endl;
        cout<<"Seçtiðiniz zarýn gelme olasýlýðý: "<<(k/tut)<<endl; // Sonuç.
     
        cout<<"Deney tekrarý için: 1 - Deney sonu için: 2 ---> "; // Tekrar teklifi.
        cin>>devam;
               if(devam==1)
	             
	 	  continue; // Devam etsin.
	             
 	       else 
	             
	 	   cout<<"Program sonlandý."; break;	// Bitirsin.
	            
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
				    
		    
		        cout<< "Deney tekrarý için: 1 - Deney sonu için: 2 ---> "; // Tekrar teklifi.
                cin>> devam;
     	    if(devam == 1)
	 	    {
	 		cout<< endl; continue; // Devam etsin.
	 	    }
 	 	    else 
	 	    {
	 		cout<< "Program sonlandý."; break;	// Bitirsin.
	 	    }
     
       }
	    
     }
    
    
int main()
{ setlocale(LC_ALL,"Turkish");
	int secim;
	cout<<setw(5)<<"ÝÞLEMNO"<<"setw(20)"<<"YAPILACAK ÝÞLEM"<< endl
		<<setw(3)<<"1"<<setw(35)<<"ORTALAMA-STANDART SAPMA HESABI"<<endl
		<<setw(3)<<"2"<<setw(35)<<"OLASILIK HESABI - ZAR ATMA____"<<endl
		<<setw(3)<<"3"<<setw(35)<<"OLASILIK HESABI - PARA ATMA___"<<endl
		<<setw(3)<<"4"<<setw(35)<<"PROGRAMDAN ÇIKIÞ______________"<<endl<<endl;
		tetik:
		cout<<"Ýþlem seçiniz: ";

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
			default: cout<< "Geçersiz seçim." <<endl;
			goto tetik;
		}
}

    
    


	 
