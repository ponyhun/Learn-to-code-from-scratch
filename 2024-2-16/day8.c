#define _CRT_SECURE_NO_WARNINGS
///*2��16�գ�ѧϰ��ͨ������ȥִ���ļ���Ŀǰֻѧϰ�����ı��ĵ���*/


/*�ӽ��쿪ʼ��ģ��д�ռǣ�day��ʾ�ҵ��ռ�ģ�飬����չʾ��ѧ�����¶���*/


//#include<stdio.h>
//#include<stdlib.h> /*���ͷ�ļ�������������exit�������˳����򣬻��г���NULL*/
//int main()
//{
//	int ch;
//	FILE* fp;              /*����һ��ʹ��FILE�ṹ���ָ��fp*/
//	char fname[50];
//	printf("enter name of the file:");
//	scanf("%s", fname);              /*��ʱ������������������ļ���word.txt,�ļ������debug��ͬһĿ¼����ֱ��ʹ��*/
//	fp = fopen(fname, "r");       /*fopen������������ߴ����ļ����֣��ұߴ���򿪷�ʽ��r��reading�Ķ��ı��ļ�*/
//	if(fp==NULL)
//	{
//		printf("failed to open file\n");
//		exit(1);
//	}
//	while ((ch=getc(fp))!=EOF)
//	{
//		putchar(ch);            
//	}
//	fclose(fp);            /*�ر��ļ�*/
//	return 0;
//}

//2��17������д���ˣ�����Ŀ�о���Խ��Խ��д�ˣ��������Ͱ�..
//�²�һ�����鱾��ο�����û��ã����һ�����ճ��Ĵ������г����������⣬�����Ǹ�������c���԰��ʰ��ѣ�
//һ����Ϊ��ΪʲôѧC���İ��Ѱ��Ҹĺõġ�
