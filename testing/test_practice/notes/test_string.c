#include<string.h>
#include<stdio.h>
int main(void)
{
	char str1[]="CSE";
	char str2[]="CSE";
	char str3[5]="CRS";
	char str4[15]="HIT_";
	char str5[10];
	char str6[5] =" ";
	// printf("//i--copy\n");
	// strcpy(str5,str4);
	// printf("%s\n",str5);
	// printf("//ii--ncopy\n");
	// strncpy(str6,str3, 2);
	// printf("%s\n",str6);
	// printf("//iii--length\n");
	// printf("%d\n",strlen(str5));
	// printf("//iV--cat\n");
	// strcat(str4,str1);
	// printf("%s\n",str4);
	// printf("//Vi--ncat\n");
	// strncat(str4,str1,2);
	// printf("%s\n",str4);
	// printf("//Vii--cmp\n");
	// printf("SAME:%d Diff:%d\n",strcmp(str1,str2),strcmp(str1,str3));
	// printf("//Viii--ncmp\n");
	// printf("SAME:%d Diff:%d\n",strncmp(str1,str2,2),strncmp(str3,str1,2));
	// printf("//ix--Occu:string---\n");
	// printf("POS:%s N-POS:%s\n",strstr(str1,"SE"),strstr(str1,"CA"));
	// printf("//x--Occurence:char---\n");
	// printf("POS:%s N-POS:%s\n",strchr(str1,'E'),strchr(str1,'z'));
	// printf("//xi--lwrcase\n");
	// printf("%s\n",strlwr(str1));
	return 0;
}
