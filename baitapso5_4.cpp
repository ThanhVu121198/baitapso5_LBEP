#include<stdio.h>
int main(){
	int a,b,min,ucln,bcnn;
	printf("Nhap so a=");
	scanf("%d",&a);
	printf("Nhap so b=");
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
		}
				
    int j;
    		j=(a*b)/ucln;
    		bcnn=j;
		
	printf("\nBoi chung nho nhat la:%d",bcnn);
}
