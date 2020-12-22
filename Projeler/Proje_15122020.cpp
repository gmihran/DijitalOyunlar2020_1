// Proje_15122020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <random>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turkish");
	srand(time(NULL)); //Bu kodun amacý, random her çalýþtýðýnda farklý bir deðer üretmesini saðlamak. Sayýlar ayný deðer de olabilir. Buradaki amaç dizilimin farklý bir dizilim ile karþýmýza gelmesi.
	int sayi;
	cout << "Bir sayý giriniz:";
	cin >> sayi;
	switch (sayi)
		//Doðru olan case direk (diðer case kontrolünden geçmeden) çalýþýr.
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

	//if adýmlarýna tek tek kontrol edilerek bakýlýr.
	if (sayi == 1)
		cout << "1 girildi";
	else if (sayi == 2)
		cout << "2 girildi";
	else
		cout << "1 veya 2 girilmedi";

	cout << endl;
	//Menü:
	//1- 1 ile 50 arasýndaki asal sayýlarý yazdýralým
	//2- Klavyeden girilen üç deðerden en büyük deðeri ekrana yazdýralým
	//3- 1 ile 25 arasýnda üretilen rastgele sayýyý tahmin etme oyunu oynatalým. (Tahmin hakký: 3 hak)
	switch (sayi)
	{
	case 1:
		//asal sayý= Sadece 1'a ve kendisine tam bölünen sayýlardýr. 1 ve kendisi dýþýnda hiçbir böleni olmayan sayýlardýr.
		for (int sayilar = 1; sayilar <= 50; sayilar++)
		{
			bool kontrol = true; //sayýnýn asal olup olmadýðýný tutan kontrol deðiþkenine true deðerine atayarak ilk aþamada sayýnýn asal olduðunu farzedelim
			if (sayilar == 1)
				kontrol = false; //asal deðildir
			else //else yazmasak da koþul saðlanmadýðý için aþaðýdaki for döngüsü çalýþmayacaktýr. 
				for (int bolen = 2; bolen <= sayilar/2; bolen++)
				{
					//Bir sayý yarýsýndan daha büyük olan bir sayýya bölünemez. Bu yüzden for döngüsünü sayýnýn yarýsýna kadar sürdürdük. (sayilar/2)
					if (sayilar % bolen == 0) 
					{
						kontrol = false; //asal deðildir
						break; //Döngü kýrýldý. Bir tam bölme iþlemi gerçekleþirse sayýmýz asal sayý deðildir ispat etmiþ oluruz. Diðer sayýlara bölünüp bölünmediðine bakmamýza gerek yok. Bu yüzden döngüyü kýrdýk. 
						//break adýmýndan sonra gelen döngüye ait hiçbir kod satýrý çalýþmaz.
					}	
				}
			if (kontrol) //kontrol == true
				cout << sayilar << endl;
		}
		break;
	case 2:
		int s1, s2, s3;
		cout << "3 tane sayý giriniz:";
		cin >> s1 >> s2 >> s3;
		if (s1 >= s2 && s1 >= s3)
			cout << s1;
		else if (s2 >= s3)
			cout << s2;
		else
			cout << s3;
		cout << endl;

		if (s1 > s2 && s1 > s3)
			cout << "s1 en büyük";
		else if (s2 > s1 && s2 > s3)
			cout << "s2 en büyük";
		else if (s3 > s1 && s3 > s2)
			cout << "s3 en büyük";
		else
			cout << "Sayýlarda eþitlik var";
		//sayýlarda eþitlik olmasý durumunda da en büyük sayý olarak bu sayýlarý yazdýrsýn
		//Ör: 5 5 5 s1, s2 ve s3 eþit
		//Ör: 5 5 2 s1, s2 en büyük
		//Ör: 3 4 1 s2 en büyük
		break;
	case 3:
		int rastgele, tahmin;
		//rand()%(son deðer-baþlangýç deðeri+1)+(Son deðer)
		/*
		for (int i = 0; i < 10; i++)
		{
			rastgele = rand() % 25 + 1;
			cout << rastgele << endl;
		}
		
		cout << endl;
		//Ör: 20 ile 50 arasýnda rastgele sayý üretelim
		for (int i = 0; i < 10; i++)
		{
			rastgele = rand() % 31 + 20;
			cout << rastgele << endl;
		}
		
		
		cout << endl;
		//Ör: -10 ile 10 arasýnda rastgele sayý üretelim
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
	default: //1,2 ve 3 dýþýnda bir deðer girilirse default çalýþýr.
		cout << "Hatalý giriþ";
		break;
	}
	
	//Ýç içe döngüler
	//Ýçteki döngü sona ermeden dýþtaki döngü çalýþmaz.
	
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

	//Girilen sayý kadar yýldýz ekleyelim
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

	//Girilen sayý kadar bu çýktýyý ver
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

	Sýnav sorusu örneði: Aþaðýdaki þýklardan hangisi yukarýdaki çýktýyý verir?
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
	//Bu soru diziler konusuna geldiðimizde çözülecek
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
	1.ödev: Girilen üç sayýdan hangi sayýnýn büyük olduðunu veren program.
	sayýlarda eþitlik olmasý durumunda da en büyük sayý olarak bu sayýlarý yazdýrsýn
		//Ör: 5 5 5 s1, s2 ve s3 eþit
		//Ör: 5 5 2 s1, s2 en büyük
		//Ör: 3 4 1 s2 en büyük

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
