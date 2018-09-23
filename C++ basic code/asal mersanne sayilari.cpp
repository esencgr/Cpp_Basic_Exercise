#include <iostream>
using namespace std;


    
int ust (int t, int u) // t = taban , u = ussu
    {
        int sonuc =1;
        for (int i=1; i<=u; i++) 
    {
       sonuc = sonuc * t ; // t^u = t*t*t*t*... (u tane)
    }
    return sonuc; 
    }

bool asalmi (int x) 
    {
    for (int i=2; i<x; i++) 
    {
    if (x%i==0) 
        {
        return false;
        }    
    }
    return true; 
    }
    

int main()
{
    cout << "asal-mersanne sayilari"<< endl;
    int c=0;
    for (int i = 2; c<=20; i++) 
    { 
    if (asalmi(ust(2,i)-1)){
	  cout<<(long)(ust(2,i)-1)<<' ';// ASAL OLAN MERSENNE 
	  c++;
    }
}
}
