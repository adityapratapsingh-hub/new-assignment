#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first  number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    switch(4){
    	case 1: printf("%d",a+b);
    	break;
    	case 2: printf("%d",a-b);
    	break;
    	case 3: printf("%d",a*b);
    	break;
    	case 4: printf("%d", a%b);
    	break;
    	
	}
    return 0;
}