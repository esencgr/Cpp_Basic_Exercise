#include <iostream>
using namespace std;

int main()
{
 cout << "boyut giriniz:";
 int boyut ;
 cin >> boyut;
   for (int  i = 1;  i<=boyut;  i++){
        for (int k = 1;  k<=i;  k++) // bosluk sayisini belirler 
	    cout << " " ;	
     
        for (int j = 1;  j<=boyut-i+1  ;j++) // sutun sayisini belirler 
	    cout << "*";	

   cout<<endl;	
   }
}
