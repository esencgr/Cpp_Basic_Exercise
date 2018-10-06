//Soru: Klavyeden girilecek 0 ile 999 arasında bir tam sayının, yazıyla ifade eden ( örneğin 49, 'kırkdokuz' gibi ) bir program oluşturunuz
//Question: Create a program from 0 to 999 that will be entered from the keyboard (ex 49, 'forty-nine')
#include <iostream>
using namespace std;
int main(){
    int number; 
        do {
           cout << " enter a number(0-999) = " ;
           cin >> number;
           
           if (number > 999 || number < 0){
                 cout << " number is not suitable" << endl;
                 cout << " please enter a number(0-999) ";
                 cout << endl;
                 cout << endl;
           }
           else
             break; 
        }while (1) ;
        
     cout << "number = " << number << " => " ;
    
    switch ( number / 100 ){
        case 9 :  cout << "dokuzyuz" ; break;
        case 8 :  cout << "sekizyuz" ; break;
        case 7 :  cout << "yediyuz"  ; break;
        case 6 :  cout << "altıyuz"  ; break;
        case 5 :  cout << "besyuz"   ; break;
        case 4 :  cout << "dortyuz"  ; break;
        case 3 :  cout << "ucyuz"    ; break;
        case 2 :  cout << "ikiyuz"   ; break;
        case 1 :  cout << "yuz"      ; break;
    }
     
    switch ((number % 100) / 10){
    
        case 9 :  cout << "doksan"  ; break;
        case 8 :  cout << "seksen"  ; break;
        case 7 :  cout << "yetmis"  ; break;
        case 6 :  cout << "altmis"  ; break;
        case 5 :  cout << "elli"    ; break;
        case 4 :  cout << "kirk"    ; break;
        case 3 :  cout << "otuz"    ; break;
        case 2 :  cout << "yirmi"   ; break;
        case 1 :  cout << "on"      ; break;
    }   
    
    switch (number  %  10){
    
        case 9 :  cout << "dokuz "  ; break;
        case 8 :  cout << "sekiz"   ; break;
        case 7 :  cout << "yedi"    ; break;
        case 6 :  cout << "alti"    ; break;
        case 5 :  cout << "bes"     ; break;
        case 4 :  cout << "dort"    ; break;
        case 3 :  cout << "uc"      ; break;
        case 2 :  cout << "iki"     ; break;
        case 1 :  cout << "bir"     ; break;
    }
    
    cout << endl;
    
        if (number == 0 )
            cout << "sıfır" << endl;
    return 0;
}