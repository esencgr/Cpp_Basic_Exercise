#include <iostream>
using namespace std;
int main()
{
    //birinci hesaplama örnek kodu
    cout << "Isci problemleri ve basit hesaplamalar" << endl;
    
    cout << "Bir isci isi kac gunde bitiriyor?" << endl; 
    // o işin kaç günde yapıldığı
    int kacgun, iscisayisi;
    cin >> kacgun;
    
    cout << "Toplam kac isci calisacak?" << endl; 
    // ve kaç kişi ile yapıldığı
    cin >> iscisayisi;
    
    float sonuc = kacgun / iscisayisi; /* float olarak atamamızın nedeni işlemin 
     * sonucu ondalıklı bir sayı da çıkabilmesidir.*/
    cout << "isin bitme suresi" << sonuc << "gundur.." <<endl;
    
    /* aynı sonucu aşağıdaki şekilde, ekrana 
    yazdırırkende hesaplatabilirdik:
     * 
     * cout << "isin bitme suresi" << (float) kacgun/iscisayisi << "gundur.." <<endl;
     *
     * ve bu şekilde sadece tek bir satırda işlemi bitirmiş olurduk. */
     
    return 0;
}
