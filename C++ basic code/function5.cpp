#include <iostream>
using namespace std;
// 2 3 5 7 ...
// 97 asal mi diye bakarsak  2,3,4,...96 ya kadar olan sayilari denemeliyiz bölünürse asal deðil..
 


bool asal(int x){
	for (int i=2 ; i<x ;i++)
	{
		if (x%i==0)
		return false;
    }
	return true ;
	
	
}
int main()
{
	cout << "1-20 arasi asal sayilar"<< endl;
	int sayac=0;
	
	for (int i=2 ;sayac<20; i++)
  {
	 
	if (asal(i)){
		cout << i << endl;
	    sayac +=1;
	}

}
}

