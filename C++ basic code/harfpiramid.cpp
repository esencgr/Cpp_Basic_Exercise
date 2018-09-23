#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "harf gir: " ;
  cin >> c ;
  int x=c;
  for (int i=x-65; i<26; i++){
  	for (int j=x-65; j<=i; j++){
  		cout << char(j+65) << " " ;
	  }
	  for (int j=i-1; j>=x-65; j--){
	  	cout << char(j+65) << " " ;
	  }
	  cout<<endl;
  }
 }
