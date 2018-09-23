#include <iostream>
using namespace std;
int main()
{
    cout << "islemler ve operatorler" << endl;
    
    //toplama ve cikarma opreatorler
    
    int p = 70;
    
    int b = 80;
    
    cout << p + b << endl;
    cout << b - p << endl;
    
    // carpma , bolme ve kalan opreatorler
    
    int d =100;
    
    int f= 25;
    
    cout << d*f << endl;

    cout << d/f << endl;
    
    int l =15;
    
    cout << d%l << endl;
    
    
    
    //arttirma ve azaltma operatorleri
    int c = 5;
    c++;
    
    cout << c << endl;
    
    int y = 6;
    y++;
    
    cout << y << endl;
    
    int s = 90;
    s--, //postfix 
    --s; //prefix 
    
    cout << s << endl;
    
     // postfix ve prefix arasindaki fark 
    
    int a = 5;
    int g = ++a; // (prefix) g = 6 | a = 6
    cout << g << endl;
    
    // a = 6 
    
    int m = a++; // (postfix) m = 6 | a = 7
    cout << m << endl;
    
    return 0;
}
