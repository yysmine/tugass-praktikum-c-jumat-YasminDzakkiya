#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, luas, keliling;
	
	printf("masukkan panjang alas segitinga (cm): ");
	scanf("%f", &alas);
	
	printf("masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	float sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	keliling = alas + tinggi + sisi_miring;
	
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}
