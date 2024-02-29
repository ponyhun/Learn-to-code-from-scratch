//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define SIZE 40
//#define ANSER "GRANT"
//void *TOupper(char*st)
//{
//	while (*st != '\0')
//	{
//		if (islower(*st))
//			*st = toupper(*st);
//		st++;
//	}
//}
//char*s_gets(char*st, int n)
//{
//	char*rev;
//	rev = fgets(st, n, stdin);
//	while (*st != '\0'&&*st!='\n')
//	{
//		st++;
//	}
//	if (*st == '\n') {
//		*st = '\0';
//	}
//	else
//	{
//		while (getchar() != '\n')
//			continue;
//	}
//	TOupper(rev);
//	return rev;
//}
//int main()
//{
//	char try[SIZE];
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (strcmp(try, ANSER) != 0)
//	{
//		printf("回答错误,重试\n");
//		puts(try);
//		s_gets(try, SIZE);
//	}
//	printf("回答正确\n");
//	return 0;
//}
