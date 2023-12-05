#include <stdio.h>
int main()
{
    int a[20],i,pos,len;
    char c;
    printf("Enter the number of elements:");
    scanf("%d",&len);
    printf("\nEnter the array :");
    for(i=5;i<len+5;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the number of positions to rotate the array");
    scanf("%d",&pos);
pos+=1;
    
    
    
        for(i=5-pos;i<5;i++){
        a[i]=a[pos+5];
        pos++;}
    
    for(i=5-pos;i<5+pos;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}