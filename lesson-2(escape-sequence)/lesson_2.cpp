#include <iostream>
using namespace std;

int main()
{

    cout << "Alt satıra geçmek için ya 'endl' ya da '(\\)n' kullanılır örneğin:" << endl;
    cout << "Alt satıra geçtim:\n";
    cout << "bi alt satıra daha geçtim";

  // Kaçış elemanları:

  cout << "Bir alt \n satıra geçmek için kullanılır.";
  cout << "bir tab \t boşluk  bırakmak için kullanılır.";
  cout << "Bip \a sesi çıkartmak için kullanılır";
  cout << " \\ ile ekrana \\ yazdırılır. Parantez içine almaya gerek yoktur.";
  cout << "Ekrana \" ile ekrana yazdırılır\" " ;
    return 0;
}