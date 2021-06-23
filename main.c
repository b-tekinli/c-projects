<<<<<<< HEAD
#include<stdio.h>
#include<math.h>

int main() {
	
	
	// Ekrana yazdï¿½rma fonksiyonu printf kullanï¿½mï¿½ 
	
	/*
	printf("Merhaba \t Yazilimci");
	printf("C Programlamaya Hos Geldiniz\n");
	
	int x = 5;
	printf("%d\n", x);
	
	float a = 3.0;
	double t = 2.4;
	printf("%f & %f\n", a, t);
	
	char b = 'y';
	printf("%c\n", b);
	
	printf("C Programlama", "%s");
	*/
	
	
	
	
	// Veri tipleri, Deï¿½iï¿½kenler ve Format Belirleyiciler
	
	/*
	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;
	printf("%d %c %d %f %f %s\n", a1, b1, b2, c1, d1, "Yazilim");
	
	
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));
	*/
	
	
	
	
	// Aritmetik ï¿½ï¿½lemler
	
	/*
	int x1 = 1;
	int x2 = -1;
	
	printf("%.1f\n", 12.1+9.2);
	printf("%d\n", 12-9);
	printf("%.2f\n", 12*9);
	printf("%d\n", 12/9);
	printf("%d\n", 12%9);
	
	
	printf("%d\n", -x1);
	printf("%d\n", -x2);
	*/
	
	
	
	
	// Aritmetik ï¿½fadeler
	
	/*
	printf("%d\n", 2-3+4);
	printf("%d\n", 2*3-4);
	printf("%d\n", 2-3/4);
	printf("%d\n", 2+3%4);
	printf("%d\n", 2/3*4);
	printf("%d\n", 2%3/4);
	printf("%d\n", -2+3);
	printf("%d\n", 2* -3);
	printf("%d\n", -2*-3);
	printf("%d\n", (2-3)%4);
	*/
	
	
	
	
	// Atamalar, Artï¿½rma ve Azaltma ï¿½ï¿½lemler
	
	/*
	int x = 5;
	int y = 7;
	int a = 2;
	
	x = y;
	y = x + a + 1;
	printf("x:%d\ny:%d\na:%d\n",x, y, a);
	
	
	x = 4;
	y = 5;
	a = 6;
	printf("x:%d y:%d a:%d\n", --x, ++y, a++);
	printf("x:%d y:%d a:%d\n", x, y, a);
	printf("x:%d y:%d a:%d\n", x--, --y, a--);
	*/
	
	/*
	x = 2;
	a = 6;
	x = x + (a + 1);
	// x += a + 1;
	
	printf("%d\n", x);
	
	x = y = a + 4;
	printf("x:%d y:%d a:%d\n", x, y, a);
	*/
	
	
	
	
	// Tï¿½r Dï¿½nï¿½ï¿½ï¿½mleri
	
	/*
	int x = 3;
	float y = 0.1;
	printf("%f\n", x/y);
	
	printf("%f\n", 2+4.2 +4%2);
	printf("%f\n", 12.5/2);
	printf("%f\n", (int)3.2);
	printf("%f\n", (float)3);
	*/
	
	
	
	
	// Standart Giriï¿½-ï¿½ï¿½kï¿½ï¿½ Fonksiyonlarï¿½ 			==> Kullanï¿½cï¿½dan input alma fonksiyonu => scanf
	
	/*
	#define PI 3.14
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0) + PI * (yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %2.f'dir.'", hacim);
	*/
	
	
	
	
	// ï¿½rnek Programlar
	
	
	// Girilen 5 sayï¿½nï¿½n ortalamasï¿½nï¿½ hesaplayan program
	/*
	int a, b, c, d, e;
	
	float aritmetik;
	
	printf("5 tane sayi giriniz: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	aritmetik = (a+b+c+d+e) / 5.0;
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f", aritmetik);
	*/
	
	
	// ax^2 + bx +c seklindeki denklemin koklerini bulan proogram
	
	/*
	int a, b, c;
	float x1, x2;
	float delta;
	
	printf("Denklemin a'sini giriniz: ");
	scanf("%d", &a);
	
	printf("Denklemin b'sini giriniz: ");
	scanf("%d", &b);
	
	printf("Denklemin c'sini giriniz: ");
	scanf("%d", &c);
	
	delta = b*b -4*a*c;
	
	x1 = (-b + (sqrt(delta)) ) / 2*a;
	x2 = (-b - (sqrt(delta)) ) / 2*a;
	
	printf("Denklemin 1. koku: %.2f, 2. koku: %.2f'dir.", x1, x2);
	*/
	
	
	
	
	// Koï¿½ullu ï¿½fadeler
	
	/*
	int note;
	printf("Notunuzu girin: ");
	scanf("%d", &note);
	
	if(note > 60){
		printf("Dersten gectiniz :)");
	}
	else {
		printf("Dersten kaldiniz...");
	}
	*/
	
	
	
	
	// Mantï¿½ksal Operatï¿½rler
	
	/*
	int a = 40;
	int b = 41;
	
	a < b;
	a > b;
	a >= b;
	a <= b;
	a != b;
	a == b;
	*/
	
	
	// Alï¿½ï¿½tï¿½rmalar
	
	/*
	int a = 40;
	int b = 50;
	int c = 60;
	int d = 70;
	
	a < c && c <= d && (a > b || b < d)
	
	!(a >= d)
	*/
	
	
	/*
	int a, b = 20, c = 30;
	a = b < c ? : c;
	printf("%d", a);
	*/
	
	
	
	// Vize-Final hesaplayan program
	
	/*
	int vize1, vize2, final;
	float dersOrt, ortalama;
	
	printf("1. vize notunuzu giriniz: ");
	scanf("%d", &vize1);
	printf("2. vize notunuzu giriniz: ");
	scanf("%d", &vize2);
	printf("Final notunuzu giriniz: ");
	scanf("%d", &final);
	printf("Universite ortalamasi: ");
	scanf("%f", &ortalama);
	
	dersOrt = (vize1 + vize2 + final) / 3.0;
	
	if (dersOrt > 60) {
		printf("Dersten gectiniz :)");
	}
	else if (dersOrt > 50){
		printf("Dersten bute kaldiniz...");
		
		if (prtalama < 2.5) {
			printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk");
		}
	}
	else {
		printf("Kaldiniz.");
	*/
	
	
	
	// Harf Notu Hesaplama
	
	/*
	int vize1, vize2, final;
	float dersOrt, uniOrt;
	
	printf("1. vize: ");
	scanf("%d", &vize1);
	
	printf("2. vize: ");
	scanf("%d", &vize2);
	
	printf("final: ");
	scanf("%d", &final);

	printf("Universite ortalamanizi giriniz: ");
	scanf("%f", &uniOrt);
	
	dersOrt = (vize1 * 3 / 10.0 + vize2 * 3 / 10.0 + final * 4 / 10.0);
	
	if(dersOrt > 90) {
		printf("Harf Notunuz - AA ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 85 && dersOrt < 90) {
		printf("Harf Notunuz - BA ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 80 && dersOrt < 85) {
		printf("Harf Notunuz - BB ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 75 && dersOrt < 80) {
		printf("Harf Notunuz - CB ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 70 && dersOrt < 75) {
		printf("Harf Notunuz - CC ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt >= 65 && dersOrt < 70) {
		printf("Harf Notunuz - DC ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt >= 60 && dersOrt < 65) {
		printf("Harf Notunuz - DD ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else {
		printf("Harf Notunuz - FF ve Ders Ortalamaniz: %f", dersOrt);
		printf("Dersten kaldiniz.");
	}
	*/
	
	
	
	// ATM Ornegi
	/*
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n1.Para Cekme\n2.Para Yatirma\n3.Havale Yapma\n4.Bakiye Sorgulama\n5.Kart Iade\n\n\n");
	
	printf("Islem seciniz: ");
	scanf("%d",  &islem);
	
	switch(islem) {
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Cekilecek Tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye) {
				printf("Bakiye yetersiz.\n");
			}
			bakiye -=tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yatiralacak Tutar: ");
			scanf("%d", &tutar);
			
			bakiye +=tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale Yapilacak Tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye) {
				printf("Bakiye yetersiz.\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 4:
			printf("Bakiyeniz: %d\n", bakiye);
			break;
		case 5:
			printf("Kart Iade Edildi.\n");
			break;
		default:
			printf("Bilinmeyen Islem.");
			break;
	}
	*/
	
	
	
	// Donguler
	//While Dongusu
	
	/*
	int i;
	
	i = 0;
	
	while(i < 10) {
		
		printf("%d) Merhaba Yazilim Gelistiricisi\n", i);
		
		i++;
	}
	
	printf("%d) Dongu bitti.", i);
	*/
	
	
	// Faktoriyel
	/*
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz: ");
	scanf("%d", &n);
	
	while (n != 0) {
		printf("%d\n", n);
		fact = fact *n;
		
		n--;
	}
	printf("%d", fact);
	*/
	
	
	
	// Do-While Dongusu
	
	/*
	int n = 10;
	
	do {
		printf("%d\n", n);
		
		n--;
	}
	while(n > 0);
	*/
	
	
	
	/* 1234 rakamlarï¿½ toplamï¿½ kaï¿½ haneli olduï¿½unu bulma */
	
	/*
	int n, hane = 0, toplam = 0;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &n);
	
	do {
		toplam += (n % 10);
		
		hane ++;
		
		n = n / 10;
	}
	while(n > 0);
	
	printf("Rakamlarin toplami %d haneli", toplam, hane);
	*/
	
	
	
	// For Dongusu
	
	/*
	int i, j;
	
	for (i=0, j=1; i<10 && j < 5; i++, j++){
		printf("%d\n", i);
	}
	*/
	
	/*
	for (j=0; j<3; j++) {
		printf("i:%d j %d\n", i, j);
	}
	*/
	
	
	
	// Fibonacci Serisi
	
	// 1, 1, 2, 3, 5, 8, 13, 21...
	
	/*
	int ilkSayi = 1;
	int ikinciSayi = 1;
	int i;
	
	printf("%d\n%d\n", ilkSayi, ikinciSayi);
	
	for (i=0; i<12; i++){
		
		int temp = ikinciSayi;
		
		ikinciSayi += ilkSayi;
		
		ilkSayi = temp;
		
		printf("%d\n", ikinciSayi);
	}
	*/
	
	
	
	// Break Deyimi
	
	/*
	int toplam = 0;
	int sayi;
	int i;
	
	for (i=0; true; i++){
		printf("Sayiyi giriniz: (Cikmak icin -1'e basiniz.)");
		scanf("%d", &sayi);
		
		if (sayi == -1){
			break;
		}
		toplam += sayi;
	}
	printf("%d", toplam);
	*/
	
	
	
	// Continue Deyimi
	
	/*
	int toplam = 0;
	
	int i = 0;
	
	while (i <= 10) {
		if (i % 2 == 1) {
			i++;
			continue;
		}
		toplam += i;
		i++;
	}
	printf("%d", toplam);
	*/
	
	
	
	
	
	// Diziler
	
	/* int sayilar[] = {1, 2, 3, 4, 5};
	// printf("%d", sayilar[2]);

	int i = 0;
	for (; i < 5; i++)
	{
		printf("%d\n", sayilar[i]);
	}
	*/
	
	/*
	float toplam = 0.0;
	float sayilar[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%f", &sayilar[i]);
	}
	
	
	for (i = 0; i < 5; i++)
	{
		toplam += sayilar[i];
	}
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f'dir.", toplam / 5);
	*/
	
	


	// KARAKTER DIZILERI

	/*
	char isim[] = "Murat";

	printf("%c", isim[1]);
	*/


	/*
	char isim[20];

	printf("isminizi girin: ");
	scanf("%s",  isim);
	
	printf("isminiz: %s", isim);
	*/
	
	


	// COK BOYUTLU DIZILER

	/*
		1 2 3
		4 5 6
		7 8 9
	*/

	// int matris[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// printf("%d\n", matris[2][2]);
	
	/*
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &matris[i][j]);
		}
	}
	*/

	/*
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; i++)
		{
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	*/



	// ORNEK PROGRAM

	/*
	3 5 1 3 2 4 4 4 5 5 9 8 9 7 7
	3*5lik* matris (3 satÄ±rÄ± 5 sÃ¼tunu)

	Matris:
	3 5 1 3 2
	4 4 4 5 5
	9 8 9 7 7

	Sonuc:
	16 17 14 15 14
	*/


	/*
	int matris[3][5];
	int i, j, sum = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &matris[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 3; i++)
		{
			sum += matris[i][j];
		}
		printf("%d ", sum);

		sum = 0;
	}
	*/


	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	*/


	
	


	
	// Fonksiyonlar

	/*
	void hatayiBas(int hata, int hata2){									// void, hicbir sey dondurmeyen fonksiyondur.
		printf("Hata kodu %d", hata)
	}
	
	int sayi;
	printf("Lutfen negatif olmayan bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi < 0){
		hatayiBas(404, 410);
	}
	else{
		printf("Tebrikler!");
	}
	*/
	
	
	
	/*
	int topla(int sayi1, int sayi2){
		return sayi1 + sayi2;
	}
	
	
	int sayi1, sayi2;
	
	scanf("%d %d", &sayi1, &sayi2);
	printf("%d", topla(sayi1, sayi2));
	*/
	
	
	
	
	// Faktoriyel Bulma
	
	/*
	int faktoriyel(int sayi){
		int fact = 1;
		
		for(; sayi>0; sayi--){
			fact *= sayi;
		}
		
		return fact;
	}
	
	
	
	int n;
	
	printf("Faktoriyelini istediginiz sayiyi girin: ");
	scanf("%d", &n);
	
	printf("Faktoriyel: %d", faktoriyel(n));
	*/
	
	
	
	// Asal sayi mi degil mi?
	
	/*
	int asalMi(int sayi){
		int i;
		
		for(i=2; i<sayi; i++){
			if(sayi % i == 0){
				return 0;
			}
		}
		
		return 1;
	}
	
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &n);
	
	if(asalMi(n ) == 0){
		printf("Bu sayi asal degildir.");
	}
	else{
		printf("Bu sayi asal sayidir.");
	}
	*/
	
	
	/*
	int carp(int matris[], int size){
		int carpim = 1;
		
		int i = 0;
		
		for(; i<size; i++){
			carpim *= matris[i];
		}
	}
	
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	printf("%d", carp(sayilar, 5));
	*/
	
	
	
	/*
	void bastir(int matrisFunc[][], int size){
		int i, j;
		
		for(i=0; i<size; i++){
			printf("%d", matrisFunc[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	int matris[3][4];
	int i, j;
	
	printf("Matrisi doldurunuz: ");
	
	for(i=0; i<3; i++){
		for(j=0, j<4; j++){
			scanf("%d", &matrisFunc[i][j]);
		}
	}
	
	bastir(matrisFunc, 3);
	*/
	
	
	
	
	/*
	int uzunlukDondur(char name[]){
		
		int uzunluk = 0, i;
		
		for(i=0; name[i] != '\0'; i++){
			uzunluk++;
		}
		
		return uzunluk;
	}
	
	
	char isim[] = "Aleyna";
	
	printf("%d", uzunlukDondur(isim));
	*/
	
	
	
	
	/*
	void tersCevir(char dizi[]){
		int i, uzunluk, gecici;
		
		uzunluk = strlen(dizi);
		
		for(i=0; i<uzunluk/2; i++){
			gecici = dizi[i];
			dizi[i] = dizi[uzunluk-1-i];
			
			dizi[uzunluk-1-i] = gecici;
		}
	}
	
	
	
	char text[200];
	
	scanf("%s", text);
	
	tersCevir(text);
	
	printf("%s", text);
	*/
	
	
	
	
	
	
	
	
	
	/* POINTERLAR (GOSTERGELER) */
	
	
	// Pointer: Bellekte saklanan deï¿½erin adresini gï¿½sterir.
	
	/*
	int i = 5;
	
	int *p = &i;		// &: deï¿½iï¿½kenin adres bilgisini veriyor, *: adresteki deï¿½eri veriyor.
	
	printf("%u\n", p);
	
	printf("%d", *p);
	*/
	
	
	/*
	int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.412, *cp;
	char d = 'a', *dp;
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &sayilar[1];
	
	printf("%u adresindeki int'in degeri %d'dir.'\n", ap, *ap);
	printf("%u adresindeki float'in degeri %f'dir.'\n", bp, *bp);
	printf("%u adresindeki double'in degeri %lf'dir.'\n", cp, *cp);
	printf("%u adresindeki char'in degeri %c'dir.'\n", dp, *dp);
	printf("%u adresindeki sayilarin degeri %d'dir.'\n", arrayp, *arrayp);
	*/
	
	
	
	/*
	int i, j = 1;
	int *jp1, *jp2 = &j;
	
	jp1 = jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp2 + i;
	
	printf("i = %d, j = %d, *jp1 = %d, *jp2 = %d\n", i, j, *jp1, *jp2);
	*/
	
	
	
	
	// CALL BY VALUE
	
	/*
	void  degerDegistir(int a, int b){
		
		int gecici = a;
		a = b;
		b = gecici;
		
		printf("a = %d,  b = %d\n", a, b);
		
		
	}
	
	
	
	
	int x=5, y=10;
	
	degerDegistir(x, y);
	
	printf("x = %d, y = %d", x, y);
	*/
	
	
	
	
	// CALL BY REFERENCE
	
	
	/*
	void degerDegistir(int *a, int *b) {
		
		int gecici = *a;
		
		*a = *b;
		
		*b = gecici;
	}
	
	
	
	int x = 5, y = 10;
	
	degerDegistir(&x, &y);
	
	printf("x=%d, y=%d", x, y);
	*/
	
	
	
	
	
	
	
	
	return 0;
}
=======
#include<stdio.h>
#include<math.h>

int main() {
	
	
	// Ekrana yazdýrma fonksiyonu printf kullanýmý 
	
	/*
	printf("Merhaba \t Yazilimci");
	printf("C Programlamaya Hos Geldiniz\n");
	
	int x = 5;
	printf("%d\n", x);
	
	float a = 3.0;
	double t = 2.4;
	printf("%f & %f\n", a, t);
	
	char b = 'y';
	printf("%c\n", b);
	
	printf("C Programlama", "%s");
	*/
	
	
	
	
	// Veri tipleri, Deðiþkenler ve Format Belirleyiciler
	
	/*
	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;
	printf("%d %c %d %f %f %s\n", a1, b1, b2, c1, d1, "Yazilim");
	
	
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));
	*/
	
	
	
	
	// Aritmetik Ýþlemler
	
	/*
	int x1 = 1;
	int x2 = -1;
	
	printf("%.1f\n", 12.1+9.2);
	printf("%d\n", 12-9);
	printf("%.2f\n", 12*9);
	printf("%d\n", 12/9);
	printf("%d\n", 12%9);
	
	
	printf("%d\n", -x1);
	printf("%d\n", -x2);
	*/
	
	
	
	
	// Aritmetik Ýfadeler
	
	/*
	printf("%d\n", 2-3+4);
	printf("%d\n", 2*3-4);
	printf("%d\n", 2-3/4);
	printf("%d\n", 2+3%4);
	printf("%d\n", 2/3*4);
	printf("%d\n", 2%3/4);
	printf("%d\n", -2+3);
	printf("%d\n", 2* -3);
	printf("%d\n", -2*-3);
	printf("%d\n", (2-3)%4);
	*/
	
	
	
	
	// Atamalar, Artýrma ve Azaltma Ýþlemler
	
	/*
	int x = 5;
	int y = 7;
	int a = 2;
	
	x = y;
	y = x + a + 1;
	printf("x:%d\ny:%d\na:%d\n",x, y, a);
	
	
	x = 4;
	y = 5;
	a = 6;
	printf("x:%d y:%d a:%d\n", --x, ++y, a++);
	printf("x:%d y:%d a:%d\n", x, y, a);
	printf("x:%d y:%d a:%d\n", x--, --y, a--);
	*/
	
	/*
	x = 2;
	a = 6;
	x = x + (a + 1);
	// x += a + 1;
	
	printf("%d\n", x);
	
	x = y = a + 4;
	printf("x:%d y:%d a:%d\n", x, y, a);
	*/
	
	
	
	
	// Tür Dönüþümleri
	
	/*
	int x = 3;
	float y = 0.1;
	printf("%f\n", x/y);
	
	printf("%f\n", 2+4.2 +4%2);
	printf("%f\n", 12.5/2);
	printf("%f\n", (int)3.2);
	printf("%f\n", (float)3);
	*/
	
	
	
	
	// Standart Giriþ-Çýkýþ Fonksiyonlarý 			==> Kullanýcýdan input alma fonksiyonu => scanf
	
	/*
	#define PI 3.14
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0) + PI * (yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %2.f'dir.'", hacim);
	*/
	
	
	
	
	// Örnek Programlar
	
	
	// Girilen 5 sayýnýn ortalamasýný hesaplayan program
	/*
	int a, b, c, d, e;
	
	float aritmetik;
	
	printf("5 tane sayi giriniz: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	aritmetik = (a+b+c+d+e) / 5.0;
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f", aritmetik);
	*/
	
	
	// ax^2 + bx +c þeklindeki denklemin köklerini bulan proogram
	
	/*
	int a, b, c;
	float x1, x2;
	float delta;
	
	printf("Denklemin a'sini giriniz: ");
	scanf("%d", &a);
	
	printf("Denklemin b'sini giriniz: ");
	scanf("%d", &b);
	
	printf("Denklemin c'sini giriniz: ");
	scanf("%d", &c);
	
	delta = b*b -4*a*c;
	
	x1 = (-b + (sqrt(delta)) ) / 2*a;
	x2 = (-b - (sqrt(delta)) ) / 2*a;
	
	printf("Denklemin 1. koku: %.2f, 2. koku: %.2f'dir.", x1, x2);
	*/
	
	
	
	
	// Koþullu Ýfadeler
	
	/*
	int note;
	printf("Notunuzu girin: ");
	scanf("%d", &note);
	
	if(note > 60){
		printf("Dersten gectiniz :)");
	}
	else {
		printf("Dersten kaldiniz...");
	}
	*/
	
	
	
	
	// Mantýksal Operatörler
	
	/*
	int a = 40;
	int b = 41;
	
	a < b;
	a > b;
	a >= b;
	a <= b;
	a != b;
	a == b;
	*/
	
	
	// Alýþtýrmalar
	
	/*
	int a = 40;
	int b = 50;
	int c = 60;
	int d = 70;
	
	a < c && c <= d && (a > b || b < d)
	
	!(a >= d)
	*/
	
	
	/*
	int a, b = 20, c = 30;
	a = b < c ? : c;
	printf("%d", a);
	*/
	
	
	
	// Vize-Final hesaplayan program
	
	/*
	int vize1, vize2, final;
	float dersOrt, ortalama;
	
	printf("1. vize notunuzu giriniz: ");
	scanf("%d", &vize1);
	printf("2. vize notunuzu giriniz: ");
	scanf("%d", &vize2);
	printf("Final notunuzu giriniz: ");
	scanf("%d", &final);
	printf("Universite ortalamasi: ");
	scanf("%f", &ortalama);
	
	dersOrt = (vize1 + vize2 + final) / 3.0;
	
	if (dersOrt > 60) {
		printf("Dersten gectiniz :)");
	}
	else if (dersOrt > 50){
		printf("Dersten bute kaldiniz...");
		
		if (prtalama < 2.5) {
			printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk");
		}
	}
	else {
		printf("Kaldiniz.");
	*/
	
	
	
	// Harf Notu Hesaplama
	
	/*
	int vize1, vize2, final;
	float dersOrt, uniOrt;
	
	printf("1. vize: ");
	scanf("%d", &vize1);
	
	printf("2. vize: ");
	scanf("%d", &vize2);
	
	printf("final: ");
	scanf("%d", &final);

	printf("Universite ortalamanizi giriniz: ");
	scanf("%f", &uniOrt);
	
	dersOrt = (vize1 * 3 / 10.0 + vize2 * 3 / 10.0 + final * 4 / 10.0);
	
	if(dersOrt > 90) {
		printf("Harf Notunuz - AA ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 85 && dersOrt < 90) {
		printf("Harf Notunuz - BA ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 80 && dersOrt < 85) {
		printf("Harf Notunuz - BB ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 75 && dersOrt < 80) {
		printf("Harf Notunuz - CB ve Ders Ortalamaniz: %f", dersOrt);
	}
	else if(dersOrt >= 70 && dersOrt < 75) {
		printf("Harf Notunuz - CC ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt >= 65 && dersOrt < 70) {
		printf("Harf Notunuz - DC ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else if(dersOrt >= 60 && dersOrt < 65) {
		printf("Harf Notunuz - DD ve Ders Ortalamaniz: %f", dersOrt);
		if ( uniOrt < 2.5) {
			printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
		}
	}
	else {
		printf("Harf Notunuz - FF ve Ders Ortalamaniz: %f", dersOrt);
		printf("Dersten kaldiniz.");
	}
	*/
	
	
	
	// ATM Ornegi
	/*
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n1.Para Cekme\n2.Para Yatirma\n3.Havale Yapma\n4.Bakiye Sorgulama\n5.Kart Iade\n\n\n");
	
	printf("Islem seciniz: ");
	scanf("%d",  &islem);
	
	switch(islem) {
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Cekilecek Tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye) {
				printf("Bakiye yetersiz.\n");
			}
			bakiye -=tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yatiralacak Tutar: ");
			scanf("%d", &tutar);
			
			bakiye +=tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale Yapilacak Tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye) {
				printf("Bakiye yetersiz.\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 4:
			printf("Bakiyeniz: %d\n", bakiye);
			break;
		case 5:
			printf("Kart Iade Edildi.\n");
			break;
		default:
			printf("Bilinmeyen Islem.");
			break;
	}
	*/
	
	
	
	// Döngüler
	//While Dongusu
	
	/*
	int i;
	
	i = 0;
	
	while(i < 10) {
		
		printf("%d) Merhaba Yazilim Gelistiricisi\n", i);
		
		i++;
	}
	
	printf("%d) Dongu bitti.", i);
	*/
	
	
	// Faktoriyel
	/*
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz: ");
	scanf("%d", &n);
	
	while (n != 0) {
		printf("%d\n", n);
		fact = fact *n;
		
		n--;
	}
	printf("%d", fact);
	*/
	
	
	
	// Do-While Dongusu
	
	/*
	int n = 10;
	
	do {
		printf("%d\n", n);
		
		n--;
	}
	while(n > 0);
	*/
	
	
	
	/* 1234 rakamlarý toplamý kaç haneli olduðunu bulma */
	
	/*
	int n, hane = 0, toplam = 0;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &n);
	
	do {
		toplam += (n % 10);
		
		hane ++;
		
		n = n / 10;
	}
	while(n > 0);
	
	printf("Rakamlarin toplami %d haneli", toplam, hane);
	*/
	
	
	
	// For Dongusu
	
	/*
	int i, j;
	
	for (i=0, j=1; i<10 && j < 5; i++, j++){
		printf("%d\n", i);
	}
	*/
	
	/*
	for (j=0; j<3; j++) {
		printf("i:%d j %d\n", i, j);
	}
	*/
	
	
	
	// Fibonacci Serisi
	
	// 1, 1, 2, 3, 5, 8, 13, 21...
	
	/*
	int ilkSayi = 1;
	int ikinciSayi = 1;
	int i;
	
	printf("%d\n%d\n", ilkSayi, ikinciSayi);
	
	for (i=0; i<12; i++){
		
		int temp = ikinciSayi;
		
		ikinciSayi += ilkSayi;
		
		ilkSayi = temp;
		
		printf("%d\n", ikinciSayi);
	}
	*/
	
	
	
	// Break Deyimi
	
	/*
	int toplam = 0;
	int sayi;
	int i;
	
	for (i=0; true; i++){
		printf("Sayiyi giriniz: (Cikmak icin -1'e basiniz.)");
		scanf("%d", &sayi);
		
		if (sayi == -1){
			break;
		}
		toplam += sayi;
	}
	printf("%d", toplam);
	*/
	
	
	
	// Continue Deyimi
	
	/*
	int toplam = 0;
	
	int i = 0;
	
	while (i <= 10) {
		if (i % 2 == 1) {
			i++;
			continue;
		}
		toplam += i;
		i++;
	}
	printf("%d", toplam);
	*/
	
	
	
	
	
	// Diziler
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// Fonksiyonlar

	/*
	void hatayiBas(int hata, int hata2){									// void, hiçbir þey döndürmeyen fonksiyondur.
		printf("Hata kodu %d", hata)
	}
	
	int sayi;
	printf("Lutfen negatif olmayan bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi < 0){
		hatayiBas(404, 410);
	}
	else{
		printf("Tebrikler!");
	}
	*/
	
	
	
	/*
	int topla(int sayi1, int sayi2){
		return sayi1 + sayi2;
	}
	
	
	int sayi1, sayi2;
	
	scanf("%d %d", &sayi1, &sayi2);
	printf("%d", topla(sayi1, sayi2));
	*/
	
	
	
	
	// Faktöriyel Bulma
	
	/*
	int faktoriyel(int sayi){
		int fact = 1;
		
		for(; sayi>0; sayi--){
			fact *= sayi;
		}
		
		return fact;
	}
	
	
	
	int n;
	
	printf("Faktoriyelini istediginiz sayiyi girin: ");
	scanf("%d", &n);
	
	printf("Faktoriyel: %d", faktoriyel(n));
	*/
	
	
	
	// Asal sayi mi deðil mi?
	
	/*
	int asalMi(int sayi){
		int i;
		
		for(i=2; i<sayi; i++){
			if(sayi % i == 0){
				return 0;
			}
		}
		
		return 1;
	}
	
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &n);
	
	if(asalMi(n ) == 0){
		printf("Bu sayi asal degildir.");
	}
	else{
		printf("Bu sayi asal sayidir.");
	}
	*/
	
	
	/*
	int carp(int matris[], int size){
		int carpim = 1;
		
		int i = 0;
		
		for(; i<size; i++){
			carpim *= matris[i];
		}
	}
	
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	printf("%d", carp(sayilar, 5));
	*/
	
	
	
	/*
	void bastir(int matrisFunc[][], int size){
		int i, j;
		
		for(i=0; i<size; i++){
			printf("%d", matrisFunc[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	int matris[3][4];
	int i, j;
	
	printf("Matrisi doldurunuz: ");
	
	for(i=0; i<3; i++){
		for(j=0, j<4; j++){
			scanf("%d", &matrisFunc[i][j]);
		}
	}
	
	bastir(matrisFunc, 3);
	*/
	
	
	
	
	/*
	int uzunlukDondur(char name[]){
		
		int uzunluk = 0, i;
		
		for(i=0; name[i] != '\0'; i++){
			uzunluk++;
		}
		
		return uzunluk;
	}
	
	
	char isim[] = "Aleyna";
	
	printf("%d", uzunlukDondur(isim));
	*/
	
	
	
	
	/*
	void tersCevir(char dizi[]){
		int i, uzunluk, gecici;
		
		uzunluk = strlen(dizi);
		
		for(i=0; i<uzunluk/2; i++){
			gecici = dizi[i];
			dizi[i] = dizi[uzunluk-1-i];
			
			dizi[uzunluk-1-i] = gecici;
		}
	}
	
	
	
	char text[200];
	
	scanf("%s", text);
	
	tersCevir(text);
	
	printf("%s", text);
	*/
	
	
	
	
	
	
	
	
	
	/* POINTERLAR (GÖSTERGELER) */
	
	
	// Pointer: Bellekte saklanan deðerin adresini gösterir.
	
	/*
	int i = 5;
	
	int *p = &i;		// &: deðiþkenin adres bilgisini veriyor, *: adresteki deðeri veriyor.
	
	printf("%u\n", p);
	
	printf("%d", *p);
	*/
	
	
	/*
	int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.412, *cp;
	char d = 'a', *dp;
	
	int sayilar[5] = {1, 2, 3, 4, 5};
	
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &sayilar[1];
	
	printf("%u adresindeki int'in degeri %d'dir.'\n", ap, *ap);
	printf("%u adresindeki float'in degeri %f'dir.'\n", bp, *bp);
	printf("%u adresindeki double'in degeri %lf'dir.'\n", cp, *cp);
	printf("%u adresindeki char'in degeri %c'dir.'\n", dp, *dp);
	printf("%u adresindeki sayilarin degeri %d'dir.'\n", arrayp, *arrayp);
	*/
	
	
	
	/*
	int i, j = 1;
	int *jp1, *jp2 = &j;
	
	jp1 = jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp2 + i;
	
	printf("i = %d, j = %d, *jp1 = %d, *jp2 = %d\n", i, j, *jp1, *jp2);
	*/
	
	
	
	
	// CALL BY VALUE
	
	/*
	void  degerDegistir(int a, int b){
		
		int gecici = a;
		a = b;
		b = gecici;
		
		printf("a = %d,  b = %d\n", a, b);
		
		
	}
	
	
	
	
	int x=5, y=10;
	
	degerDegistir(x, y);
	
	printf("x = %d, y = %d", x, y);
	*/
	
	
	
	
	// CALL BY REFERENCE
	
	
	/*
	void degerDegistir(int *a, int *b) {
		
		int gecici = *a;
		
		*a = *b;
		
		*b = gecici;
	}
	
	
	
	int x = 5, y = 10;
	
	degerDegistir(&x, &y);
	
	printf("x=%d, y=%d", x, y);
	*/
	
	
	
	
	
	
	
	
	return 0;
}
>>>>>>> 703df6667e28d8c3ecb6577238df651d220d2646
