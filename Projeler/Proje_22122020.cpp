// Proje_22122020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Turkish");
	/*
	1.ödev: Girilen üç sayýdan hangi sayýnýn büyük olduðunu veren program.
	sayýlarda eþitlik olmasý durumunda da en büyük sayý olarak bu sayýlarý yazdýrsýn
	Durum sayýsý = 2^3-1 = 8-1 =7 ihtimal (durum) vardýr. (3 ise sayý miktarý)
		//Ör: 5 5 5 s1, s2 ve s3 eþit
		//Ör: 5 5 2 s1, s2 en büyük
		//Ör: 3 4 1 s2 en büyük
		// 2 5, 5 2, 5 5
		// 5 5 5, 2 5 5, 5 5 2, 5 2 5,  5 3 2, 2 5 3, 2 3 5 
	*/

	
	int a, b, c;
	
	cout << "Çýkmak için ilk deðeri 0 giriniz\n";
	do
	{
		cout << "Üç sayý giriniz:";
		cin >> a >> b >> c;
		if (a == b && b == c)
			cout << "Üç sayý birbirine eþit";
		else if (a < b && b == c)
			cout << "Ýkinci ve üçüncü sayý en büyük";
		else if (a == b && b > c)
			cout << "Birinci ve ikinci sayý en büyük";
		else if (a == c && a > b)
			cout << "Birinci ve üçüncü sayý en büyük";
		else if (a > b && a > c)
			cout << "Birinci sayý en büyük";
		else if (b > c) // a en büyük deðilse bu koþul çalýþýr.
			cout << "Ýkinci sayý en büyük";
		else
			cout << "Üçüncü sayý en büyük";
		cout << endl;
	} while (a != 0); //durum doðru olduðu sürece döngü çalýþýr. Koþul sonucu false olduðu an döngü sona erer.
	cout << (a != 0); //0 -> false (yanlýþ)
	
	cout << endl;
	
	/*
	2.ödev:
	*
	1 2 3 4 5
	2 4 6 8 10
	3 6 9 12 15
	4 8 12 16 20
	5 10 15 20 25

	Devam etmek istediði sayýyý kullanýcýdan alacaðýz.
	Kullanýcý hangi sayýnýn kaçýncý katýna kadar ilerlemek istiyor?
	Ýki sayý alýnacak:
	Ör.  Hangi deðer: 5 , Kaçýncý katýna kadar: 4
	1 2 3 4
	2 4 6 8
	3 6 9 12
	4 8 12 16
	5 10 15 20

	Ör. Hangi deðer: 2 , Kaçýncý katýna kadar: 8
	1 2 3 4 5 6 7 8
	2 4 6 8 10 12 14 16
	*/
	/*
	1.Baþla
	2.Deðiþkenler: Tamsayý sayi, kat, i, j
	3.Yaz "Hangi sayýnýn, kaçýncý katýna kadar yazdýrmak istiyorsunuz?:"
	4.Oku sayi, kat
	5.Döngü Baþlat i=1, sayi, 1
	5.1.Döngü Baþlat j=1, kat, 1
	5.1.1.Yaz i*j & " "
	5.1.2.Döngü bitir j
	5.2.Yaz "\n"
	5.3.Döngü bitir i
	6.Dur	
	*/
	int sayi, kat, i, j, sayac=0;
	
	cout << "Hangi sayýnýn, kaçýncý katýna kadar yazdýrmak istiyorsunuz?:";
	cin >> sayi >> kat;
	for (i = 1; i <= sayi; i++)
	{

		for (j = 1; j <= kat; j++)
		{
			sayac++;
			cout << i * j << " ";
		}
		cout << endl;
	}
	//Döngü sayi*kat deðeri kadar çalýþmýþ olur.
	cout << "Döngü kaç kez çalýþtý:" << sayac << endl;
	

	/*
	3.ödev:

	Oyun: Rastgele iki sayý (1-10) ve iþlem (+,-,*) program tarafýndan seçilecek. (3 tane random sayý üretilecek)
	Kullanýcý sonucu tahmin etmeye çalýþacak. 3 hata yapýnca program sonlanacak.
	Her doðru cevap 1 puan, sonunda puan yazdýrýlsýn.
	Ýpucu: islem=rand()%3+1;
	Ýþlemi de random saayý olarak tutabilirsiniz.
	Ör. 1 gelirse toplama, 2 gelirse çýkarma, 3 gelirse çarpma yap.
	Ör
	4*5= ?
	20
	Tebrikler,doðru cevap
	5+4=?
	9
	Tebrikler,doðru cevap
	4-1=?
	-3
	Üzgünüm,yanlýþ cevap
	5*3=?
	20
	Üzgünüm,yanlýþ cevap
	6*4=?
	20
	Üzgünüm,yanlýþ cevap
	3 hatalý giriþ yapýldý. Oyun sona erdi.
	Toplam puan:2

	*/
	/*
	Algoritma:
	1.Baþla
	2.Deðiþkenler Tamsayý sayi1,sayi2,islem,tahmin,hak,skor,sonuc
	3.hak=3
	4.skor=0
	5.sayi1=rand()%10+1
	6.sayi2=rand()%10+1
	7.islem=rand()%3+1
	8.Eðer islem=1 ise 
	8.1.sonuc=sayi1+sayi2
	8.2.Yaz sayi1 & "+" & sayi2 & "=? "
	8.3.Deðilse eðer islem=2 ise 
	8.3.1.sonuc=sayi1-sayi2
	8.3.2.Yaz sayi1 & "-" & sayi2 & "=? "
	8.4.Deðilse 
	8.4.1.sonuc=sayi1*sayi2
	8.4.2.Yaz sayi1 & "*" & sayi2 & "=? "
	9.Oku tahmin
	10.Eðer tahmin=sonuc ise 
	10.1.Yaz "Doðru cevap\n"
	10.2.skor=skor+1
	10.3.Deðilse
	10.3.1.Yaz "Yanlýþ cevap\n"
	10.3.2.hak=hak-1
	11.Eðer hak!=0 Git 5
	*/
	srand(time(NULL));
	int sayi1, sayi2, islem, tahmin, hak, skor, sonuc;
	
	hak = 3;
	skor = 0;
	do
	{
		sayi1 = rand() % 10 + 1;
		sayi2 = rand() % 10 + 1;
		islem = rand() % 3 + 1;
		if (islem == 1)
		{
			sonuc = sayi1 + sayi2;
			cout << sayi1 << "+" << sayi2 << "=? ";

		}
		else if (islem == 2)
		{
			sonuc = sayi1 - sayi2;
			cout << sayi1 << "-" << sayi2 << "=? ";
		}
		else 
		{
			sonuc = sayi1 * sayi2;
			cout << sayi1 << "*" << sayi2 << "=? ";
		}
		cin >> tahmin;
		if (tahmin == sonuc)
		{
			cout << "Doðru cevap\n";
			cout << "Skorunuz:" << ++skor << endl;
		}
		else
		{
			cout << "Yanlýþ cevap\n";
			cout << "Kalan hakkýnýz:" << --hak << endl;
		}

	} while (hak!=0); //hak deðeri 0 deðerine eþit olmadýðý sürece döngü devam etsin
	//Koþul saðlanmadýðý an döngü sona erer, saðlandýðý sürece devam eder
	cout << "Oyun bitti. Skorunuz:" << skor << endl;
	


	//While döngülerine göre aþaðýdaki soruyu yanýtlayýnýz.
	//1 ile 10 arasýndaki sayýlarý ekrana yazdýran while döngüsü yazýnýz.
	int sayac1 = 1;
	while (sayac1<=10)
	{
		cout << sayac1++ << " ";
	}
	cout << "Döngü bittikten sayac1 deðeri: " << sayac1 << endl;
	//sayac1 deðeri döngü sona erdiðinde 11 deðerine sahiptir

	int sayac2 = 0;
	while (sayac2 < 10)
	{
		cout << ++sayac2 << " ";
	}
	cout << "Döngü bittikten sayac2 deðeri: " << sayac2 << endl;
	//sayac2 deðeri döngü sona erdiðinde 10 deðerine sahiptir
	
	//Aþaðýdaki yargýlardan hangisi yanlýþtýr
	//Bu while döngüleri ayný çýktýyý verir (Doðru)
	//sayac1 deðeri döngü sona erdiðinde 11 deðerine sahiptir (Doðru)
	//sayac2 deðeri döngü sona erdiðinde 11 deðerine sahiptir (Yanlýþ)
	//Ýlk while döngüsünün çýktýsý "1 2 3 4 5 6 7 8 9 10" þeklindedir (Doðru)
	
	//1 ile 10 arasýndaki sayýlarý ekrana yazdýran do while döngüsünü yazýnýz.
	int sayac3 = 0;
	do
	{
		cout << ++sayac3 << " ";
	} while (sayac3 < 10);
	cout << "Döngü bittikten sayac3 deðeri: " << sayac3 << endl; 
	//sayac3 deðeri döngü sona erdiðinde 10 deðerine sahiptir


	//1 ile 10 arasýndaki sayýlarý ekrana yazdýran do while döngüsünü yazýnýz.
	int sayac4 = 1;
	do
	{
		cout << sayac4++ << " ";
	} while (sayac4 <= 10);
	cout << "Döngü bittikten sayac4 deðeri: " << sayac4 << endl;
	//sayac4 deðeri döngü sona erdiðinde 11 deðerine sahiptir

	cout << "Çýkmak için 0 deðerini giriniz...\n";
	//Kullanýcý 0 (sýfýr) girene kadar (sýfýr deðerini girmediði sürece) kullanýcýdan deðer isteyelim
	//Girdiði deðerlerin toplamlarýný ekrana yazdýralým
	int s, t = 0; 
	//t deðeri toplamadaki etkisiz eleman olan 0 deðerine sahip
	do
	{
		cout << "Sayý:";
		cin >> s;
		t += s; //t = t + s;
	} while (s!=0);
	cout << "Toplam:" << t << endl;

	cout << "Çýkmak için 1 deðerini giriniz...\n";
	//Kullanýcý 1 (bir) girene kadar (bir deðerini girmediði sürece) kullanýcýdan deðer isteyelim
	//Girdiði deðerlerin çarpýmlarýný ekrana yazdýralým
	//int s, c;
	c = 1;
	//c deðeri çarpmadaki etkisiz eleman olan 1 deðerine sahip
	do
	{
		cout << "Sayý:";
		cin >> s;
		c *= s; //c = c * s;
	} while (s != 1);
	cout << "Çarpým:" << c << endl;
	
	cout << "Çýkmak için 0 deðerini giriniz...\n";
	//Kullanýcý 0 (sýfýr) girene kadar (sýfýr deðerini girmediði sürece) kullanýcýdan deðer isteyelim
	//Girdiði deðerlerin çarpýmlarýný ekrana yazdýralým. Ama son girilen sýfýr deðerini iþleme almayalým.
	//int s, c;

	c = 1;
	//c deðeri çarpmadaki etkisiz eleman olan 1 deðerine sahip
	do
	{
		cout << "Sayý:";
		cin >> s;
		if (s != 0)
			c *= s; //c = c * s;
	} while (s != 0);
	cout << "Çarpým:" << c << endl;
	

	cout << "Çýkmak için 0 deðerini giriniz...\n";
	s=1;
	c = 1;
	while (s != 0)
	{
		cout << "Sayý:";
		cin >> s;
		if (s != 0)
			c *= s; //c = c * s;
	}
	cout << "Çarpým:" << c << endl;


	cout << "Çýkmak için 0 deðerini giriniz...\n";
	s = 1;
	c = 1;
	while (s != 0)
	{
		cout << "Sayý:";
		cin >> s;
		if (s == 0)
			break;
		c *= s; //c = c * s;
	}
	cout << "Çarpým:" << c << endl;

	//Ödev-1:
	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerden çiftlerin toplamlarýný ve teklerin toplamlarýný ekrana yazdýralým
	//Örn:Girdiler: 1 3 2 7 6 0
	/*Çýktýlar: 
	Çift toplam= 8
	Tek toplam= 11
	*/

	//Ödev-2:
	//Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
	//Girdiði deðerlerden negatiflerin toplamlarýný ve pozitiflerin toplamlarýný ekrana yazdýralým
	//Örn:Girdiler: -1 1 -2 -3 2 -7 6 0
	/*Çýktýlar:
	Pozitif toplam= 9
	Negatif toplam= -13
	*/

	//Ödev-3:
	//Girdiði deðerlerden negatiflerin çarpýmlarýný ve pozitiflerin çarpýmlarýný ekrana yazdýralým
	//Örn:Girdiler: -1 1 -2 -3 2 -7 6 0
	/*Çýktýlar:
	Pozitif çarpým= 12
	Negatif çarpým= 42
	*/

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
