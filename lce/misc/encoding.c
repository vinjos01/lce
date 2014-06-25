#include <stdio.h>

int is_valid_imm(unsigned ,unsigned int *);
int main()
{
		int retval;
		unsigned long int *e;
		retval=is_valid_imm(0x1F0,&e);

}


int is_valid_imm(unsigned value, unsigned int * encoding) 
{
        unsigned i,msb,flag = 0;

	for(i=0;i<32;i+=2)
	{
        	if (i) 
		{
        		msb = value & 0xC0000000;
        		value = (value << 2) | (msb >> 30);
        	}
        
		if ( (value <= 0xFF) )
		{
        		encoding = (value | (i/2) << 8);
        		flag = 1;
        		break;
        	}
	printf("v=%x,e=%x\n",value,encoding);
        
	}

        return flag;	

}
