#include <iostream>

int faktoriyelr (int n){
	if (n==1)
	return 1;
	return n* faktoriyelr(n-1);
} 

int main()
{

cout << faktoriyelr(5)<<endl;
    
}
