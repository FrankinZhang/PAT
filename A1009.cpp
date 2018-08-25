#include<cstdio>
int main(){
	double a[1020] = {0.0},b[2020] = {0.0},t;
	int n1,n2,m,n,i,count,j;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		scanf("%d%lf",&m,&t);
		a[m] = t;
	} 
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		scanf("%d%lf",&m,&t);
		for(j=0;j<1001;j++){
			if(a[j]!=0.0){
				b[m+j] += a[j]*t;
			}
		}
	}
	count = 0;
	for(i=0;i<2001;i++){
		if(b[i] != 0.0){
			count++;
		}
	}
	printf("%d",count);
	for(i=2000;i>=0;i--){
		if(b[i]!= 0.0){
			printf(" %d %.1lf",i,b[i]);
		}
	}
	return 0;
}
