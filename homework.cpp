#include <iostream>

using namespace std;
int main()
{
    int x,y ;

    cout << "lutfen birinci sayi giriniz: " ;
    cin >> x ;

    cout << "lutfen ikinci sayiyi giriniz ";
    cin >> y;

    cout << "Toplam : " << x +y<< endl;
    cout << "Fark : " << x -y<< endl;
    cout << "Carpim : " << x *y<< endl;
    cout << "Bolum : " << (float)x /y<< endl;
    cout << "Kalan : " << x %y<< endl;

return 0;
}
