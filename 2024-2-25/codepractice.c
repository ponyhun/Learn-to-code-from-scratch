//编程练习
//1．设计并测试一个函数，从输入中获取n个字符（包括空白、制表符、换行符），把结果存储在一个数组里，它的地址被传递作为一个参数。
//#include <stdio.h>
//char*getinput(char*st,int n)
//{
//	int i=0;
//	do{
//		st[i]=getchar();
//	}while(st[i]!=EOF&&++i<n);
//	return st;
//}
//int main()
//{
//	char arr[10];
//	getinput(arr,10);
//	puts(arr);
//	return 0;
//}

//2．修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf（）。
//#include <stdio.h>
//char*getinput(char*st,int n)
//{
//	int i=0;
//	do{
//		st[i]=getchar();
//		if(st[i]==' '||st[i]=='\n'||st[i]=='\t')
//			break;
//	}while(st[i]!=EOF&&++i<n);
//	return st;
//}
//int main()
//{
//	char arr[10];
// 	getinput(arr,10);
//	puts(arr);
//	return 0;
//}

//3．设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。
//该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
//#include <stdio.h>
//#include <ctype.h>
//char *get_word(char *out)
//{
//	char input[80];
//	char*in = input;
//	puts("enter a string");
//	fgets(input, 80, stdin);
//	while ((*in == ' ' || *in == '\t' || *in == '\n') && *in != '\0')
//		in++;
//	while(*in!=' '&&*in!='\t'&&*in!='\n'&&*in!='\0')
////	while (isalpha(*in))
//		*out++ = *in++;
//	return out;
//}
//int main()
//{
//	char output[80];
//	get_word(output);
//	printf("第一个单词是%s",output);
//	return 0;
//}
//4．设计并测试一个函数，它类似编程练习3的描述，只不过它接受第2个参数指明可读取的最大字符数。
//#include <stdio.h>
//char *get_word(char *out, int n)
//{
//	char input[n];
//	int i = 0;
//	char*in = input;
//	puts("enter a string");
//	fgets(input, n, stdin);
//	while ((*in == ' ' || *in == '\t' || *in == '\n') && *in != '\0')
//		in++;
//	while (*in != ' ' && *in != '\t' && *in != '\n' && *in != '\0' && i < n)
////	while (isalpha(*in)&&i<n)
//	{	*out++ = *in++;
//		i++;
//	}
//	return out;
//}

//5．设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查找第2个函数形参指定的字符首次出现的位置。如果成功，该函数返指向该字符的指针，
////如果在字符串中未找到指定字符，则返回空指针（该函数的功能与strchr（）函数相同）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
//#include<stdio.h>
//#define SIZE 80
//char*word_find(char*st, char n)
//{
//	while (*st)
//	{
//		if (*st == n)
//			return st;
//		st++;
//	}
//	return NULL;
//}
//int main()
//{
//	char input[SIZE];
//	char target;
//	printf("请输入你想要查询的字符串\n");
//	fgets(input,SIZE,stdin);
//	printf("请输入你需要查询的字符\n");
//	while((target=getchar())=='\n')
//		continue;
//	if(word_find(input,target))
//	{
//		printf("在字符串中的位置是第%d位\n",word_find(input,target)-input+1);
//	}
//	else
//		printf("找不到,没有这个字符\n");
//	return 0;
//}

//6．编写一个名为is＿within（）的函数，接受一个字符和一个指向字符串的指针作为两个函数形参。如果指定字符在字符串中，该函数返回一个非零值（即为真）
//。否则，返回0（即为假）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
//#include <stdio.h>
//int is_within(char n, char*st);
//int main()
//{
//	char source[80];
//	char dest = ' ';
//	printf("enter a string:\n");
//	fgets(source, 80, stdin);
//	while (dest != EOF)
//	{
//		printf("enter a char u want to find(eof to quit)");
//		while ((dest = getchar()) == '\n')
//			continue;
//		if (is_within(dest, source) == 1)
//			printf("找得到\n");
//		else
//			printf("找不到\n");
//	}
//	return 0;
//}
//int is_within(char n, char*st)
//{
//	while (*st)
//	{
//		if (*st == n)
//			return 1;
//		else
//			st++;
//	}
//	return 0;
//}

//7．strncpy（s1，s2，n）函数把s2中的n个字符拷贝至s1中，截断s2，或者有必要的话在末尾添加空字符。
//如果s2的长度是n或多于n，目标字符串不能以空字符结尾。该函数返回s1。自己编写一个这样的函数，名为mystrncpy（）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
//#include <stdio.h>
//#include <string.h>
//#define SIZE 80
//char*mystrncpy(char *dest, char*srt, int n);
//int main()
//{
//	char destination[SIZE];
//	char source[SIZE];
//	int i=0;
//	printf("enter a string as a source(blank to quit):");
//	fgets(source,SIZE,stdin);
//	printf("enter a number of char your need to copy:");
//	scanf("%d",&i);
//	while(*source!='\n')
//	{
//		mystrncpy(destination,source,i);
//		printf("done!\nnow the dest string is:");
//		puts(destination);
//		while(getchar()!='\n')
//			break;            /*清除换行符*/
//		printf("enter another string as a source(blank to quit)");
//		fgets(source,SIZE,stdin);
//		printf("enter a number of char your need to copy:");
//		scanf("%d",&i);
//	}
//	return 0;
//}
//char *mystrncpy(char*dest,char*srt,int n)
//{
//	int count=0;
//	while(*srt!='\0'&&count<n)    /*这是n>strlen(srt)的情况,这种情况下可以把srt全部拷贝过去,顺带null值*/
//	{								/*如果strlen(srt)>n,那么将会把n个数拷完,同时count也会加到n,这个时候函数就结束了*/
//		*(dest+count++)=*srt++;   /*count纯纯用来计数,对等式没有任何影响*/
//	}
//	if(count<n)						/*如果把srt全部拷贝完了依旧没有把n用完,那么将会拷贝奇怪的东西到destination上*/
//	{
//		while(count<n)
//			*(dest+count++)='\0';
//	}
//	else
//		*(dest+n)='\0';    /*可以保证dest作为一个字符串*/
//	return dest;
//}

//8编写一个名为string_in（）的函数，接受两个指向字符串的指针作为参数。如果第2个字符串包含在第1个字符串中，该函数将返回第1个字符串开始的地址。
//例如，string_in（“hats”， “at”）将返回hats中a的地址。否则，该函数返回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
//#include <stdio.h>
//#include <string.h>
//#define SIZE 80
//char *string_in(char*srt, char*tg);
//int main()
//{
//	char source[SIZE];
//	char *target;
//	printf("请输入大字符串:(blank to quit)\n");
//	fgets(source, SIZE, stdin);
//	printf("请输入你想查找的字符串:\n");
//	fgets(target, SIZE, stdin);
//	while (*source != '\n')
//	{
//		printf("你所查找的字符串的第一个字符的地址是%p\n", string_in(source, target));
//		printf("验证说明下面的字符%s\n", target);
//		printf("请输入大字符串:(blank to quit)\n");
//		fgets(source, SIZE, stdin);
//		printf("请输入你想查找的字符串:\n");
//		fgets(target, SIZE, stdin);
//	}
//	printf("done!\n");
//	return 0;
//}
//
//char *string_in(char *srt, char*tg)
//{
//	char*temp = tg;
//	while (*srt != '\0')
//	{
//		if (*srt == *tg)
//		{
//			do{
//				if (*tg == '\0'||*tg=='\n')
//				{
//					tg = srt;
//					return tg;
//				}
//			}while (*tg++ == *srt++);
//		}
//		tg = temp;
//		srt++;
//	}
//	return '\0';
//}

//9，编写一个函数，把字符串中的内容用其反序字符串代替。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
//#include <stdio.h>
//#include <string.h>
//#define SIZE 80
//char* down(char*st);
//int main()
//{
//	char carr[SIZE];
//	printf("请输入你需要倒转的字符串(blank to quit)\n");
//	fgets(carr, SIZE, stdin);
//	while (*carr != '\n')
//	{
//		down(carr);
//		puts(carr);
//		printf("请输入你需要倒转的字符串(blank to quit)\n");
//		fgets(carr, SIZE, stdin);
//	}
//	return 0;
//}
//char* down(char*st)
//{
//	int length = strlen(st);
//	char downst[length];
//	for (int i = 0; i < length; i++)
//		downst[i] = *(st + length - 1 - i);
//	for(int i=0;i<length;i++)
//		*(st+i)=*(downst+i);
//	return st;
//}

//10，编写一个函数接受一个字符串作为参数，并删除字符串中的空格。在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。
//该程序应该应用该函数读取每个输入的字符串，并显示处理后的结果。
//#include <stdio.h>
//#include <string.h>
//#define SPACE ' '
//char* delet(char*st);
//int main()
//{
//	char chars[80];
//	printf("请输入字符串(blank to quit)\n");
//	fgets(chars, 80, stdin);
//	while (*chars != '\n')
//	{
//		delet(chars);
//		puts(chars);
//		printf("请输入字符串(blank to quit)\n");
//		fgets(chars, 80, stdin);
//	}
//	return 0;
//}
//
//char* delet(char*st)
//{
//	char out[80];
//	int count=0;
//	int i = 0;
//	while (*st)
//	{
//		if (*st != SPACE)
//		{	out[i] = *st;
//			i++;
//		}
//		count++;
//		st++;
//	}
//	st-=count;
//	out[i]='\0';
//	int length = strlen(out);
//	for (i = 0; i < length; i++)
//	{
//		*(st + i) = out[i];
//	}
//	*(st+i)='\0';
//	return st;
//}
//11，编写一个程序，读入10个字符串或者读到EOF时停止。该程序为用户提供一个有5个选项的菜单：
//打印源字符串列表、以ASCI1中的顺序打印字符串、按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符串、退出。菜单可以循环显示，除非用户选择退出选项。
//当然，该程序要能真正完成菜单中各选项的功能。
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define LENGTH 80
//#define NUMBER 5
//void show_menu()
//{
//	for (int i = 0; i < 80; i++)
//		printf("*");
//	printf("\n");
//	puts("1.打印原字符串列表		2.按ASCII顺序打印字符串");
//	puts("3.按长度递增打印字符串		4.按第一个单词的长度打印字符串");
//	puts("5.quit");
//	for (int i = 0; i < 80; i++)
//		printf("*");
//	printf("\n");
//}
//void sort_order(int num,int order[][2])
//{
//	int temp[2];
//	for(int i=0;i<num-1;i++)
//	{
//		for(int j=i+1;j<num;j++)
//		{
//			if(order[j][1]>order[j+1][1])
//			{
//				temp[0]=order[j][0];
//				temp[1]=order[j][1];
//				order[j][0]=order[j+1][0];
//				order[j][1]=order[j+1][1];
//				order[j+1][0]=temp[0];
//				order[j+1][1]=temp[1];
//			}
//		}
//	}
//}
//void source_print(int num,char st[][LENGTH])
//{
//	printf("无修改打印:\n");
//	for (int i = 0; i < num; i++)
//		printf("%d .%s",i ,st[i]);
//}
//void ascii_print(int num,char st[][LENGTH])
//{
//	printf("ascii顺序打印:\n");
//	int order[num][2];
//	for(int i=0;i<num;i++)
//	{
//		order[i][0]=i;
//		order[i][1]=st[i][0];/*提取首字母*/
//	}
//	sort_order(num,order);
//	for(int i=0;i<num;i++){
//		printf("%d. %s",i,st[order[i][0]]);
//	}
//}
//void length_print(int num,char st[][LENGTH]) /*长度递增打印*/
//{
//	printf("短到长顺序打印:\n");
//	int order[num][2];
//	for(int i=0;i<num;i++)
//	{
//		order[i][0]=i;
//		order[i][1]=strlen(st[i]);
//	}
//	sort_order(num,order);
//	for(int i=0;i<num;i++){
//		printf("%d. %s",i,st[order[i][0]]);
//	}
//}
//int get_word_length(char*st)
//{
//	int length = 0;
//	char *in = st;
//	while (isalpha(*in) == 0)
//		in++;
//	while (isalpha(*in) != 0)
//	{
//		length++;
//		in++;
//	}
//	return length;
//}
//void first_length(int num,char st[][LENGTH])
//{
//	printf("根据首单词长度顺序打印:\n");
//	int order[num][2];
//	for(int i=0;i<num;i++)
//	{
//		order[i][0]=i;
//		order[i][1]=get_word_length(st[i]);
//	}
//	sort_order(num,order);
//	for(int i=0;i<num;i++){
//		printf("%d. %s",i,st[order[i][0]]);
//	}
//}
//void input_string(int num,char st[][LENGTH])
//{
//	printf("enter %d strings input\n",NUMBER);
//	for(int i=0;i<num;i++)
//	fgets(st[i],LENGTH,stdin);
//}
//int main()
//{
//	char string[NUMBER][LENGTH];
//	int select;
//	input_string(NUMBER,string);
//	show_menu();
//	scanf("%d",&select);
//	while(select!=5)
//	{
//		switch (select) {
//		case 1:
//			source_print(NUMBER,string);
//			break;
//		case 2:
//			ascii_print(NUMBER,string);
//			break;
//		case 3:
//			length_print(NUMBER,string);
//			break;
//		case 4:
//			first_length(NUMBER,string);
//			break;
//		case 5:
//			break;
//		default:
//			printf("error select,retry!\n");
//			break;
//		}
//		show_menu();
//		scanf("%d",&select);
//	}
//	printf("done!");
//	return 0;
//}
//12.编写一个程序，读取输入，直至读到 EOF，报告读入的单词数、大写字母数、小写字母数、标点符号数和数字字符数。使用 ctype.h头文件中的函数。
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 200
//int count_words(char st[]);
//int main()
//{
//	char input[SIZE];
//	int i = 0;
//	int save = 0, count = 0;
//	while (scanf("%c", &input[i])!= EOF && i < SIZE)
//		i++;
//	input[i]='\0';
//	printf("有%d个单词\n", count_words(input));
//	save = i;
//	for (count = 0; i >=0; i--)
//	{
//		if (isupper(input[i]))
//			count++;
//	}
//	printf("有%d个大写字母\n", count);
//	i = save;
//	for (count = 0; i >=0; i--)
//	{
//		if (islower(input[i]))
//			count++;
//	}
//	printf("有%d个小写字母\n", count);
//	i = save;
//	for (count = 0; i >=0; i--)
//	{
//		if (isdigit(input[i]))
//			count++;
//	}
//	printf("有%d个数字\n", count);
//	i = save;
//	for (count = 0; i >=0; i--)
//	{
//		if (ispunct(input[i]))
//			count++;
//	}
//	printf("有%d个标点\n", count);
//	return 0;
//}
//int count_words(char st[])
//{
//	int count = 0;
//	int i = 0;
//	while (isalpha(st[i]) == 0)
//	{
//		i++;
//	}
//	while (st[i] !='\0' &&i < SIZE)
//	{
//		i++;
//		if (isalpha(st[i]))
//		{
//			while (isalpha(st[i]))
//				i++;
//			count++;
//		}
//	}
//	return count;
//}

//13.编写一个程序，反序显示命令行参数的单词。例如，命令行参数是 see you later，该程序应打印 later you see。
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	if(argc<2){
//		printf("error!need more");
//	}
//	else
//	{
//		for(int i=argc;i>1;i--)
//		{
//			printf("%s ",argv[i-1]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//14.编写一个通过命令行运行的程序计算幂。第1个命令行参数是double类型的数，作为幂的底数第2个参数是整数，作为幂的指数。
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main(int argc, char * argv[])
//{
//	int number; //指数
//	double base; //底数
//	char * end1; //底数结束指针
//	char * end2; //指数结束指针
//	base = strtod(argv[1], &end1);
//	number = strtol(argv[2], &end2, 10);
//	printf("%.2lf", pow(base, number));
//	return 0;
//}

//15.使用字符分类函数实现 atoi （）函数。如果输入的字符串不是纯数字，该函数返回0。
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int myatoi(char*st);
//int main()
//{
//	char str[20];
//	scanf("%s", str);
//	printf("%s\t%d",str,myatoi(str));
//	return 0;
//}
//int myatoi(char*st)
//{
//	int result = 0;
//	int bit_mark = 1;
//	int length = strlen(st);
//	for (int i = 0; i < length; length--)
//	{
//		if (isdigit(*st) == 0)
//			return 0;
//		result += bit_mark * (*(st + length - 1) - '0');
//		bit_mark *= 10;
//	}
//	return result;
//}

//16，编写一个程序读取输入，直至读到文件结尾，然后把字符串打印出来。该程序识别和实现下面的命令行参数：
//-p						按原样打印
//-u						把输入全部转换成大写
//-l						把输入全部转换成小写
//如果没有命令行参数，则让程序像是使用了-p参数那样运行。
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//#define SIZE 256
//void print_orig(char*st);
//void print_upper(char*st);
//void print_lower(char*st);
//int main(int argc, char*argv[])
//{
//	char c;     /*c用来做选择*/
//	if (argc < 2) {
//		c = 'p';
//	}
//	c = argv[1][1]; /*之所以用argv[][1],是为了将-p的-屏蔽掉*/
//	char test[SIZE];
//	printf("enter string to print:");
//	fgets(test, SIZE, stdin);
//	switch (c) {
//		case 'p':
//		case 'P':
//			print_orig(test);
//			break;
//		case 'u':
//		case 'U':
//			print_upper(test);
//			break;
//		case 'l':
//		case 'L':
//			print_lower(test);
//			break;
//	}
//	return 0;
//}
//void print_orig(char*st)
//{
//	printf("origin is:\n%s", st);
//}
//void print_upper(char*st)
//{
//	printf("upper is:\n");
//	while (*st != EOF && *st != '\0')
//	{
//		putchar(toupper(*st++));
//	}
//}
//void print_lower(char*st)
//{
//	printf("lower is:\n");
//	while (*st != EOF && *st != '\0')
//	{
//		putchar(tolower(*st++));
//	}
//}
