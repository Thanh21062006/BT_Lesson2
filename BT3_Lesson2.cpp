#include<stdio.h>

int main(){
	int a, b, tong, hieu, tich, thuong;
	printf("Moi ban nhap vao so a: ");
	scanf("%d",&a);
	printf("moi ban nhap vao so b: ");
	scanf("%d",&b);
	
	tong = a + b;
	printf("Tong cua %d va %d la: %d\n",a,b,tong);
	hieu = a - b;
	printf("Hieu cua %d va %d la: %d\n",a,b,hieu);
	tich = a * b;
	printf("Tich cua %d va %d la: %d\n",a,b,tich);
	thuong = a / b;
	printf("Thuong cua %d va %d la: %d\n",a,b,thuong);
	
	return 0;
}
