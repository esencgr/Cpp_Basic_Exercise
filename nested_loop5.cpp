#include<iostream>
using namespace std;
int main()
{
    int boyut;
    cout << "lutfen boyut belirten bir sayi giriniz" << endl;
    cin  >> boyut;
    for (int i = 0;  i < boyut;  i++){
            for (int j = 0; j < boyut-(i+1);  j++) 
                
                cout << " ";
                
            for (int j = 0;  j<i+1;  j++)
                
                 cout << "*";
                
     cout << endl;
     }

return 0;
}
