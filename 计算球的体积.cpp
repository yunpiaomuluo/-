#include<stdio.h>
#include<math.h>
int main()
{
	double m=3.14159;
	double r,v;
	double a[10000];
	int count=0;
	printf("ÇëÊäÈëÇòµÄ°ë¾¶r£º");
	while(count<1000&&scanf("%lf",&r)==1){
		v=m*r*r*r*(4.0/3.0);
		a[count]=v;
		count++;
	}
	for(int i=0;i<count;i++){
		printf("%.3lf\n",a[i]);
	}
 return 0;
 } 
