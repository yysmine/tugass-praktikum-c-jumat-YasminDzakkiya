#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi;
	
	printf("masukkan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	
	printf("masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	float sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	printf("sisi miring segitiga adalah %2.f cm\n", sisi_miring);
	
	return 0;
}
