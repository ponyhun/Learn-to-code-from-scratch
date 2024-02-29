///*这是一个针对字符串进行排序的程序,排序规则是字符串的首字符在字母表的先后顺序*/
/*这个程序的巧妙之处在于排序的是字符串的地址,而不是内容,这样的话就可以直接就该字符串的内容来进行排序7*/
//#include <stdio.h>
//#include <string.h>
//#define SIZE 81
//#define LIM 20
//#define HALT ""/*空字符串停止输入*/
//void stsrt(char*strings[], int num); /*第一个参数的意思是调入一个数组,数组里面的元素都是字符串,这是由于字符串本质上是地址组成的*/
//char* s_gets(char *st, int n); /*这个函数用来给用户输入字符串,同时可以将fgets函数中将最后加入换行符用\0来代替,保证返回的值是字符串*/
//int main()
//{
//	char input[LIM][SIZE];
//	char *ptstr[LIM];
//	int ct=0;/*输入计数*/
//	int k;/*输出计数*/
//	printf("Input up to %d lines, and I will sort them.\n",LIM);
//	printf("To stop,press the Enter key at a line's start.\n");
//	while(ct<LIM&&s_gets(input[ct],SIZE)!=NULL&&input[ct][0]!='\0')
//	{
//		ptstr[ct]=input[ct];
//		ct++;
//	}
//	stsrt(ptstr,ct);/*用来排序的函数*/
//	puts("\nHere's the sorted list:\n");
//	for(k=0;k<ct;k++)
//	{
//		puts(ptstr[k]);
//	}
//	return 0;
//}
//
//void stsrt(char*strings[],int num)
//{
//	char *temp;
//	int top,seek;
//	for(top=0;top<num-1;top++)
//	{
//		for(seek=top+1;seek<num;seek++)
//		{
//			if(strcmp(strings[top],strings[seek])>0)/*如果前一个数组的首字母排序在后一个的前面,strcmp将会返回一个负数,就不换位置*/
//			{
//				temp=strings[top];
//				strings[top]=strings[seek];
//				strings[seek]=temp;				
//			}
//		}
//	}
//}
//
//char*s_gets(char *st,int n)
//{
//	char*ret_val;
//	int i=0;
//	ret_val=fgets(st,n,stdin);
//	if(ret_val)
//	{
//		while(st[i]!='\n'&&st[i]!='\0')    /*正常录入字符,用首字符来做检测是否正常输入*/
//			i++;
//		if(st[i]=='\n')
//			st[i]='\0';
//		else
//			while(getchar()!='\n')
//			{
//				continue;      /*用来吃掉没有意义的字符*/
//			}
//	}
//	return ret_val;
//}


