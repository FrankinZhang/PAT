#include <cstdio>
int main(){
    double p[1010] = {};
    int k,n,count=0;
    double a;
    scanf("%d",&k); 
    for(int i=0;i<k;i++){
    	scanf("%d%lf",&n,&a);
    	p[n]+=a;
	}
	scanf("%d",&k);
    for(int i=0;i<k;i++){
    	scanf("%d%lf",&n,&a);
    	p[n]+=a;
	}
	for(int i=0;i<1010;i++){
		if(p[i]!=0)
		count++;
	}
	printf("%d",count);//注意输出格式 
	for(int i=1009;i>=0;i--){
		if(p[i] != 0)
		printf(" %d %.1f",i,p[i]);
	}
	return 0;
}
