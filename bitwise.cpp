#include <iostream>
using namespace std;
int main()
{
    cout << "bitwise operatorleri" << endl;
    
    //sola kaydirma 
    
    int r = 19;
    cout << r << endl;
    
    int b = r << 2;
    cout << b << endl;
    
    // sag kaydirma 
    
    int g = 18;
    cout << g << endl;
    
    int u = g >> 2;
    cout << u << endl;
    
    //and ( & ) operatorleri
    
    int k = 22 & 13 ;
    
    cout << k << endl;
    
    // veya ( | ) operatorleri
    
    int a = 12 | 6;
    
    cout << a << endl;
    
    // ya da ( ^ ) operatorleri
    
    int m = 5 ^ 28;
    
    cout << m << endl;
    
    return 0;
}
