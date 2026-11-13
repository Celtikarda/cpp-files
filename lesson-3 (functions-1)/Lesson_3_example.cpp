#include <iostream>
using namespace std;

int carp(int x, int y){
    int islem = x*y;
    return islem;
}

int main () {


cout << "Carpma işlemi sonucu:" << carp(25,30); // biz buraya değişken değilde fonksiyonun kendisini yazmalıyız. Değişken yazarsak yanlış olur.


    return 0;
}