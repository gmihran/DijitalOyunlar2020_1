// Proje_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi=10; //sayi de�i�keninin i�inde 10 de�erini saklad�k
    cout << "Hello World!\n"; //Ekrana "Hello World!" yazd�rd�k
    cout << sayi << endl; //Ekrana sayi de�i�kenini yazd�rd�k
    cout << "Say�:"; //Kullan�c�y� bir de�er istedi�imize dair bilgilendirdik
    cin >> sayi; //sayi de�i�keninin i�ine klavyeden de�er ald�k
    cout << sayi; //Ekrana sayi de�i�kenini yazd�rd�k
    return 1; //Program biterken 1 de�erini d�nd�rd�k. Program sona erdi
    cout << sayi; //Bu kod sat�r� (return i�leminden sonra oldu�u i�in) �al��maz
}

/*
Birden fazla sat�r a��klamas�nda bu i�aretler aras�na a��klama girilebilir.
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
