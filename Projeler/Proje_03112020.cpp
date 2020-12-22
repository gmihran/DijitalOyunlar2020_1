// Proje_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi=10; //sayi deðiþkeninin içinde 10 deðerini sakladýk
    cout << "Hello World!\n"; //Ekrana "Hello World!" yazdýrdýk
    cout << sayi << endl; //Ekrana sayi deðiþkenini yazdýrdýk
    cout << "Sayý:"; //Kullanýcýyý bir deðer istediðimize dair bilgilendirdik
    cin >> sayi; //sayi deðiþkeninin içine klavyeden deðer aldýk
    cout << sayi; //Ekrana sayi deðiþkenini yazdýrdýk
    return 1; //Program biterken 1 deðerini döndürdük. Program sona erdi
    cout << sayi; //Bu kod satýrý (return iþleminden sonra olduðu için) çalýþmaz
}

/*
Birden fazla satýr açýklamasýnda bu iþaretler arasýna açýklama girilebilir.
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
