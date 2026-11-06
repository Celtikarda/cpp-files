#include <iostream>
using namespace std;

int topla(int a,int x){ // Fonksiyonu tanımladık. int ile tam sayı almasını sağladık. İki tane parametre ekleyerek main'den sayı aldık. 
    int toplama=x+a; // Return edeceğimiz işlemi burda int ile tanımladık.
    return toplama; // Ne return edeceksek burda 'Returndan Sonra' ya ekledik.
}
int main () {

cout<<"Toplama sonucu:"<<topla(10,20);  // Burda cout ile ekrana yazdık ve topla fonksiyonunu değişkenine atadık.




return 0;
}