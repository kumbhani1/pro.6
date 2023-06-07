
#include<stdio.h>

 main()
{
	char username[]="raj123@gamil.com";
	
	char password[]="12ee!!w1";
	char username1[100];
	char password1[100];
	

	printf("Enter the username: ");
	gets(username1);

	printf("\nEnter the password: ");
	gets(password1);

	if(strcmp(username, username1) == 0)
	{
	
		if(strcmp(password, password1) == 0)
		{
			
			printf("\nUser successfully logged in...");
		}
		else
		{
			
			printf("\nPassword entered is invalid");
		}
	}
	else
	{
		
		printf("\nUsername entered is invalid");
	}

	
}







































//#include<stdio.h>
//
//main()
//{
//	
//	char email[50]="kumbhanikeval@gmail.com";
//	char password[100]= "987654321";
//	char enteremail[100];
//	char enterpassword[100];
//	int i,j;
//	printf("email");
//	gets(enteremail);
//	
//	printf("password");
//	gest(enterpassword);
//	
//	
//	for(i=0,j=0;email[i]!='\0'&& enteremail!='\0';i++ ,j++)
//	{
//		if(email[i]!=enteremail[j])
//		{
//				break;
//		}
//		
////		break;
//	}
//	
//
//       if (email[i] == '\0' && enteremail[j] == '\0')
//       {
//       	for(i=0,j=0;password[i]!='\0'&&enterpassword[j]!='\0';i++,j++)
//       	{
//       		if(password[i]!=enterpassword[j])
//		   {
//		   		break;
//		   }
////		   break;
//		   
//		   }
//	   }
//	
//	if (password[i] =='\0'&&enterpassword[j]=='\0')
//	    {
//		
//		loggedin = 1;
//     }
//	  
//      
//
//	
//
//
//     if(loggedin)
//     {
//     	printf("login successful.\n");
//	 }
//
//      eles
//      {
//      	printf("invalid email or password.\n");
//	  }
//
//}



