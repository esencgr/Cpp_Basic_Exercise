/*#include <iostream>
using namespace std;

int main()
{
 cout << "boyut giriniz:";
 int boyut ;
 cin >> boyut;
     for (int i=0;i<boyut;i++)
     {      
         for(int j=0;j<boyut;j++){ 
	     if (i>=j)
               cout << "*" ;
       
             else 
 	       cout << " " ;
          } 
     cout<<endl;
     }
 }
 */
 #include <iostream>
using namespace std;

int main()
{
 cout << "boyut giriniz:";
 int boyut ;
 cin >> boyut;
 for (int i = 1; i<=boyut;  i++)
 {      
       for  (int j = 1; j<=i; j++)
	   
             cout << "*" ;
	   
 cout<<endl;     
 }
}
