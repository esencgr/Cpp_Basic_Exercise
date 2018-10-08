#include <iostream>
using namespace std;
    
int f (int x){
        cout << x << endl; 
        return 5; //her fonksiyon cagirildiginda 5 degeri de basýlacak demek oluyor
}

void g (int x){
        cout << x + 5 << endl; 
}
    
int main()
{    
   cout << "fonksiyonlar (functions)" << endl;
   cout << f(5) << endl; //ilk fonksiyonumuzu cagiriyoruz 
   cout << f(16) << endl; //ikinci fonksiyonu cagiriyoruz
   g(10);
}
