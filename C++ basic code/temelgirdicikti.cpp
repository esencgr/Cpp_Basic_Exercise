#include <iostream>
using namespace std;
int main()
{
    cout << "temel girdi cikti islemleri" << endl;
    
    int a;
    cout << "lutfen bir sayi giriniz: "<< endl;
    cin >> a; //klavyeden girilecek değer
    
    cout << "klavyeden girdiginiz deger:" << a << endl;
    
    cout << "klavyeden girilen degerin 10 fazlasi: " << a + 10 << endl;
    cout << "klavyeden girilen degerin 10 eksigi: " << a - 10 << endl;
    
    return 0;
}
