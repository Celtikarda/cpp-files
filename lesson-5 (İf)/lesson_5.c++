#include <iostream>
using namespace std;

int main () {

int sayi;
cout  <<  "Bir sayi giriniz:";
cin>>sayi;

if(sayi>100) {
    cout  <<  "Sayiniz 100'den buyuktur.";
}
else {
cout << "Sayiniz 100'den kuçuktur.";
}

    return 0;
}