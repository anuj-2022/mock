#include <stdio.h>
#include <stdlib.h>
enum check{No,Yes};
enum check str_search(char *str1,int *size,char c);
    
void main()
{
   char ch;
   int CHECK=0;
   int n,size=0;
   char* ptr;
   
   printf("Enter the number of characters:");
   scanf("%d",&n);
   
   ptr=(char*)malloc(sizeof(char)*n);
   printf("Enter the string:");
   scanf("%s",ptr);
   size=n;
//   printf("size %d\n",n);

   printf("Enter the character to search:");
   scanf("%s",&ch);

//   printf("size %d\n",size);

  CHECK=str_search(ptr,&size,ch);

   if(CHECK==Yes)
       printf("data is Found\n");
  
   else if(CHECK==No)
       printf("data is not found\n");
   

}

enum check str_search(char *str1,int *size,char c)
{
    enum check s;
    int i,j=0;
//	printf("\n size %d\n",size);
  for(i=0;i<(*size);i++)
    {
//        printf("%c",str1[i]);
        if(str1[i]==c)
        {
      
            s=Yes;
            break;
        }
    }
 
        if(s==Yes)
            return Yes;
        else
            return No;
    
}

