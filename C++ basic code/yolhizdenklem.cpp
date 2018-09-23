#include <iostream>
using namespace std;
int main()
{
    cout << "Yol - Hiz problemleri" << endl;
    
    int mesafe, hiz;
    
    cout << "mesafeyi giriniz:" << endl;
    cin >> mesafe;
    
    cout << "hizinizi giriniz:" << endl;
    cin >> hiz;
    
    int saat = mesafe/hiz; //eğer sonuç 3.333 gibi ise 3 olarak görünecektir.
    
    float dakikakismi = (float)mesafe/hiz - (int)mesafe/hiz;
    int dakika= dakikakismi * 60;
    
    cout << "tahmini varis sureniz:" << (int)saat << "saat ve" << dakika << "dakikadir."<< endl;
    
    
    return 0;
}
