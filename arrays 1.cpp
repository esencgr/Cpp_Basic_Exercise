#include<iostream>

using namespace std;

int main () 
{
	int a[3] = {5, 6, 2};
	cout<< a[1] <<endl;
	cout<< a[2] + a[0] << endl;
	a[2] = 8;
	cout<< "a={";
	
	    for (int i = 0; i <= 2; i++)
	        cout<< a[i] << ' ';
	        cout<< "}" << endl;
   
	int b[4];
        b[0] = 10;
        b[1] = 20;
        cin>> b[2];
        cin>> b[3];
    
	    cout<< "b={";
	
	    for (int i = 0; i <= 3; i++)
	        cout<< b[i] << ' ';
	        cout<< "}" ;
    
}
