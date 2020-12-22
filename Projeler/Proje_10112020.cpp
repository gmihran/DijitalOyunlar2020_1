#include <iostream>
#include <locale> //setlocale(LC_ALL, "Turkish"); bu kod için locale kütüphanesini projemize dahil ettik
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    //Türkçe dil paketini (console ekranýnda Türkçe karakterleri ç,ð,þ,ü,ö,Ý,ý vb. göstermek adýna) projemize dahil ettik 
    /*
    //Örnek1
    cout << "char\t\t\t" << sizeof(char) << "\t" << CHAR_MIN << "\t\t" << CHAR_MAX << endl << endl;
    cout << "unsigned char\t\t" << sizeof(unsigned char) << "\t" << 0 << "\t\t" << UCHAR_MAX << endl << endl;
    cout << "short int (INT16)\t" << sizeof(short int) << "\t" << INT16_MIN << "\t\t" << INT16_MAX << endl << endl;
    cout << "int (INT32)\t\t" << sizeof(int) << "\t" << INT_MIN << "\t" << INT_MAX << endl << endl;
    cout << "unsigned short (UINT16)\t" << sizeof(unsigned short) << "\t" << 0 << "\t\t" << UINT16_MAX << endl << endl;
    cout << "unsigned int (UINT32)\t" << sizeof(unsigned int) << "\t" << 0 << "\t\t" << UINT32_MAX << endl << endl;
    cout << "float\t\t\t" << sizeof(float) << "\t" << FLT_MIN << "\t" << FLT_MAX << endl << endl;
    cout << "double\t\t\t" << sizeof(double) << "\t" << DBL_MIN << "\t" << DBL_MAX << endl << endl;
    */
    /*
    //Örnek-2
    int numara = 38;
    float boy = 1.72;
    float kilo = 65.7;
    char cinsiyet = 'K';
    unsigned int yas = 20;

    cout << "numara:" << typeid(numara).name() << " " << numara << " " << sizeof(numara) << " " << &numara << endl;
    cout << "boy:" << typeid(boy).name() << " " << boy << " " << sizeof(boy) << " " << &boy << endl;
    cout << "kilo:" << typeid(kilo).name() << " " << kilo << " " << sizeof(kilo) << " " << &kilo << endl;
    cout << "cinsiyet:" << typeid(cinsiyet).name() << " " << cinsiyet << " " << sizeof(cinsiyet) << " " << (void*)cinsiyet << endl;
    cout << "yas:" << " " << typeid(yas).name() << " " << boy << " " << sizeof(yas) << " " << &yas << endl;
    */
    /*
    //Örnek-3
    //Problem: Girilen sayýnýn tek veya çift olduðunu yazdýran program
    int sayi;
    cout << "Sayý:";
    cin >> sayi;
    cout << "Sayý mod 2:" << sayi % 2 << endl;
    //Negatif sayýlarda mod alýndýðýnda kalan da negatif olarak görünüyor

    //1.çözüm (uzun yol)
    if (sayi < 0) //sayi negatif ise
        sayi = sayi * -1; //sayi deðiþkeninin içindeki deðeri pozitif deðere dönüþtür
    if (sayi % 2 == 1)
        cout << "Tek";
    else 
        cout << "Çift";
    
    //2.çözüm (kýsa yol)
    if (sayi % 2 == 0)
        cout << "Çift";
    else
        cout << "Tek";
    */

    //Örnek-4
    //Problem: Girilen sayýnýn pozitif, negatif veya sýfýr olduðunu yazdýran program
    int sayi;
    cout << "Sayý:";
    cin >> sayi;
    if (sayi < 0)
        cout << "Negatif";
    else if (sayi > 0)
        cout << "Pozitif";
    else
        cout << "Sýfýr";
    
}

