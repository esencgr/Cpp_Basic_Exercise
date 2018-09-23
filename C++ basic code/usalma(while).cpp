#include<iostream>
using namespace std;
int main(){
    
    int carpim=1,x,y,i=1;
    cout<<"taban:";
    cin>>x;
    
    cout<<endl;
    
    cout<<"us:";
    cin>>y;
    
    while (i<=y){
    	carpim*=x;
	    ++i;
	}
    cout<<"sonuc:"<<carpim;
}
