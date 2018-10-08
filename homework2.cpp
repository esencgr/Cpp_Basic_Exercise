#include <iostream>

using namespace std;
int main()
{
  int a;
  cout << "bir deger giriniz:"<< endl; 
  cin >> a ;
   
      if (a<20){  // booolean T/F
      cout << "a kucuk 20" << endl;
      }
      else if (a==20){
      cout << "a eþit 20" << endl;
      }
      else{
      cout << "a buyuk 20" << endl;
      }   
  return 0;
}
