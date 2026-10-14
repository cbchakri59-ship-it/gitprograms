#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,D,r1,r2,realpart,imagpart;
	
	printf("Enter coefficients if a,b,c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	D=(b*b)-(4*a*c);
	
	if(D>0){
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);
		printf("Roots are real and distinct\n");
		printf("Root1=%.4lf\n",r1);
		printf("Root2=%.4lf\n",r2);
	}
	
	else if (D==0){
		r1=-b/(2*a);
		printf("Roots are real and equal\n");
		printf("Root1=Root2=%.4lf\n",r1);
		
	}
	
	else{
		realpart=-b/(2*a);
		imagpart=sqrt(-D)/(2*a);
		printf("Roots are complex.\n");
		printf("Root1=%.4lf + %.4lfi\n",realpart,imagpart);
		printf("Root2=%.4lf - %.4lfi\n",realpart,imagpart);
	}
	
	return 0;
}
