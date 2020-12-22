// Proje_15122020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <random>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turkish");
	srand(time(NULL)); //Bu kodun amac�, random her �al��t���nda farkl� bir de�er �retmesini sa�lamak. Say�lar ayn� de�er de olabilir. Buradaki ama� dizilimin farkl� bir dizilim ile kar��m�za gelmesi.
	int sayi;
	cout << "Bir say� giriniz:";
	cin >> sayi;
	switch (sayi)
		//Do�ru olan case direk (di�er case kontrol�nden ge�meden) �al���r.
	{
	case 1:
		cout << "1 girildi";
		break;
	case 2:
		cout << "2 girildi";
		break;
	default:
		cout << "1 veya 2 girilmedi";
		break;
	}
	cout << endl;

	//if ad�mlar�na tek tek kontrol edilerek bak�l�r.
	if (sayi == 1)
		cout << "1 girildi";
	else if (sayi == 2)
		cout << "2 girildi";
	else
		cout << "1 veya 2 girilmedi";

	cout << endl;
	//Men�:
	//1- 1 ile 50 aras�ndaki asal say�lar� yazd�ral�m
	//2- Klavyeden girilen �� de�erden en b�y�k de�eri ekrana yazd�ral�m
	//3- 1 ile 25 aras�nda �retilen rastgele say�y� tahmin etme oyunu oynatal�m. (Tahmin hakk�: 3 hak)
	switch (sayi)
	{
	case 1:
		//asal say�= Sadece 1'a ve kendisine tam b�l�nen say�lard�r. 1 ve kendisi d���nda hi�bir b�leni olmayan say�lard�r.
		for (int sayilar = 1; sayilar <= 50; sayilar++)
		{
			bool kontrol = true; //say�n�n asal olup olmad���n� tutan kontrol de�i�kenine true de�erine atayarak ilk a�amada say�n�n asal oldu�unu farzedelim
			if (sayilar == 1)
				kontrol = false; //asal de�ildir
			else //else yazmasak da ko�ul sa�lanmad��� i�in a�a��daki for d�ng�s� �al��mayacakt�r. 
				for (int bolen = 2; bolen <= sayilar/2; bolen++)
				{
					//Bir say� yar�s�ndan daha b�y�k olan bir say�ya b�l�nemez. Bu y�zden for d�ng�s�n� say�n�n yar�s�na kadar s�rd�rd�k. (sayilar/2)
					if (sayilar % bolen == 0) 
					{
						kontrol = false; //asal de�ildir
						break; //D�ng� k�r�ld�. Bir tam b�lme i�lemi ger�ekle�irse say�m�z asal say� de�ildir ispat etmi� oluruz. Di�er say�lara b�l�n�p b�l�nmedi�ine bakmam�za gerek yok. Bu y�zden d�ng�y� k�rd�k. 
						//break ad�m�ndan sonra gelen d�ng�ye ait hi�bir kod sat�r� �al��maz.
					}	
				}
			if (kontrol) //kontrol == true
				cout << sayilar << endl;
		}
		break;
	case 2:
		int s1, s2, s3;
		cout << "3 tane say� giriniz:";
		cin >> s1 >> s2 >> s3;
		if (s1 >= s2 && s1 >= s3)
			cout << s1;
		else if (s2 >= s3)
			cout << s2;
		else
			cout << s3;
		cout << endl;

		if (s1 > s2 && s1 > s3)
			cout << "s1 en b�y�k";
		else if (s2 > s1 && s2 > s3)
			cout << "s2 en b�y�k";
		else if (s3 > s1 && s3 > s2)
			cout << "s3 en b�y�k";
		else
			cout << "Say�larda e�itlik var";
		//say�larda e�itlik olmas� durumunda da en b�y�k say� olarak bu say�lar� yazd�rs�n
		//�r: 5 5 5 s1, s2 ve s3 e�it
		//�r: 5 5 2 s1, s2 en b�y�k
		//�r: 3 4 1 s2 en b�y�k
		break;
	case 3:
		int rastgele, tahmin;
		//rand()%(son de�er-ba�lang�� de�eri+1)+(Son de�er)
		/*
		for (int i = 0; i < 10; i++)
		{
			rastgele = rand() % 25 + 1;
			cout << rastgele << endl;
		}
		
		cout << endl;
		//�r: 20 ile 50 aras�nda rastgele say� �retelim
		for (int i = 0; i < 10; i++)
		{
			rastgele = rand() % 31 + 20;
			cout << rastgele << endl;
		}
		
		
		cout << endl;
		//�r: -10 ile 10 aras�nda rastgele say� �retelim
		for (int i = 0; i < 10; i++)
		{
			rastgele = rand() % 21 - 10;
			cout << rastgele << endl;
		}
		*/
		rastgele = rand() % 25 + 1;
		cout << rastgele << endl;
		for (int i = 1; i <= 3; i++)
		{
			cout << i << ".Tahmininiz:";
			cin >> tahmin;
			if (tahmin == rastgele)
			{
				cout << "Tebrikler. Bildiniz." << endl;
				break;
			}
			else
				cout << "Bilemediniz" << endl;
		}
		break;
	default: //1,2 ve 3 d���nda bir de�er girilirse default �al���r.
		cout << "Hatal� giri�";
		break;
	}
	
	//�� i�e d�ng�ler
	//��teki d�ng� sona ermeden d��taki d�ng� �al��maz.
	
	cout << endl;

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << "i:" << i << " j:" << j << " " << endl;
		}
		cout << endl << endl;
	}

	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << "i:" << i << " j:" << j << " " << endl;
		}
		cout << endl << endl;
	}

	/*
	* * * *
	* * * * 
	* * * *
	*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//Girilen say� kadar y�ld�z ekleyelim
	/*3 girilirse
	* * *
	* * *
	* * *
	*/

	/*5 girilirse
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	*/
	for (int i = 0; i < sayi; i++)
	{
		for (int j = 0; j < sayi; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	/*
	* 
	* * 
	* * *
	*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//Girilen say� kadar bu ��kt�y� ver
	/*4 girilirse:
	*
	* *
	* * *
	* * * *
	*/
	for (int i = 0; i < sayi; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	/*
	1 1 1
	2 2 2
	3 3 3

	S�nav sorusu �rne�i: A�a��daki ��klardan hangisi yukar�daki ��kt�y� verir?
	*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i+1 << " ";
		}
		cout << endl;
	}

	/*
	1 2 3
	1 2 3
	1 2 3
	*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << j + 1 << " ";
		}
		cout << endl;
	}

	/*
	1 1
	2 1 2
	3 1 2 3
	*/
	for (int i = 1; i <= 3; i++)
	{
		cout << i;
		for (int j = 1; j <= i; j++)
		{
			cout << " " << j ;
		}
		cout << endl;
	}

	/*
	5 4 3 2 1
	4 3 2 1
	3 2 1
	2 1
	1
	*/
	for (int i = 5; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
	*/
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}


	/*
	1 2 3 4
	3 5 7
	8 12
	20
	*/
	//Bu soru diziler konusuna geldi�imizde ��z�lecek
	int s1 = 1, s2 = 2, s3 = 3, s4 = 4;
	cout << s1 << " " << s2 << " " << s3 << " " << s4 << endl;
	
	s1 = s1 + s2;
	s2 = s2 + s3;
	s3 = s3 + s4;
	cout << s1 << " " << s2 << " " << s3 << endl;
	
	s1 = s1 + s2;
	s2 = s2 + s3;
	cout << s1 << " " << s2 << endl;
	
	s1 = s1 + s2;
	cout << s1 << endl;
	

	/*
	1.�dev: Girilen �� say�dan hangi say�n�n b�y�k oldu�unu veren program.
	say�larda e�itlik olmas� durumunda da en b�y�k say� olarak bu say�lar� yazd�rs�n
		//�r: 5 5 5 s1, s2 ve s3 e�it
		//�r: 5 5 2 s1, s2 en b�y�k
		//�r: 3 4 1 s2 en b�y�k

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
