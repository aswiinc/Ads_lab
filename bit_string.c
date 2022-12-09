#include <stdio.h>
#define SIZE 10

void main()
{
    int array[SIZE], count, i;
    int bit_string[SIZE];
    printf("Enter array count:");
    scanf("%d", &count);
    printf("Enter elements: ");
    for (i = 0; i < count; i++)
        scanf("%d", &array[i]);
    for (i = 0; i < count; i++)
    {
     if(array[i]%2==0)
     {
	bit_string[i]=1;
printf("%d",bit_string[i]);
     }
	else
	{
	bit_string[i]=0;
printf("%d",bit_string[i]);
	}
	// for (i = 0; i < count; i++){
	//printf("%d",bit_string[i]);}
}}
