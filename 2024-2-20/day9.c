#define _CRT_SECURE_NO_WARNINGS
//�ھ��£������½ڣ���һ��ѧ�øо�����չ�ˣ�����֪��ͷ�ļ��Ǹ����õ��ˣ������������ݹ�


////������ת��Ϊ2����
//#include<stdio.h>
//void to_binary(unsigned long n);
//int main()
//{
//	unsigned long number;
//	printf("enter an integer(q to quit):\n");
//	while (scanf("%lu",&number)==1)
//	{
//		printf("binary equivalent:");
//		to_binary(number);
//		putchar('\n');
//		printf("enter an integer(q to quit):\n");
//	}
//	printf("done!\n");
//	return 0;
//}
//
//void to_binary(unsigned long n)              
//{
//	int r;
//	r = n % 2;
//	if (n>=2)
//	{
//		to_binary(n / 2);         //������ÿ�ν�λ��Ҫ����2������ÿ�εݹ�putchar��������־���ǰ������֣�2������ǰ������֣����һλ���־��ǵ�һ��ȡģ���ĵ�������
//	}							  //��ѧ����ת���Ĺ�ʽ�������ԭ������ȡ�࣬���������ϵĵ����ת��������
//	putchar(r == 0 ? '0' : '1');
//}


//��ʶָ��
//&��ַ��*��������
//����x��y��ֵ
//#include<stdio.h>
//void swap(int*u, int*v);
//int main()
//{
//	int x = 10, y = 5;
//	printf("x=%d  y=%d\n", x, y);
//	swap(&x,&y);
//	printf("x=%d  y=%d\n", x, y);
//	return 0;
//}
//void swap(int* u, int* v)
//{
//	int temp;
//	temp = *u;
//	*u = *v;
//	*v = temp;
//}

///*��ϰ��*/
//��������������
//Please choose one of the following :
//1) copy files				2) move files
//3) remove files			4) quit
//Enter the number of your choice :
//
//a����дһ����������ʾһ����4��ѡ��Ĳ˵�����ʾ�û�����ѡ�����������ʾ����
//
//b.��дһ����������������int���͵Ĳ����ֱ��ʾ���޺����ޡ��ú������û��������ж�ȡ������������������涨�����ޣ�
// �����ٴδ�ӡ�˵���ʹ��a���ֵĺ�������ʾ�û����룬Ȼ���ȡһ����ֵ������û�����������ڹ涨��Χ�ڣ��ú�����Ѹ�����������������������û�����һ���������ַ����ú���Ӧ����4��
//
//c.ʹ�ñ���a��b���ֵĺ�����дһ����С�͵ĳ�����С�͵���˼�ǣ��ó�����Ҫʵ�ֲ˵��и�ѡ��Ĺ��ܣ�ֻ����ʾ��Щѡ���ȡ��Ч����Ӧ���ɡ�
//
//#include<stdio.h>
//void show_menu();
//int get_integer(int low,int up);
//int main()
//{
//	int x = 1, y = 4;
//	int choice;
//	show_menu();
//	while (choice = get_integer(x, y)!=4)
//	{
//		switch (choice)
//		{
//		case 1:
//			printf("done\n");
//			break;
//		case 2:
//			printf("done\n");
//			break;
//		case 3:
//			printf("done\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//void show_menu()
//{
//	printf("Please choose one of the following :\n");
//	printf("1) copy files				2) move files\n");
//	printf("3) remove files				4) quit\n");
//	printf("Enter the number of your choice :\n ");
//}
//
//int get_integer(int low,int up)
//{
//	int choice;
//	if((scanf("%d", &choice))!=1)
//	{
//		return 4;
//	}
//	else if(choice>up||choice<low)
//	{
//		printf("try again\n");
//		show_menu();
//		get_integer(low,up);
//	}
//	else if (choice<=up&&choice>=low)
//	{
//		return choice;
//	}
//}


//���컹���ԣ�������Ҳ�������ˣ��ֶ���һ�±ȽϺ���⣬һ��͸����ˣ���ȥϴϴ˯��