#include<stdio.h>
#include<math.h>

int main() {
	
	
	// Ekrana yazd�rma fonksiyonu printf kullan�m� 
	
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
	
	
	
	
	// Veri tipleri, De�i�kenler ve Format Belirleyiciler
	
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
	
	
	
	
	// Aritmetik ��lemler
	
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
	
	
	
	
	// Aritmetik �fadeler
	
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
	
	
	
	
	// Atamalar, Art�rma ve Azaltma ��lemler
	
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
	
	
	
	
	// T�r D�n���mleri
	
	/*
	int x = 3;
	float y = 0.1;
	printf("%f\n", x/y);
	
	printf("%f\n", 2+4.2 +4%2);
	printf("%f\n", 12.5/2);
	printf("%f\n", (int)3.2);
	printf("%f\n", (float)3);
	*/
	
	
	
	
	// Standart Giri�-��k�� Fonksiyonlar� 			==> Kullan�c�dan input alma fonksiyonu => scanf
	
	/*
	#define PI 3.14
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0) + PI * (yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %2.f'dir.'", hacim);
	*/
	
	
	
	
	// �rnek Programlar
	
	
	// Girilen 5 say�n�n ortalamas�n� hesaplayan program
	/*
	int a, b, c, d, e;
	
	float aritmetik;
	
	printf("5 tane sayi giriniz: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	aritmetik = (a+b+c+d+e) / 5.0;
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f", aritmetik);
	*/
	
	
	// ax^2 + bx +c �eklindeki denklemin k�klerini bulan proogram
	
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
	
	
	
	
	// Ko�ullu �fadeler
	
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
	
	
	
	
	// Mant�ksal Operat�rler
	
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
	
	
	// Al��t�rmalar
	
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
	float dersOrt;
	
	printf("1. vize notunuzu giriniz: ");
	scanf("%d", &vize1);
	printf("2. vize notunuzu giriniz: ");
	scanf("%d", &vize2);
	printf("Final notunuzu giriniz: ");
	scanf("%d", &final);
	
	dersOrt = (vize1 + vize2 + final) / 3.0;
	
	
	if (dersOrt > 60) {
		printf("Dersten gectiniz :)");
	}
	else {
		printf("Dersten kaldiniz...");
	}
	*/
	
	
	
	
	
	
	
	
	return 0;
}
