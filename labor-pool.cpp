#include <iostream>
using namespace std;
int main()
{

    cout << "Isci problemleri ve basit hesaplamalar" << endl;

    int kacgun, iscisayisi;

    cout << "Bir isci isi kac gunde bitiriyor?" << endl;
    cin >> kacgun;

    cout << "Toplam kac isci calisacak?" << endl;
    cin >> iscisayisi;

    float sonuc = kacgun / iscisayisi;
    cout << "isin bitme suresi" << sonuc << "gundur.." <<endl;

    return 0;
}
