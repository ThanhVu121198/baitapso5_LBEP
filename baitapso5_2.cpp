//Nhap 1 so nguyen duong n, tim cac uoc va tinh tong uoc cua n
#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen duong:");
	scanf("%d",&n);
	
	int i;
	int s=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
		 printf("Uoc so la:%d\n ",i); 
		  s=s+i;
		}
     
	}
	printf("\nTong cac uoc so cua la:%d",s);
	return 0;
}
