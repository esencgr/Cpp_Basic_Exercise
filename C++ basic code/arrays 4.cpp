#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  int a[8]={5,6,2,8,9,1,10,3};
  int toplam=0;
  int carpim=1;
  int tektoplam=0;
  int ttsayisi=0;
  int eb=a[0],ek=a[0];
  
  for (int i=0; i<8 ; i++){
  	
  	toplam+=a[i];
  	
 	if (a[i]%2==1){
  		
		tektoplam+=a[i];
		ttsayisi++;
		
	  }
	  
    if (a[i]%2==0){
  		                    
       cout<<a[i]<<' ';                 // int a[8]={5,6,2,8,9,1,10,3};
       
       if (eb<a[i])   
           eb=a[i];
        
	    if (ek>a[i])
           ek=a[i];
	  }
  
  	
  	carpim*=a[i];
  	
  	  
  }
    cout<<endl;
    cout<< "ortalama:"<<(float)toplam/8 <<endl ;
	cout<< "geo ortalama:"<<pow(carpim,(float)1/8) <<endl ;
    cout<< "tek toplam ortalama:"<<(float)tektoplam/ttsayisi<<endl ; 
    cout<< "cift eb+ek  ortalama:"<<(float)(eb+ek)/2<<endl ; 
}
