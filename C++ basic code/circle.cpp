#include<iostream>
using namespace std;
#define PI 3.14159 
int main ()
{
	float r;

    cout<< "cemberin yaricapi:";
    cin>> r;
    
	cout<< "cemberin capi:" << (float)2*r <<endl;
	
    cout<< "cemberin cevresi:"<< (float)(2*PI*r) <<endl;
    
    cout<< "cemberin alani:"<< (float)(PI)*(r)*(r);
    
}
