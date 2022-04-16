#include <stdlib.h>
#include <stdio.h>

typedef struct s_data
{
	char *name;
	int age;
	struct s_data *next;
} t_data;

t_data *node(char *name, int age)
{
	t_data *new;

	new = malloc(sizeof(t_data));
	new->name = name;
	new->age = age;
	new->next = NULL;
	return (new);
}

void connect(t_data *data, t_data *data1)
{
	while (data->next)
		data = data->next;
	data->next = data1;
}

void disconnect(t_data *data)
{
	t_data *temp;

	while (data->next)
	{
		temp = data->next;
		data->next = temp->next;
		free(temp);
	}
}

void show(t_data *data)
{
	while (data)
	{
		printf("Name: %s Age: %d\n", data->name, data->age);
		data = data->next;
	}
}

int main(int argc, char **argv)
{
	int a = *argv[2];
	t_data *data = node(argv[1], a);
	// t_data *data1 = node(argv[3], &argv[4]);

	//	connect(data);
	show(data);
	//	disconnect(data);
	//	show(data);
	return (0);
}

/* SORU: Ürün markası, ürün tipi, ürün adı, ürün fiyatı, ürün garanti süresi,
 ürün taksit seçeneği içeren struct yapısı kullanarak C dilinde kodlayınız.
*/

// pointer olduğunda: ->, olmadığında: .

typedef struct Products
{
	char *urunAdi;
	char *urunTipi;
	int fiyat;
	int taksit;
	int garanti;
} Product;

void yaz(Product *p)
{
	printf("Urun Adi: %s\nUrun Tipi: %s\nUrun Fiyati: %d\nTaksit: %d\n", p->urunAdi, p->urunTipi, p->fiyat, p->taksit);
}

int main()
{
	Product p1, p2, p3, p4;
	p1.urunTipi = "TV";
	p1.urunAdi = "Samsung";
	p1.fiyat = 7000;
	p1.taksit = 12;

	p2.urunTipi = "Telefon";
	p2.urunAdi = "Apple Iphone 8";
	p2.fiyat = 6500;
	p2.taksit = 24;

	p3.urunTipi = "Laptop";
	p3.urunAdi = "Asus Tuf Gaming";
	p3.fiyat = 9000;
	p3.taksit = 6;

	p4.urunTipi = "Klavye";
	p4.urunAdi = "Logitech G-213";
	p4.fiyat = 350;
	p4.taksit = 2;

	yaz(&p1);
	yaz(&p2);
	yaz(&p3);
	yaz(&p4);
}