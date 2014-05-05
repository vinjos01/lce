#include <stdio.h>

int main()
{
    /*
	ver-1
    int c=0;
	while ((getchar())!=EOF)
		++c;
	printf("cnt=%d\n",c);
	ver-2
    int cnt;
    for (cnt=0;getchar()!=EOF;cnt++)
    ;
    printf("number of keyhits=%d\n",cnt);
    */

    //conting number of lines
    /*
    int c;
    int nl_cnt=0;
    int tb_cnt=0;
    int sp_cnt=0;
    while((c=getchar())!=EOF){
        if (c=='\n')
            ++nl_cnt;
        if (c=='\t')
            ++tb_cnt;
        if (c==' ')
            ++sp_cnt;
    }
    printf("number of lines= %d\n",nl_cnt);
    printf("number of tabs= %d\n",tb_cnt);
    printf("number of spaces= %d\n",sp_cnt);
    int c;
    while((c=getchar())!=EOF){
        putchar(c);
    }
    */
    #define OUT 1
    #define IN  0
    
    int val,nc,nl,nw,c;
    
    nc=nl=nw=0;
    val=OUT;
    while((c=getchar())!=EOF)
    {
        //increment number of charecters unconditionally
        ++nc;

        //increment number of lines if \n 
             if (c=='\n')                 ++nl;
             if (c==' '||c=='\n'||c=='\t')val=OUT;
        else if (val==OUT)          {val=IN ;++nw;}
    }
    printf("nc=%d,nw=%d,nl=%d\n",nc,nw,nl);

}//end of main
