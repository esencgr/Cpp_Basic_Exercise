#include <iostream>
#include <ctime>
#include <stdlib.h> 

using namespace std;
int main()
{
    cout << "diziler - ornekler" << endl;
    cout << "lutfen kac zar atilacagini giriniz!!!" << endl;
    int n;
    cin >> n; //kullanicidan zar girmesini istiyoruz.
    
    srand(time(NULL));
    int skor=0; // sonucu belirlemek için bir degisken atiyoruz
    int a[n]; 
    int b[n]; //zar degerlerinin tutulmasi için hafiza 
    for (int i = 0; i < n; i++) {
        
        int z1 = rand()%6+1; //birincinin zarlari
        int z2 = rand()%6+1; //ikincinin zarlari
        
        a[i]= z1; //her atanan degeri hafizada tutabilmek için alan 
        b[i]= z2;
        
    
        if (z1>z2)
            skor++;
           
        else if (z2>z1) 
	    skor--;
           
    }
    
    //atilan zar degerlerini ekranda bastirmak icin
    
    for (int i=0; i<n;i++) 
        cout << a[i] << "  " ;
        
        cout << endl;

    for (int i = 0; i < n; i++) 
        cout << b[i] << "  " ;
       
        cout << endl;

    //skorun belirlenebilmesi içinn
   
	if (skor > 0) 
        cout << "birinci kullanici kazanmistir" << endl;
        
        else if (skor < 0)
        cout << "ikinci kullanici kazanmistir" << endl;
                
        else  
	cout << endl; 
}
