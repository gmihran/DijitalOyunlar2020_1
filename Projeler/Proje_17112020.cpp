// Proje_17112020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    //�dev-1: ��z�m-1
    //Girilen say�n�n tamsay� veya ondal�kl� bir say� oldu�unun ��kt�s�n� veren program
    /*
    float sayi;
    cout << "Say�:";
    cin >> sayi;
    if (fmod(sayi,1)==0)
        cout << "Tam say�d�r";
    else
        cout << "Ondal�kl� say�d�r";
    */

    //�dev-1: ��z�m-2
    //Girilen say�n�n tamsay� veya ondal�kl� bir say� oldu�unun ��kt�s�n� veren program
    /*
    float sayi;
    cout << "Say�:";
    cin >> sayi;
    if (sayi==(int)sayi)
        cout << "Tam say�d�r";
    else
        cout << "Ondal�kl� say�d�r";
    */

    //�dev-1: ��z�m-3
    //Girilen say�n�n tamsay� veya ondal�kl� bir say� oldu�unun ��kt�s�n� veren program
    /*
    float sayi;
    cout << "Say�:";
    cin >> sayi;
    if ((sayi-int(sayi) == 0))
        cout << "Tam say�d�r";
    else
        cout << "Ondal�kl� say�d�r";
    */
    /*
    int sayi;
    cout << "Say�:";
    cin >> sayi;
    if (sayi % 10 == 0)
        cout << "2,5,10 de�erlerine b�l�n�r";
    else if (sayi % 5 == 0)
        cout << "5 de�erine b�l�n�r";
    else if (sayi % 2 == 0)
        cout << "2 de�erine b�l�n�r";
    else
        cout << "2,5,10 de�erlerine b�l�nmez";
    */
    
    int vize,odev,final;
    float ortalama;
    cout << "�dev:";
    cin >> odev;
    cout << "Vize:";
    cin >> vize;
    cout << "Final:";
    cin >> final;
    ortalama = (vize+odev+final) / 3;
    if (ortalama >= 50)
        cout << "Ge�ti";
    else
        cout << "Kald�";
    //cout << (ortalama >= 50 ? "Ge�ti" : "Kald�");
    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
