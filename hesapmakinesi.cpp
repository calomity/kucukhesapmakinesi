#include <iostream>
#include <windows.h>


void toplama(float x, float y)
{
	float topla = x + y;
	std::cout << "yaptiginiz toplama isleminin sonucu = " << topla << std::endl;
}
void cikarma(float x, float y)
{
	float cikar = x - y;
	std::cout << "yaptiginiz cikarma isleminin sonucu = " << cikar << std::endl;
}
void bolme(float x, float y)
{
	float bol = x / y;
	std::cout << "yaptiginiz bolme isleminin sonucu = " << bol << std::endl;
}
void carpma(float x, float y)
{
	float carp = x * y;
	std::cout << "yaptiginiz carpma isleminin sonucu = " << carp << std::endl;
}

void islemyap()
{
	std::string islem;
	float x, y;
	std::cout << "hesap makinesi, iki adet sayi giriniz\n";
	std::cout << "birinci sayi" << std::endl;
	std::cin >> x;
	std::cout << "ikinci sayi" << std::endl;
	std::cin >> y;
	std::cout << "ne yapmak istiyorsunuz ? (toplama, cikarma, bolme, carpma)" << std::endl;
	std::cin >> islem;
	if (islem == "toplama")
	{
		toplama(x, y);
	}
	else if (islem == "cikarma")
	{
		cikarma(x, y);
	}
	else if (islem == "carpma")
	{
		carpma(x, y);
	}
	else if (islem == "bolme")
	{
		bolme(x, y);
	}
	std::cout << "tekrar denemek istiyor musunuz ? (eger cevabiniz evet ise klavyedeki y tusuna, hayir ise n tusuna basiniz.)" << std::endl;
}

int main()
{
	islemyap();
	while (true)
	{
		Sleep(100);
		if (GetAsyncKeyState('Y'))
		{
			islemyap();
		}
		if (GetAsyncKeyState('N'))
		{
			abort();
		}
	}
}