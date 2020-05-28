#include <iostream>
using namespace std;
int main()
{
    cout << "Break - Continue komutlari" << endl;

    //break komutu

    for (int a = 0; a < 10; a++) {

        if (a == 5)
            break;

        cout << a << " ";

    }
    cout << endl;
    //continue komutu

     for (int b = 0; b < 10; b++) {

        if (b == 5)
            continue;

        cout << b << " ";

     }





    return 0;
}
