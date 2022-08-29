#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
/*
	//printf("Hello World !!!\n"); //ekrana yazıyı yazırır.
	int x = 5;
	char y = 'A';
	double z = 3.77;
	float z1 = 2.12;

//Format belirleyici.
	printf("%d \n", x);
	printf("%f \n", z);
	printf("%f \n", z1);
	printf("%c \n", y);

//sizeof operatörü
	printf("%d byte \n", sizeof(int)); // 1 int değer kaç byte depolar.
	printf("%d byte \n", sizeof(double)); // 1 double değer kaç byte depolar.
	printf("%d byte \n", sizeof(float)); // 1 float değer kaç byte depolar.
	printf("%d byte \n", sizeof(char)); // 1 char değer kaç byte depolar.

//Matematiksel İşlemler
	printf("%d \n", 10 + 8);
	printf("%d \n", 13 - 5);
	printf("%d \n", 10 / 5);
	printf("%d \n", 3 * 5);
	printf("%d \n", 10 % 3);

//Tür Dönüşüm
	printf("%d \n", 10 + (int)4.2);	// 4.2 sayısını doubledan int'e çevirdi.

//Artırma ve Azaltma İşlemleri
	int a = 5;

	a++;	//1 arttırır.
	a--;	// 1 azaltır.

	a--;	//postfix
	--a;	//prefix

	a = a + 5;
	a = a -2;

	a += 5;
	a -= 2;

	printf("%d \n", a);

//Girdi Alma
	int c;

	printf("Enter a number: " );

	scanf("%d", &c);

	printf("Your number: %d \n", c);

//Koşul Değeri (1, 0)

	printf("%d\n", 3 < 5 ); //Bilgisayara 3 5'ten küçük mü diye sorduk.
	printf("%d\n", 3 > 6); //Doğru ise 1, yanlış ise 0 çıktısı alırız.

//Mantıksal Bağlaçlar

//	&& = ve
//	|| = ya da
//	! = not


//Koşul Durumları
//if, elseif, else
	int age;
	printf("How old are you? : ");
	scanf("%d", &age);

	if (age < 18) {
		printf("Little then 18. \n");
	}
	else if (age == 18) {
		printf("18\n");
	}
	else{
		printf("Bigger then 18. \n");
	}

//switch, case
	int group;

	printf("Which group? (1-3): ");
	scanf("%d", &group);

	switch (group) {
		case 1:
			printf("Group 1\n");
			break;

		case 2:
			printf("Group 2\n");
			break;

		case 3:
		printf("Group 3\n");
		break;

		default:
		printf("Group not exist.\n");
	}


//Loop//

//while

	int dng = 0;
	printf("Loop starting....................\n");
	while (dng < 10) {

			if (dng == 3) { 	// Döngü 3'e geldiği zaman continue operatörüsayesinde 3' atlar.
				dng++;
				continue;
			}
		printf("%d \n", dng);
		dng++;
	}
	printf("Loop ending.....................\n");


//do-while
	int abc = 9;
	do {	//Önce döngüden yapmasını istediğimiz şeyi "do" ile yazıyoruz. Sonra "while" ile sınırını(koşulunu) giriyoruz.
		printf("%d \n", abc);
		abc++;

	}
	while(abc < 19);

//for
	int xyz;
	for (xyz = 0; xyz < 10; xyz++) {
		printf("%d \n", xyz);
	}

//Array(Diziler)
	int dizi[5];
	int ds;
	for (ds = 1; ds < 6; ds++) {
		printf("%d. Element: ", ds);
		scanf("%d", &dizi[ds]);
	}
	int ac = 1;
	int dd = 1;

	printf("Dizi: ");
	while (ac < 6) {
		printf("%d", dizi[ac]);
		ac++;
		while (dd < 5) {
				printf(",");
				break;
		}
		dd++;
	}
	printf("\n");


//CharArray(Karakter Dizileri)
	char name[] = "Faruk";

	printf("%c \n", name[0], name[5]);
	printf("%s \n", name);

*/

//Function
/*
	void test(int a){
	a++;
	printf("%d \n", a);

}

	int ta;
	scanf("%d", &ta);
	test(ta);

*/
//Factorial
/*
	int faktoriyel(int sayi){
		int fact = 1;

		for (;sayi > 0; sayi--) {

			fact *= sayi;

		}
		return fact;
	}

	int n;

	printf("Faktoryeli'ni almak istedigiz sayiyi giriniz: ");

	scanf("%d", &n);

	printf("Faktoryel: %d", faktoriyel(n));
*/
//Alphabet
/*
char firstchar='A';
while (firstchar<='Z') {
	printf("%c - %d\n", firstchar, firstchar);
	firstchar++;
}
*/
//Getch Function
/*
printf("Bir karakter Girin: ");
char karakter=getch();
printf("Girdigin Karakter: \n", karakter);
*/

//ASCII Generator
/*
char h;
printf("\nBir Karakter Giriniz: ");
while((h=getch())!=0){
	printf("%d",h );
	printf("\nBir Karakter Giriniz:");
}
	printf("See U");
*/
//Rand Fonksiyonu
/*
srand(time(NULL));
int random = rand()%20;
printf("%d", random );
*/
//Variable Adress
/*
int var = 10;
printf("Degiskenin adresi: %d", &var );
*/
//













	return 0;
}
