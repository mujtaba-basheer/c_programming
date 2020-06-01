#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	char name[40];
	char phone[13];
	char email[50];
} info;

void towrite();
void toread();

void main()
{
	int choice;
	char n;
	while(scanf("%c",&n))
	{
		printf("\nEnter:\n1.\tTo write.\n2.\tTo display every contact.\n");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1:
			write();
			break;
			
			case 2:
			read();
			break;
			
			default:
			printf("\nERROR:\tWrong INPUT!");
		}
		printf("\nEnter any number to stop \n\t\tOr else enter any character:\n");
	}
	return;
}


void write()
{
	FILE *outfile; 
	char yn;

    outfile=fopen ("directory.txt", "a"); 
    if (outfile == NULL) 
    { 
        fprintf(stderr, "\nERROR: File not opened.\n"); 
        exit (1); 
    } 
  
  
	do
	{
		info input;
		
		printf("\nEnter the name of the person\n");
		scanf("%[^\n]%*c",input.name);
		printf("\nEnter the phone of the person\n");
		scanf("%[^\n]%*c",input.phone);
		printf("\nEnter the e-mail of the person\n");
		scanf("%[^\n]%*c",input.email);
		
		fwrite (&input, sizeof(info), 1, outfile); 
      
		if(fwrite != 0)  
			printf("\nContents to file written SUCCESSFULLY!\n"); 
		else 
			printf("\nERROR: writing in file!\n");
			
		printf("\nDo you want to continue?[y/n]\t");
		scanf("%c",&yn);
	}while(yn=='Y'||yn=='y'); 
    
    fclose (outfile); 
  
}

void read()
{
	FILE *infile; 
    info input; 
      
      
    infile = fopen ("directory.txt", "r"); 
    if (infile == NULL) 
    { 
        fprintf(stderr, "\nERROR: File not opened.\n");  
        exit (1); 
    }
    
    while(fread(&input, sizeof(info), 1, infile)) 
        printf ("%s\t%s\t%s\n", input.name,input.phone, input.email); 
  
    fclose (infile); 
}