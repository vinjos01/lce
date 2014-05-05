#include <stdio.h>
int main()
{
	/*type name and list of variables--declarations before exe stm*/
	int j,i;
	float fahr, celsius;
	int lower, upper, step;
	/*hard coding the lower and upper into the for loop*/
	//for(i=0;i<=300;i+20){ 
	for(i=0;i<=300;){ 
		j=(5*(i-32))/9;
		printf("%d\t%d\n",i,j);
		i=i+20;
	}
	
	/*keeping the flexibility outside the program*/
	lower=0;
	upper=300;
	step=20;	
	
	/*naming the variables sensibily*/
	fahr=lower;
	printf("%s,%s","fahrenheit","celsius\n");
	while(fahr<=upper){
	/*int->performing 5/9=0*/
	//	celsius=(5*(fahr-32))/9;

	celsius=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f %13.1f\n",fahr,celsius);
		fahr=fahr+step;
	}

	for(int fahr=0;fahr<=300;fahr+=20)
		printf("%3d %6.1f\n",fahr,((5.0/9.0)*(fahr-32)));

	printf("\n");
	for(int fahre=300;fahre>=0;fahre-=20)
		printf("%3d %6.1f\n",fahre,((5.0/9.0)*(fahre-32)));

	#define LOWER 0		//symbolic constants names
	#define UPPER 300
	#define STEP  20

	for(int fahre=UPPER;fahre>=LOWER;fahre-=STEP)
		printf("%3d %6.1f\n",fahre,((5.0/9.0)*(fahre-32)));

}
