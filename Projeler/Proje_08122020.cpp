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
    cout << "++sayi:" << ++sayi << endl; //sayi deðeri 1 artar ve ekrana yazdýrýlýr
    cout << "sayi++:" << sayi++ << endl; //sayi deðeri ekrana yazdýrýlýr ve deðeri 1 arttýrýlýr
    cout << "sayi:" << sayi << endl;
    cout << "sayi+1:" << sayi + 1 << endl; //sayi deðerinin 1 fazlasý ekrana yazdýrýlýr

    sayi = 5;
    toplam = sayi;
    cout << toplam << " " << sayi << endl; // 5 5 
    toplam = ++sayi; //önce arttýr son ata 
    cout << toplam << " " << sayi << endl; //6 6
    toplam = sayi++; //önce ata sonra arttýr 
    cout << toplam << " " << sayi << endl; // 6 7

    if (sayi <= toplam) // 7<=6
        cout << "1.durum Toplam büyük veya eþit\n";
    if (sayi <= toplam++) //7<=6 toplam=7
        cout << "2.durum Toplam büyük veya eþit\n";
    if (sayi <= toplam) //7<=7
        cout << "3.durum Toplam büyük veya eþit\n";;
    sayi = 6;
    toplam = 5;
    if (sayi == ++toplam) //toplam=6, 6==6 kýyaslar
        cout << "4.durum Toplam sayýya eþit\n";
    sayi = 5;
    toplam = 5;
    if (sayi++ > toplam)// 5>5 kýyaslar, sayi=6
        cout << "5.durum sayi toplamdan büyük\n";
    sayi = 5;
    toplam = 5;
    if (++sayi > toplam)//sayi=6, 6>5 kýyaslar
        cout << "6.durum sayi toplamdan büyük\n";

    sayi = 5;
    cout << --sayi << endl; //sayi=4, çýktý=4
    cout << sayi-- << endl; //çýktý=4, sayi=3 

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
    cout << endl << "Döngü bitince i deðeri:" << i << endl;
    for (i = 1; i < 6; ++i)
    {
        cout << i;
    }
    cout << endl << "Döngü bitince i deðeri:" << i << endl;

    for (i = 0; i < 0; i++)
    {
        //döngü hiçbir zaman çalýþmaz
        //ölü döngü
        cout << "deneme" << endl;
    }
    for (int i = 0; i >= 0; i++)
    {

        //sonsuza kadar çalýþýr
        //sonsuz döngü 
        //sonsuz döngü Unity'de programýn kilitlenmesine sebep olur. Bu yüzden sonsuz döngüden kaçýnmalýyýz.
        cout << i << endl;
        if (i > 10)
            //sonsuz döngü kýrýldý
            break;
    }
    int sayac = 0;
    for (;;) //bu yapýyý Unity'de kullanmayýnýz!
    {
        //sonsuz döngü
        cout << sayac << " Merhaba" << endl;
        //Ekrana 6 kez "Merhaba" yazdýrýr.
        if (++sayac > 5) 
            //sonsuz döngü kýrýldý 
            break;
    }
    cout << "Sayaç:" << sayac << endl;
    /*Sýnav sorusu örnekleri:
    sayac son deðeri nedir? (döngü bittikten sonraki deðeri: 6)
    döngü kaç kez çalýþýr? (6)
    Ekrana kaç kez Merhaba yazdýrýr? (6)
    */
    sayac = 0;
    for (;;) //bu yapýyý Unity'de kullanmayýnýz!
    {
        //sonsuz döngü
        if (++sayac > 5)
            //sonsuz döngü kýrýldý 
            break;
        cout << sayac << " Merhaba" << endl;
        //Ekrana 5 kez "Merhaba" yazdýrýr.
    }
    cout << "Sayaç:" << sayac << endl;
    /*Sýnav sorusu örnekleri: 
    sayac son deðeri nedir? (döngü bittikten sonraki deðeri: 6)
    döngü kaç kez çalýþýr? (5)
    Ekrana kaç kez Merhaba yazdýrýr? (5)
    */

    //1 ile 10 arasýndaki tüm tam sayýlarý ekrana yazdýralým
    for (int i = 1 ; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << endl;
    //1 ile 10 arasýndaki tek sayýlarý ekrana yazdýralým
    for (int i = 1; i <= 10; i+=2) //i=i+2
    {
        cout << i << "\t";
    }

    cout << endl;
    //0 ile 10 arasýndaki çift sayýlarý ekrana yazdýralým
    sayac = 1;
    for (int i = 0; i <= 10; i += 2) //i=i+2
    {
        cout << sayac++ << ".çalýþtý" << endl;
        cout << i << "\t";
    }
    //Bu döngü kaç kere çalýþýr? (6)

    cout << endl;
    //0 ile 10 arasýndaki çift sayýlarý ekrana yazdýralým
    sayac = 1;
    for (int i = 0; i <= 10; i++)
    {
        cout << sayac++ << ".çalýþtý" << endl;
        if (i % 2 == 0)
            cout << i << "\t";
    }
    //Bu döngü kaç kere çalýþýr? (11)

     //For döngüsünün çalýþabilmesi için koþulun (þartýn) doðru olmasý gerekir.

    cout << endl;

    //1-100 arasýnda 3'e veya 5'e tam bölünebilen sayýlarý ekrana yazdýralým
    for  (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            cout << i << "\t";
    }
    cout << endl;

    //1-100 arasýnda 3'e veya 5'e tam bölünebilen, ama 15'e tam bölünemeyen sayýlarý ekrana yazdýralým
    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0 || i % 5 == 0) && i % 15 != 0)

            cout << i << "\t";
    }
    cout << endl;


    //5 ile 1 arasýndaki tüm sayýlarý ekrana yazdýrýnýz
    //5 4 3 2 1
    for (i = 5; i >= 1; i--)
    {
        cout << i << "\t";
    }
    cout << endl;

    //100 ile 1 arasýndaki tek sayýlarý ekrana yazdýrýnýz
    for (i = 99; i >= 1; i-=2)
    {
        cout << i << "\t";
    }
    cout << endl;


    //Klavyeden girilen sayýnýn faktöriyelini ekrana yazdýrýnýz.
    //Faktöriyel: Bir sayýnýn faktöriyeli 1'den kendisine kadar olan sayýlarýn çarpýmý
    //Ör: 5!=1*2*3*4*5=120
    int f = 1; //Faktöriyel sonucunu burada saklayacaðýz
    //Çarpmada etkisiz eleman olan 1 deðerini f deðerine atadýk. Ýlk deðer atamasý önemli!
    cout << "Sayý:";
    cin >> sayi;
    for (i = 1; i <= sayi; i++)
    {
        f = f * i;
    }
    cout << "Faktöriyel:" << f << endl;

    //Ör: 5!=5*4*3*2*1
    f = 1;
    for (i = sayi; i >= 1; i--)
    {
        f = f * i;
    }
    cout << "Faktöriyel:" << f << endl;
    
    
    /*
    //Sýnav sorusu örnek:
    //Aþaðýdaki kod satýrýnda sayi deðerinin faktöriyelini hesaplamak için yapýlmasý gereken düzenleme aþaðýdakilerden hangisidir?
    for (i = 5; i >= 1; i--)
    {
        f = 1;
        f = f * i;
    }
    //f=1; kod satýrý for döngüsünden önce yazýlmalýdýr. (Cevap)
    //for içindeki i=5 kodunun yerine i=sayi kodu gelmelidir. (Cevap)
    */

    //Klavyeden girilen 5 adet sayýnýn toplamýný ve ortalamasýný ekrana yazdýrýnýz. (Döngü ile çözünüz)
    //Toplamada etkisiz eleman 0 olduðu için toplam deðerinin ilk deðeri 0 olarak atanýr
    //Algoritmada döngü adýmý yazarken:
    //Döngü Baþlat deðiþken adý=baþlangýç deðeri,son deðeri,artýþ miktarý
    /*
    1.Baþla
    2.Deðiþken: Tamsayi sayi,toplam=0,i Reel ortalama
    3.Döngü Baþlat i=1,5,1 
    3.1.Yaz "Sayý:" 
    3.2.Oku sayi
    3.3.toplam=toplam+sayi //toplam+=sayi
    3.4.Döngü Bitir i
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
        cout << "Sayý:";
        cin >> s;
        toplam = toplam + s;
    }
    ort = toplam / float(5);
    //ort = float(toplam) / 5;
    //Sonucun float yani ondalýklý çýkmasý için bölünen ya da bölen deðerin float olmasý gerekiyor.
    //int = int/int sonuç int deðer çýkar (float deðere atama yapsak bile)
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
