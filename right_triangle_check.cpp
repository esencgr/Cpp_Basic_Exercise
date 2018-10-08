#include <iostream>
using namespace std;
int main()
{
    cout << "Dik ucgen kontrolu" << endl;
    
    int a,b,c; // c yi hipotenüs olarak düşünelim bağıntıyı kullanırken
    
    cout << "ucgenin kenarlarini giriniz:" << endl;
    cin >> a;
    cin >> b;
    cin >> c; 
    
    if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a  ) {
        cout << "dik ucgendir" << endl;
    }
        
    else {
        cout << "dik ucgen degildir" << endl;
    }
    
    return 0;
}
