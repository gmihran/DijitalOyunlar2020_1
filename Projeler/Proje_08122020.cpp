// Proje_08122020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi=5, toplam=0;
    cout << "sayi:"<< sayi << endl;
    cout << "++sayi:" << ++sayi << endl; //sayi de�eri 1 artar ve ekrana yazd�r�l�r
    cout << "sayi++:" << sayi++ << endl; //sayi de�eri ekrana yazd�r�l�r ve de�eri 1 artt�r�l�r
    cout << "sayi:" << sayi << endl;
    cout << "sayi+1:" << sayi + 1 << endl; //sayi de�erinin 1 fazlas� ekrana yazd�r�l�r

    sayi = 5;
    toplam = sayi;
    cout << toplam << " " << sayi << endl; // 5 5 
    toplam = ++sayi; //�nce artt�r son ata 
    cout << toplam << " " << sayi << endl; //6 6
    toplam = sayi++; //�nce ata sonra artt�r 
    cout << toplam << " " << sayi << endl; // 6 7

    if (sayi <= toplam) // 7<=6
        cout << "1.durum Toplam b�y�k veya e�it\n";
    if (sayi <= toplam++) //7<=6 toplam=7
        cout << "2.durum Toplam b�y�k veya e�it\n";
    if (sayi <= toplam) //7<=7
        cout << "3.durum Toplam b�y�k veya e�it\n";;
    sayi = 6;
    toplam = 5;
    if (sayi == ++toplam) //toplam=6, 6==6 k�yaslar
        cout << "4.durum Toplam say�ya e�it\n";
    sayi = 5;
    toplam = 5;
    if (sayi++ > toplam)// 5>5 k�yaslar, sayi=6
        cout << "5.durum sayi toplamdan b�y�k\n";
    sayi = 5;
    toplam = 5;
    if (++sayi > toplam)//sayi=6, 6>5 k�yaslar
        cout << "6.durum sayi toplamdan b�y�k\n";

    sayi = 5;
    cout << --sayi << endl; //sayi=4, ��kt�=4
    cout << sayi-- << endl; //��kt�=4, sayi=3 

    sayi = 1;
    sayi = sayi - 1; //sayi=0
    cout << sayi << endl;
    sayi -= 1; //sayi=-1
    cout << sayi << endl;
    sayi *= 10; //sayi=-10
    cout << sayi << endl;
    sayi /= 2;//sayi=-5
    cout << sayi << endl;
    sayi += 3;//sayi=-2
    cout << sayi << endl;
    int i;
    for (i = 1; i < 6; i++)
    {
        cout << i;
    }
    cout << endl << "D�ng� bitince i de�eri:" << i << endl;
    for (i = 1; i < 6; ++i)
    {
        cout << i;
    }
    cout << endl << "D�ng� bitince i de�eri:" << i << endl;

    for (i = 0; i < 0; i++)
    {
        //d�ng� hi�bir zaman �al��maz
        //�l� d�ng�
        cout << "deneme" << endl;
    }
    for (int i = 0; i >= 0; i++)
    {

        //sonsuza kadar �al���r
        //sonsuz d�ng� 
        //sonsuz d�ng� Unity'de program�n kilitlenmesine sebep olur. Bu y�zden sonsuz d�ng�den ka��nmal�y�z.
        cout << i << endl;
        if (i > 10)
            //sonsuz d�ng� k�r�ld�
            break;
    }
    int sayac = 0;
    for (;;) //bu yap�y� Unity'de kullanmay�n�z!
    {
        //sonsuz d�ng�
        cout << sayac << " Merhaba" << endl;
        //Ekrana 6 kez "Merhaba" yazd�r�r.
        if (++sayac > 5) 
            //sonsuz d�ng� k�r�ld� 
            break;
    }
    cout << "Saya�:" << sayac << endl;
    /*S�nav sorusu �rnekleri:
    sayac son de�eri nedir? (d�ng� bittikten sonraki de�eri: 6)
    d�ng� ka� kez �al���r? (6)
    Ekrana ka� kez Merhaba yazd�r�r? (6)
    */
    sayac = 0;
    for (;;) //bu yap�y� Unity'de kullanmay�n�z!
    {
        //sonsuz d�ng�
        if (++sayac > 5)
            //sonsuz d�ng� k�r�ld� 
            break;
        cout << sayac << " Merhaba" << endl;
        //Ekrana 5 kez "Merhaba" yazd�r�r.
    }
    cout << "Saya�:" << sayac << endl;
    /*S�nav sorusu �rnekleri: 
    sayac son de�eri nedir? (d�ng� bittikten sonraki de�eri: 6)
    d�ng� ka� kez �al���r? (5)
    Ekrana ka� kez Merhaba yazd�r�r? (5)
    */

    //1 ile 10 aras�ndaki t�m tam say�lar� ekrana yazd�ral�m
    for (int i = 1 ; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << endl;
    //1 ile 10 aras�ndaki tek say�lar� ekrana yazd�ral�m
    for (int i = 1; i <= 10; i+=2) //i=i+2
    {
        cout << i << "\t";
    }

    cout << endl;
    //0 ile 10 aras�ndaki �ift say�lar� ekrana yazd�ral�m
    sayac = 1;
    for (int i = 0; i <= 10; i += 2) //i=i+2
    {
        cout << sayac++ << ".�al��t�" << endl;
        cout << i << "\t";
    }
    //Bu d�ng� ka� kere �al���r? (6)

    cout << endl;
    //0 ile 10 aras�ndaki �ift say�lar� ekrana yazd�ral�m
    sayac = 1;
    for (int i = 0; i <= 10; i++)
    {
        cout << sayac++ << ".�al��t�" << endl;
        if (i % 2 == 0)
            cout << i << "\t";
    }
    //Bu d�ng� ka� kere �al���r? (11)

     //For d�ng�s�n�n �al��abilmesi i�in ko�ulun (�art�n) do�ru olmas� gerekir.

    cout << endl;

    //1-100 aras�nda 3'e veya 5'e tam b�l�nebilen say�lar� ekrana yazd�ral�m
    for  (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            cout << i << "\t";
    }
    cout << endl;

    //1-100 aras�nda 3'e veya 5'e tam b�l�nebilen, ama 15'e tam b�l�nemeyen say�lar� ekrana yazd�ral�m
    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0 || i % 5 == 0) && i % 15 != 0)

            cout << i << "\t";
    }
    cout << endl;


    //5 ile 1 aras�ndaki t�m say�lar� ekrana yazd�r�n�z
    //5 4 3 2 1
    for (i = 5; i >= 1; i--)
    {
        cout << i << "\t";
    }
    cout << endl;

    //100 ile 1 aras�ndaki tek say�lar� ekrana yazd�r�n�z
    for (i = 99; i >= 1; i-=2)
    {
        cout << i << "\t";
    }
    cout << endl;


    //Klavyeden girilen say�n�n fakt�riyelini ekrana yazd�r�n�z.
    //Fakt�riyel: Bir say�n�n fakt�riyeli 1'den kendisine kadar olan say�lar�n �arp�m�
    //�r: 5!=1*2*3*4*5=120
    int f = 1; //Fakt�riyel sonucunu burada saklayaca��z
    //�arpmada etkisiz eleman olan 1 de�erini f de�erine atad�k. �lk de�er atamas� �nemli!
    cout << "Say�:";
    cin >> sayi;
    for (i = 1; i <= sayi; i++)
    {
        f = f * i;
    }
    cout << "Fakt�riyel:" << f << endl;

    //�r: 5!=5*4*3*2*1
    f = 1;
    for (i = sayi; i >= 1; i--)
    {
        f = f * i;
    }
    cout << "Fakt�riyel:" << f << endl;
    
    
    /*
    //S�nav sorusu �rnek:
    //A�a��daki kod sat�r�nda sayi de�erinin fakt�riyelini hesaplamak i�in yap�lmas� gereken d�zenleme a�a��dakilerden hangisidir?
    for (i = 5; i >= 1; i--)
    {
        f = 1;
        f = f * i;
    }
    //f=1; kod sat�r� for d�ng�s�nden �nce yaz�lmal�d�r. (Cevap)
    //for i�indeki i=5 kodunun yerine i=sayi kodu gelmelidir. (Cevap)
    */

    //Klavyeden girilen 5 adet say�n�n toplam�n� ve ortalamas�n� ekrana yazd�r�n�z. (D�ng� ile ��z�n�z)
    //Toplamada etkisiz eleman 0 oldu�u i�in toplam de�erinin ilk de�eri 0 olarak atan�r
    //Algoritmada d�ng� ad�m� yazarken:
    //D�ng� Ba�lat de�i�ken ad�=ba�lang�� de�eri,son de�eri,art�� miktar�
    /*
    1.Ba�la
    2.De�i�ken: Tamsayi sayi,toplam=0,i Reel ortalama
    3.D�ng� Ba�lat i=1,5,1 
    3.1.Yaz "Say�:" 
    3.2.Oku sayi
    3.3.toplam=toplam+sayi //toplam+=sayi
    3.4.D�ng� Bitir i
    4.ortalama=toplam/5
    5.Yaz "Toplam:"&toplam&" Ortalama:"&ortalama
    6.Dur
    */
    //int i, toplam;
    float ort;
    int s;
    toplam = 0;
    for (i = 1; i <= 5; i++)
    {
        cout << "Say�:";
        cin >> s;
        toplam = toplam + s;
    }
    ort = toplam / float(5);
    //ort = float(toplam) / 5;
    //Sonucun float yani ondal�kl� ��kmas� i�in b�l�nen ya da b�len de�erin float olmas� gerekiyor.
    //int = int/int sonu� int de�er ��kar (float de�ere atama yapsak bile)
    cout <<"Toplam:" << toplam << "\nOrtalama:" <<  ort;


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
