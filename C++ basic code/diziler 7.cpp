#include <iostream>
using namespace std;

int main() {
     cout << "cok boyutlu diziler" << endl;
     
     int a[2][2]={{1,2},{3,4}};
     
     for (int i=0; i<2; i++) { 
    // {1,2} ve {3,4} arasındaki seçim için sırası ile artan değere bağladık
         
         for (int j=0; j<2;j++) {
    // 1 ve 2 mi yoksa 3 ve 4 mü önce basılacak diyerek onu da sırası ile j değişkeine bağladık
             cout << a[i][j] << " " ;
             }
             cout << endl; //her satır bittiginde alt satıra geçmesi için
         }
}
