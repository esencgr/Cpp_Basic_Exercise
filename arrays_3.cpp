#include <iostream>
using namespace std;

int main()
{

int c[3][3];

  for (int i = 0; i < 3; i++)
	    for (int j = 0; j < 3; j++)
	         c[i][j] = i + j;

  for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++)
           cout<< c[i][j]<< '  ';
  cout<< endl;
    }
}
