#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Hipotenus hesaplama" << endl;
    
    int a,b,c; 
    /*atamış olduğumuz c değerini hipotenüs olarak
    belirledik. Seçime göre değişebilir tabi ki.*/ 
    
    cout << "bir dik kenar giriniz:" << endl;
    cin >> a;
    
    cout << "diger dik kenar giriniz:" << endl;
    cin >> b;
    
    c = sqrt(a*a + b*b);
    cout << "hipotenus:" << c << endl;
    
    cout << "ucgenin cevresi:" << a + b + c << endl;
    
    cout << "ucgenin alani:" << (float)a*b/2 << endl;
    /* değer ikiye bölündüğü için ondalıklı çıkabilir. Bu yüzden
    float olarak belirtiyoruz. */
    
    return 0;
}
