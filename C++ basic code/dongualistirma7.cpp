#include <iostream>
using namespace std;
int main()
{
    cout << "Ornekler - Donguler" << endl;
    
    int okunandeger=0;
    int toplam=0;
    int sayi=0;
    
    for (;;) // eğer bir koşulunuz yoksa bu şekilde kullanabilirsiniz 
    {
    cout << "lutfen bir sayi giriniz:" << endl;
    cin >> okunandeger;
        
        if (okunandeger == -1)
            break; //eğer kullanıcı -1 girerse döngü kırılacak
        
    toplam += okunandeger;
    sayi++;    
    }
        cout << "ortalamasi: " << toplam/sayi <<endl;
    
    return 0;
}
