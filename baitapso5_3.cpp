//.Nhap 2 so a b tim uoc chung lon nhat cua a b
#include<stdio.h>
int main(){
	int a,b,ucln,min;
	printf("nhap so nguyen duong a=");
	scanf("%d",&a);
	printf("Nhap so nguyen duong b =");
	scanf("%d",&b);
	
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	int i;
	for(i=1;i<=min;i++){
		if(a%i==0&&b%i==0){
			ucln=i;
				
		}
	}printf("uoc chung lon nhat la:%d",ucln);
	
    return 0;
}
