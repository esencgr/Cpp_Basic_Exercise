#include <iostream>
using namespace std;

int main()
{
 cout << "boyut giriniz:";
 int boyut ;
 cin >> boyut;
 for (int i=1;i<=boyut;i++)
 {      
       for  (int j=1;j<=boyut;j++)
	   { 
	   if (j>=boyut-i+1)
       cout << "1" << " " ;
       
       else 
 	   cout << "0" << " " ;
	   } 
      cout<<endl;
      
 }
 }
