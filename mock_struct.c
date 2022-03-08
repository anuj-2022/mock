#include<stdio.h>
#include<stdlib.h>
struct data 
{
    int var;
};
void display(struct data *,int);
int main()
{
    void (*f_p)(struct data *,int n);
    int i,n;
    printf("enter size of structure array: ");
    scanf("%d",&n);
    struct data *start;
    start=(struct data *)malloc(n*sizeof(struct data));
    printf("enter a data: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(start+i)->var);
    }
    f_p=&display;
    f_p(start,n);
    free(start);
    return 0;
}

void display(struct data *start1,int n)
{
    int i;
    printf("Data in a structure: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",(start1+i)->var);
    }
}
