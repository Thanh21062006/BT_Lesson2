#include <stdio.h>

int main(){
	float PI = 3.14, R;
	printf("Moi ban nhap vao ban kinh hinh tron: ");
	scanf("%f",&R);
	//Tinh dien tich va chu vi hinh tron 
	printf("Dien tich hinh tron R = %.1f la: %.2f\n",R,PI*(R*R));
	printf("Chu vi hinh tron R = %.1f la: %.2f\n",R,(2*PI)*R);
	
	return 0;
	
}
