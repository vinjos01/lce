#include <stdio.h>
int main()
{
	#define LOWER 0		//symbolic constants names
	#define UPPER 300
	#define STEP  20
	
	int fahre;

	for(fahre=UPPER;fahre>=LOWER;fahre-=STEP)
		printf("%3d %6.1f\n",fahre,((5.0/9.0)*(fahre-32)));
}
