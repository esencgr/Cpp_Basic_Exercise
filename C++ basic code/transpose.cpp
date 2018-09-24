#include <iostream>
using namespace std;
int main ()
{
	int a [3][3] = {5,4,3,4,0,4,7,10,3};
    int b [3][3];
    cout <<"orjinal dizi: "<< endl;
    
	for (int i = 0;  i < 3;  i++){
	    for (int j = 0;  j < 3;  j++){
		     cout << " " << a[i][j] ; 
		}
			 cout << endl; 	
	}
	/*
    for (int i=0; i<3; i++) {
    	for  (int j=0; j<3; j++){ 
    		  b[j][i]=a[i][j];	
		}
	}
	*/
	 for (int i = 0; i < 3;  i++) {
    	for  (int j= i+1; j < 3;  j++){ 
    		  int g = a[j][i];
			  a[j][i] = a[i][j];
			  a[i][j] = g;	
		}
	}
	cout << "transpoz islemi sonucu: "<<endl;
	
	for (int i = 0; i < 3; i++){
	    for (int j = 0; j < 3; j++){
		     cout << " " << a[i][j] ;
		}
			 cout << endl; 	
	}
}
