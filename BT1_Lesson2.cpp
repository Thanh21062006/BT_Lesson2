#include <stdio.h>

int main(){
	//Kieu so nguyen (Integer) dung de luu tru cac so nguyen.
	int a = 3;
	short b = 4;
	long long c = 5;

	//Kieu so thuc (Floating-point) dùng de luu tru cac so thap phan.
	float PI = 3.14;  //Luu duoc 6 chu so o phan thap phan! 
	double e = 2.71828;  //Luu duoc 15 chu so o phan thap phan!
	
	//kieu ki tu (Character) chi luu duoc 1 ki tu duy nhat, co the la chu cai, chu so hoac ki tu dac biet.
	char character = 'A';
	
	printf("So nguyen %d, %hi, %lld\n",a,b,c);
	printf("So thuc %.2f, %lf\n",PI,e);
	printf("Ki tu %c\n",character);
	
	return 0;
	 
}
