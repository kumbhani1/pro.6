#include <stdio.h>


main()
{
    char str[100];
    int n, length;
    int flag = 0;
    
    printf("Enter your value string n =");
    scanf("%s", str);
    
    length = strlen(str);
    
    for(n=0;n < length ;n++)
	{
        if(str[n] = str[length-n-1])
		{
            flag = 1;
            break;
           }
        }
    
    if (flag) 
	{
        printf("%s the value is not a palindrome", str);
    }    
    else
	 {
        printf("%s the value is a palindrome", str);
    }
    
}


