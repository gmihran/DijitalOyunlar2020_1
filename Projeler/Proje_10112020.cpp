#include <iostream>
#include <locale> //setlocale(LC_ALL, "Turkish"); bu kod i�in locale k�t�phanesini projemize dahil ettik
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    //T�rk�e dil paketini (console ekran�nda T�rk�e karakterleri �,�,�,�,�,�,� vb. g�stermek ad�na) projemize dahil ettik 
    /*
    //�rnek1
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
    //�rnek-2
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
    //�rnek-3
    //Problem: Girilen say�n�n tek veya �ift oldu�unu yazd�ran program
    int sayi;
    cout << "Say�:";
    cin >> sayi;
    cout << "Say� mod 2:" << sayi % 2 << endl;
    //Negatif say�larda mod al�nd���nda kalan da negatif olarak g�r�n�yor

    //1.��z�m (uzun yol)
    if (sayi < 0) //sayi negatif ise
        sayi = sayi * -1; //sayi de�i�keninin i�indeki de�eri pozitif de�ere d�n��t�r
    if (sayi % 2 == 1)
        cout << "Tek";
    else 
        cout << "�ift";
    
    //2.��z�m (k�sa yol)
    if (sayi % 2 == 0)
        cout << "�ift";
    else
        cout << "Tek";
    */

    //�rnek-4
    //Problem: Girilen say�n�n pozitif, negatif veya s�f�r oldu�unu yazd�ran program
    int sayi;
    cout << "Say�:";
    cin >> sayi;
    if (sayi < 0)
        cout << "Negatif";
    else if (sayi > 0)
        cout << "Pozitif";
    else
        cout << "S�f�r";
    
}

