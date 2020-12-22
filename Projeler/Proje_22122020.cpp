// Proje_22122020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Turkish");
	/*
	1.�dev: Girilen �� say�dan hangi say�n�n b�y�k oldu�unu veren program.
	say�larda e�itlik olmas� durumunda da en b�y�k say� olarak bu say�lar� yazd�rs�n
	Durum say�s� = 2^3-1 = 8-1 =7 ihtimal (durum) vard�r. (3 ise say� miktar�)
		//�r: 5 5 5 s1, s2 ve s3 e�it
		//�r: 5 5 2 s1, s2 en b�y�k
		//�r: 3 4 1 s2 en b�y�k
		// 2 5, 5 2, 5 5
		// 5 5 5, 2 5 5, 5 5 2, 5 2 5,  5 3 2, 2 5 3, 2 3 5 
	*/

	
	int a, b, c;
	
	cout << "��kmak i�in ilk de�eri 0 giriniz\n";
	do
	{
		cout << "�� say� giriniz:";
		cin >> a >> b >> c;
		if (a == b && b == c)
			cout << "�� say� birbirine e�it";
		else if (a < b && b == c)
			cout << "�kinci ve ���nc� say� en b�y�k";
		else if (a == b && b > c)
			cout << "Birinci ve ikinci say� en b�y�k";
		else if (a == c && a > b)
			cout << "Birinci ve ���nc� say� en b�y�k";
		else if (a > b && a > c)
			cout << "Birinci say� en b�y�k";
		else if (b > c) // a en b�y�k de�ilse bu ko�ul �al���r.
			cout << "�kinci say� en b�y�k";
		else
			cout << "���nc� say� en b�y�k";
		cout << endl;
	} while (a != 0); //durum do�ru oldu�u s�rece d�ng� �al���r. Ko�ul sonucu false oldu�u an d�ng� sona erer.
	cout << (a != 0); //0 -> false (yanl��)
	
	cout << endl;
	
	/*
	2.�dev:
	*
	1 2 3 4 5
	2 4 6 8 10
	3 6 9 12 15
	4 8 12 16 20
	5 10 15 20 25

	Devam etmek istedi�i say�y� kullan�c�dan alaca��z.
	Kullan�c� hangi say�n�n ka��nc� kat�na kadar ilerlemek istiyor?
	�ki say� al�nacak:
	�r.  Hangi de�er: 5 , Ka��nc� kat�na kadar: 4
	1 2 3 4
	2 4 6 8
	3 6 9 12
	4 8 12 16
	5 10 15 20

	�r. Hangi de�er: 2 , Ka��nc� kat�na kadar: 8
	1 2 3 4 5 6 7 8
	2 4 6 8 10 12 14 16
	*/
	/*
	1.Ba�la
	2.De�i�kenler: Tamsay� sayi, kat, i, j
	3.Yaz "Hangi say�n�n, ka��nc� kat�na kadar yazd�rmak istiyorsunuz?:"
	4.Oku sayi, kat
	5.D�ng� Ba�lat i=1, sayi, 1
	5.1.D�ng� Ba�lat j=1, kat, 1
	5.1.1.Yaz i*j & " "
	5.1.2.D�ng� bitir j
	5.2.Yaz "\n"
	5.3.D�ng� bitir i
	6.Dur	
	*/
	int sayi, kat, i, j, sayac=0;
	
	cout << "Hangi say�n�n, ka��nc� kat�na kadar yazd�rmak istiyorsunuz?:";
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
	//D�ng� sayi*kat de�eri kadar �al��m�� olur.
	cout << "D�ng� ka� kez �al��t�:" << sayac << endl;
	

	/*
	3.�dev:

	Oyun: Rastgele iki say� (1-10) ve i�lem (+,-,*) program taraf�ndan se�ilecek. (3 tane random say� �retilecek)
	Kullan�c� sonucu tahmin etmeye �al��acak. 3 hata yap�nca program sonlanacak.
	Her do�ru cevap 1 puan, sonunda puan yazd�r�ls�n.
	�pucu: islem=rand()%3+1;
	��lemi de random saay� olarak tutabilirsiniz.
	�r. 1 gelirse toplama, 2 gelirse ��karma, 3 gelirse �arpma yap.
	�r
	4*5= ?
	20
	Tebrikler,do�ru cevap
	5+4=?
	9
	Tebrikler,do�ru cevap
	4-1=?
	-3
	�zg�n�m,yanl�� cevap
	5*3=?
	20
	�zg�n�m,yanl�� cevap
	6*4=?
	20
	�zg�n�m,yanl�� cevap
	3 hatal� giri� yap�ld�. Oyun sona erdi.
	Toplam puan:2

	*/
	/*
	Algoritma:
	1.Ba�la
	2.De�i�kenler Tamsay� sayi1,sayi2,islem,tahmin,hak,skor,sonuc
	3.hak=3
	4.skor=0
	5.sayi1=rand()%10+1
	6.sayi2=rand()%10+1
	7.islem=rand()%3+1
	8.E�er islem=1 ise 
	8.1.sonuc=sayi1+sayi2
	8.2.Yaz sayi1 & "+" & sayi2 & "=? "
	8.3.De�ilse e�er islem=2 ise 
	8.3.1.sonuc=sayi1-sayi2
	8.3.2.Yaz sayi1 & "-" & sayi2 & "=? "
	8.4.De�ilse 
	8.4.1.sonuc=sayi1*sayi2
	8.4.2.Yaz sayi1 & "*" & sayi2 & "=? "
	9.Oku tahmin
	10.E�er tahmin=sonuc ise 
	10.1.Yaz "Do�ru cevap\n"
	10.2.skor=skor+1
	10.3.De�ilse
	10.3.1.Yaz "Yanl�� cevap\n"
	10.3.2.hak=hak-1
	11.E�er hak!=0 Git 5
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
			cout << "Do�ru cevap\n";
			cout << "Skorunuz:" << ++skor << endl;
		}
		else
		{
			cout << "Yanl�� cevap\n";
			cout << "Kalan hakk�n�z:" << --hak << endl;
		}

	} while (hak!=0); //hak de�eri 0 de�erine e�it olmad��� s�rece d�ng� devam etsin
	//Ko�ul sa�lanmad��� an d�ng� sona erer, sa�land��� s�rece devam eder
	cout << "Oyun bitti. Skorunuz:" << skor << endl;
	


	//While d�ng�lerine g�re a�a��daki soruyu yan�tlay�n�z.
	//1 ile 10 aras�ndaki say�lar� ekrana yazd�ran while d�ng�s� yaz�n�z.
	int sayac1 = 1;
	while (sayac1<=10)
	{
		cout << sayac1++ << " ";
	}
	cout << "D�ng� bittikten sayac1 de�eri: " << sayac1 << endl;
	//sayac1 de�eri d�ng� sona erdi�inde 11 de�erine sahiptir

	int sayac2 = 0;
	while (sayac2 < 10)
	{
		cout << ++sayac2 << " ";
	}
	cout << "D�ng� bittikten sayac2 de�eri: " << sayac2 << endl;
	//sayac2 de�eri d�ng� sona erdi�inde 10 de�erine sahiptir
	
	//A�a��daki yarg�lardan hangisi yanl��t�r
	//Bu while d�ng�leri ayn� ��kt�y� verir (Do�ru)
	//sayac1 de�eri d�ng� sona erdi�inde 11 de�erine sahiptir (Do�ru)
	//sayac2 de�eri d�ng� sona erdi�inde 11 de�erine sahiptir (Yanl��)
	//�lk while d�ng�s�n�n ��kt�s� "1 2 3 4 5 6 7 8 9 10" �eklindedir (Do�ru)
	
	//1 ile 10 aras�ndaki say�lar� ekrana yazd�ran do while d�ng�s�n� yaz�n�z.
	int sayac3 = 0;
	do
	{
		cout << ++sayac3 << " ";
	} while (sayac3 < 10);
	cout << "D�ng� bittikten sayac3 de�eri: " << sayac3 << endl; 
	//sayac3 de�eri d�ng� sona erdi�inde 10 de�erine sahiptir


	//1 ile 10 aras�ndaki say�lar� ekrana yazd�ran do while d�ng�s�n� yaz�n�z.
	int sayac4 = 1;
	do
	{
		cout << sayac4++ << " ";
	} while (sayac4 <= 10);
	cout << "D�ng� bittikten sayac4 de�eri: " << sayac4 << endl;
	//sayac4 de�eri d�ng� sona erdi�inde 11 de�erine sahiptir

	cout << "��kmak i�in 0 de�erini giriniz...\n";
	//Kullan�c� 0 (s�f�r) girene kadar (s�f�r de�erini girmedi�i s�rece) kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerin toplamlar�n� ekrana yazd�ral�m
	int s, t = 0; 
	//t de�eri toplamadaki etkisiz eleman olan 0 de�erine sahip
	do
	{
		cout << "Say�:";
		cin >> s;
		t += s; //t = t + s;
	} while (s!=0);
	cout << "Toplam:" << t << endl;

	cout << "��kmak i�in 1 de�erini giriniz...\n";
	//Kullan�c� 1 (bir) girene kadar (bir de�erini girmedi�i s�rece) kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerin �arp�mlar�n� ekrana yazd�ral�m
	//int s, c;
	c = 1;
	//c de�eri �arpmadaki etkisiz eleman olan 1 de�erine sahip
	do
	{
		cout << "Say�:";
		cin >> s;
		c *= s; //c = c * s;
	} while (s != 1);
	cout << "�arp�m:" << c << endl;
	
	cout << "��kmak i�in 0 de�erini giriniz...\n";
	//Kullan�c� 0 (s�f�r) girene kadar (s�f�r de�erini girmedi�i s�rece) kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerin �arp�mlar�n� ekrana yazd�ral�m. Ama son girilen s�f�r de�erini i�leme almayal�m.
	//int s, c;

	c = 1;
	//c de�eri �arpmadaki etkisiz eleman olan 1 de�erine sahip
	do
	{
		cout << "Say�:";
		cin >> s;
		if (s != 0)
			c *= s; //c = c * s;
	} while (s != 0);
	cout << "�arp�m:" << c << endl;
	

	cout << "��kmak i�in 0 de�erini giriniz...\n";
	s=1;
	c = 1;
	while (s != 0)
	{
		cout << "Say�:";
		cin >> s;
		if (s != 0)
			c *= s; //c = c * s;
	}
	cout << "�arp�m:" << c << endl;


	cout << "��kmak i�in 0 de�erini giriniz...\n";
	s = 1;
	c = 1;
	while (s != 0)
	{
		cout << "Say�:";
		cin >> s;
		if (s == 0)
			break;
		c *= s; //c = c * s;
	}
	cout << "�arp�m:" << c << endl;

	//�dev-1:
	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerden �iftlerin toplamlar�n� ve teklerin toplamlar�n� ekrana yazd�ral�m
	//�rn:Girdiler: 1 3 2 7 6 0
	/*��kt�lar: 
	�ift toplam= 8
	Tek toplam= 11
	*/

	//�dev-2:
	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerden negatiflerin toplamlar�n� ve pozitiflerin toplamlar�n� ekrana yazd�ral�m
	//�rn:Girdiler: -1 1 -2 -3 2 -7 6 0
	/*��kt�lar:
	Pozitif toplam= 9
	Negatif toplam= -13
	*/

	//�dev-3:
	//Girdi�i de�erlerden negatiflerin �arp�mlar�n� ve pozitiflerin �arp�mlar�n� ekrana yazd�ral�m
	//�rn:Girdiler: -1 1 -2 -3 2 -7 6 0
	/*��kt�lar:
	Pozitif �arp�m= 12
	Negatif �arp�m= 42
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
