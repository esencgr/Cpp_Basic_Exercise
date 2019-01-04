#include <iostream>
using namespace std;

// fonksiyonlar -recursive

int carpimR(int a, int b) 
// axb = a+a+a+a+a... // b kadar toplama 
// f(a,b) = a+a+a+a+a... // b kadar toplama 
//  f(a,b-1) = a+a+a+a+a... // b-1 kadar toplama 
//  f(a,b)=a+ f(a,b-1)
{
	if (b==0||a==0)
	return 0;
	if (b<0)
	return carpimR(0-a,0-b); // f(5,-3) f(-3,5) f(-5,-3) f(5,3)
	return a+carpimR(a,b-1);
}

// f(3,4)=3+ f(3,3)
// f(3,3)=3+ f(3,2)
// f(3,2)=3+ f(3,1)
// f(3,1)=3+ f(3,0) burada f(3,0)=0 olduðu biliniyor
int carpim (int a, int b){
int sonuc =0;

 for (int i=0; i<b ; i++){
 	sonuc +=a;
 }
 return sonuc;
 
} 

int main()
{
  cout << carpim (3,4) << endl;
  cout << carpimR (3,4) << endl; 
  cout << carpimR (-5,4) << endl;
  cout << carpimR (8,-5) << endl;

}
