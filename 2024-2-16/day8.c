#define _CRT_SECURE_NO_WARNINGS
///*2月16日，学习了通过代码去执行文件，目前只学习运用文本文档。*/


/*从今天开始分模块写日记，day表示我的日记模块，用来展示我学到的新东西*/


//#include<stdio.h>
//#include<stdlib.h> /*这个头文件可以用来引用exit函数来退出程序，还有常量NULL*/
//int main()
//{
//	int ch;
//	FILE* fp;              /*定义一个使用FILE结构体的指针fp*/
//	char fname[50];
//	printf("enter name of the file:");
//	scanf("%s", fname);              /*此时可以输入我所储存的文件名word.txt,文件如果与debug在同一目录可以直接使用*/
//	fp = fopen(fname, "r");       /*fopen函数，括号左边代表文件名字，右边代表打开方式，r是reading阅读文本文件*/
//	if(fp==NULL)
//	{
//		printf("failed to open file\n");
//		exit(1);
//	}
//	while ((ch=getc(fp))!=EOF)
//	{
//		putchar(ch);            
//	}
//	fclose(fp);            /*关闭文件*/
//	return 0;
//}

//2月17日总算写完了，这题目感觉是越来越难写了，继续加油吧..
//吐槽一下这书本编参考的人没编好，最后一题我照抄的代码运行出来都有问题，后面那个是我在c语言吧问吧友，
//一个名为“为什么学C”的吧友帮我改好的。
