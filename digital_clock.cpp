#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main(){

    int second=0;
    int minute=0;
    int hour=0;
    
  while (1){
        cout << "digital clock ---> ";
        cout << hour/3600 << ":"<< minute/60 << ":" << second ;
   
          if (second == 59)
            second = -1;
          if (minute == 3599)
            minute = -1;
          
        second++;
        minute++;
        hour++;
        
  sleep (1);   
  system("cls");
  }
}