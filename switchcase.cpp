#include <iostream>
using namespace std;
int main()
{
    cout << "switch case kosul ifadesi" << endl;
     int p = 10;
     
     switch (p) {
         
         case 5 : cout << "sayi 5'e esittir." << endl;
         break;
         case 10 : cout << "sayi 10'a esittir. "<< endl;
         break;
         case 15 : cout << "sayi 15'e esittir." << endl;
         break;
         
    int d;
    cout << "lutfen bir sayi giriniz."<< endl;
    cin >> d;
    
    switch (d) {
        
        case 5: {
            cout << "sayi 5'e esittir." << endl;
            }
            break;
        case 10: {
            cout << "sayi 10'a esittir." << endl;
            }
            break;
        case 15: {
            cout  << " sayi 15'e esittir." << endl;
            }
            break;
            default: {
                cout << "sayi 5, 10 ve 15'e esit degildir." << endl;
                }
        }
        return 0;
}
}
