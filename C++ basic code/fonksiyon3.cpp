#include <iostream>
using namespace std;


int faktoriyel (int x) 
    {
    int carpim =1; 
    for (int i=x; i>0 ;i--)
        {
        carpim*=i; //carpim = carpim * i
        }
    return carpim;
    
    }

int kombinasyon (int n, int r) 
    {
       return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n-r)); 
    }

int main()
{
    cout << "fonksiyonlar ornekler" << endl;
    
    cout << faktoriyel(3) << endl;
    cout << faktoriyel(6) << endl;
    
    cout << kombinasyon(5,2) << endl;

    
}
