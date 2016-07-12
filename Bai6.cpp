#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float a,b,c,delta,x1,x2,x;
	printf("Nhap a: "); scanf("%f",&a);
	printf("Nhap b: "); scanf("%f",&b);
	printf("Nhap c: "); scanf("%f",&c);
	if(a == 0){
		if(b!=0){
			printf("Nghiem bac nhat x = %0.3f",-c/b);
		}else{
			if(c == 0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}
	}else{
		delta = b*b - 4.0*a*c;
		if(delta < 0){
			printf("Phuong trinh vo nghiem");
		}else if(delta == 0){
			printf("Phuong trinh co nghiem kep x = %0.3f",-b/(2*a));
		}else{
			x1 = (-b-sqrt(delta))/(2.0*a);
			x2 = (-b+sqrt(delta))/(2.0*a); 
			printf("Nghiem thu nhat x1 = %0.3f",x1);
			printf("\nNghiem thu nhat x2 = %0.3f",x2);
		}
	}
}
