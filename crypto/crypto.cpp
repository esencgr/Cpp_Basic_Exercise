//Soru: Dört basamaklı bir sayının rakamları ters yazılıp,4 ile çarpılırsa, çıkan sonuç,kendisiyle aynıdır. Dört basamaklı bu sayıyı bulunuz.
//if the digits of a four-digit number are reversed and multiplied by 4, the result is the same. Find this four-digit number.
#include <iostream>
using namespace std;

int reverse (int num){
    int right;
    int result=0;
    while (num > 1){
        
        right = num % 10;
        result = result * 10 + right;
        num /= 10;
    }
    return result;
}
int main()
{
      int rev;  
        for (int number=1000;  number <10000;   number++){
            rev = (reverse (number))*4 ;
            if (number == rev) 
                cout << "this number is " << number;                 
        }
   
}
