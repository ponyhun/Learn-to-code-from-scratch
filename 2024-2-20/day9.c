#define _CRT_SECURE_NO_WARNINGS
//第九章，函数章节，这一章学得感觉有扩展了，终于知道头文件是干嘛用的了，先来个函数递归


////将数字转化为2进制
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
//		to_binary(n / 2);         //二进制每次进位都要除个2，这样每次递归putchar输出的数字就是前面的数字，2进制数前面的数字，最后一位数字就是第一次取模所的到的数字
//	}							  //数学进制转换的公式就是这个原理，无限取余，最后从下往上的到这个转化的数字
//	putchar(r == 0 ? '0' : '1');
//}


//初识指针
//&地址，*间接运算符
//交换x和y的值
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

///*复习题*/
//给定下面的输出：
//Please choose one of the following :
//1) copy files				2) move files
//3) remove files			4) quit
//Enter the number of your choice :
//
//a．编写一个函数，显示一份有4个选项的菜单，提示用户进行选择（输出如上所示）。
//
//b.编写一个函数，接受两个int类型的参数分别表示上限和下限。该函数从用户的输入中读取整数。如果整数超出规定上下限，
// 函数再次打印菜单（使用a部分的函数）提示用户输入，然后获取一个新值。如果用户输入的整数在规定范围内，该函数则把该整数返回主调函数。如果用户输入一个非整数字符，该函数应返回4。
//
//c.使用本题a和b部分的函数编写一个最小型的程序。最小型的意思是，该程序不需要实现菜单中各选项的功能，只需显示这些选项并获取有效的响应即可。
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


//今天还可以，把早上也利用上了，又对这一章比较好理解，一天就肝完了，得去洗洗睡了