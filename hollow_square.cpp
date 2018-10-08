// Exercise 2.28 Solution
 #include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
int side, rowPosition, size;
cout << "Enter the square side: ";
cin >> side;
size = side;

  while ( side > 0 ) {
        rowPosition = size;

        while ( rowPosition > 0 ) {

          if ( size == side || side == 1 || rowPosition == 1 || rowPosition == size )
           cout << '*';
           
          else 
           cout << ' ';
         
	  --rowPosition;
        }
  cout << '\n';
  --side;
  }

cout << endl;

return 0;
}
