#include <iostream>

using namespace std;
int main()
{
  int a;
  cout << " ogrencinin notu (0-100):"<< endl; 
  cin >> a ;
  
  if ( a<50){  // booolean T/F
  cout << "not:F" << endl;
  }
  
  else if (a<70){
  cout << "not:C" << endl;
  }
  
  else if (a<90){ 
  cout << "not:B" << endl;
  }
  
  else{
  cout << "not:A" << endl;
  }
  
  return 0;
}
