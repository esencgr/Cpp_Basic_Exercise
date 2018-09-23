#include<iostream>
using namespace std;
int main()
{
    int boyut;
    cout << "lutfen boyut belirten bir tek sayi giriniz" << endl;
    cin>>boyut;
    
	for (int i=0;i<boyut;i++){
    	
    	int y,b;
    	
    	if (i<=boyut/2){
    		y =2*i+1;
		}
		else {
			y=2*(boyut-i-1)+1;
		}
		
		
        b=(boyut-y)/2; 
        
        for (int j=0; j<b ; j++){
        	cout<<" ";
	    }    
        for (int j=0; j<y ; j++){
        	cout<<"*";
	    }
	cout<<endl;
	}
}
