#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{  char str[100],str2[100];
    int j=0,i=0;
   gets(str);
   int n = strlen(str);
   //printf("%d",n);
    while(j<n)
    {

//    printf("ok");
    if(str[j]!=' ')
    {    //printf("%c",str[j]);
    str2[i]=str[j];    
    i++;
    }
    j++;
    }
    
//    printf("%s\n",str2);
    
    //int side;
    int n2=strlen(str2);
    //printf("%d\n",n2);
    int row=sqrt(n2);
    int limit=ceil(sqrt(n2));
//printf("%d",side);
    //printf("%d",limit);
    i=0;
    for(i=0;i<limit;i++)
    
    {for(j=0;j<row;j++)
       { if((j*limit)+i<n2-1)
           
           printf("%c",str2[j*limit+i]);
        }
    printf(" ");
    }

        
    }



