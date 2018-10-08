#include <iostream>
#include <ctime>
#include <stdlib.h> 

using namespace std;
int main(){

cout << "kac zar atilacaksa gir :";
int n ;
cin >> n ;
	
srand (time(NULL));
    int a[n];
    int b[n];
    int skor;
	
	
    for (int i = 0; i < n; i++){
		
	  int z1 = rand ()%6+1;
	  int z2 = rand ()%6+1;
	  a[i] = z1;
	  b[i] = z2;
	
	     if (z1 > z2)
	         skor++;
	     
             if (z2 > z1)
	         skor--;
     }
	
	for (int i = 0; i < n; i++){
            cout << a[i] <<' ';
	}
	cout << endl;
	 	
	for (int i = 0; i < n; i++){
            cout << b[i] <<' ';
	}
	cout << endl;
        
            if (skor < 0)
                cout << "2. oyuncu kazandi" <<endl;
            else if (skor > 0)
                cout << "1. oyuncu kazandi" <<endl;
            else 
                cout << "beraberlik" <<endl;
}
