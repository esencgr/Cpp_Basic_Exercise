#include <iostream>
using namespace std;

int main()
{
    cout << "diziler - ornekler" << endl;
    
    int a[3] = {1,2,3};
    int b[10] = {6,7,1,2,3,8,9,4,11,30};
    
    int aboyut = 3;
    int bboyut = 10;
    
    for(int i = 0; i < bboyut;  i++) {
        bool esit = true;
        for (int j = 0; j < aboyut;  j++) {
            if (a[j] != b[i+j]) { 
            /* b[i+j] dememizin sebebi sayilari kontrol ederken 0. degilse  1'e, 1. degilse  2'ye
            ve bu sekilde devamýný da kontrol etmesini istememizdir. */ 
                
                esit = false; //eger esit degilse yanlis olarak döner ve 
                break ; // eger esit degilse donguden çikar ..
                
                }
            }
            
            if(esit) {
            cout << "alt dizisidir ve " << i << " 'den baslar" << endl;
            }
    }
}
        
