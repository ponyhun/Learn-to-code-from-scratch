#define _CRT_SECURE_NO_WARNINGS
////编程练习
////
//1.设计一个函数min（x，y），返回两个double类型值的较小值。在一个简单的驱动程序中测试该函数。
//
#include<stdio.h>
//double min(double x, double y)
//{
//	if (x>y)
//	{
//		return y;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	double big = 1000.0;
//	double small = 10.0;
//	printf("较小值为%.1lf", min(big, small));
//	return 0;
//}
// 
// 
//2.设计一个函数chline（ch，i，j），打印指定的字符j行i列。在一个简单的驱动程序中测试该函数。
//void chline(char ch, int i, int j)
//{
//	for ( int n = 0; n <i ; n++)
//	{
//		for (int m = 0; m < j; m++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	printf("打印3行4列的$\n");
//	chline('$', 3, 4);
//	return 0;
//}
//

//3．编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印指定字符的行数。编写一个调用该函数的程序。
//void nice_printf(char ch, int i, int j)
//{
//	for (int n = 0; n < j; n++)
//	{
//		for ( int n = 0; n < i; n++)
//		{
//			printf("%c", ch);					//真服了一模一样的题目
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	printf("将20个$打印成5行\n");
//	printf("一行打印5个，打印4行\n");
//	nice_printf('$', 5, 4);
//	return 0;
//}
// 
// 
//4．两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。
//double average(double x, double y)
//{
//	double x_down = 1 / x;
//	double y_down = 1 / y;
//	return 1 / ((x_down + y_down)/2);
//}
// 
//int main()
//{
//	printf("搞一个3，一个2，弄他们的调和平均数\n");
//	printf("我算了,两个倒数的平均值是5/12,调和平均数是12/5,也就是2.4\n");
//	printf("计算结果为%.1lf\n", average(3, 2));
//	return 0;
//}
// 
// 
//5．编写并测试一个函数larger＿of（），该函数把两个double类型变量的值替换为较大的值。例如，larger＿of（x，y）会把x和y中较大的值重新赋给两个变量。
//void larger_of(double *x, double *y)
//{
//	if (*x>*y)
//	{
//		*y = *x;
//	}
//	else
//	{
//		*x = *y;
//	}
//}
// int main()
// {
//	 double m = 1000.0,n = 10.0;
//	 printf("%f     %f\n", m, n);
//	 larger_of(&m, &n);
//	 printf("%f     %f", m, n);
//	 return 0;
// }
// 
// 
////6．编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。
//void give_number(double* x, double* y, double* z)
//{
//	double max, mid, min;
//	double arr[3] = { *x,*y,*z };
//	max = arr[0];
//	min = arr[0];
//	for (int i = 1; i < 3; i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		}
//		if (min>arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		mid = arr[i];
//		if (mid<=max&&mid>=min)
//		{
//			break;
//		}
//	}
//	*x = min;
//	*y = mid;
//	*z = max;
//}
//int main()
//{
//	double x = 20.0, y = 100.0, z = -10.0;
//	printf("x=%.1lf\ny=%.1lf\nz=%.1lf\n", x, y, z);
//	give_number(&x, &y, &z);
//	printf("x=%.1lf\ny=%.1lf\nz=%.1lf\n", x, y, z);
//	return 0;
//}
// 
// 
//7．编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位置。
//例如，c和c在字母表中的位置都是3。合并一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回—1。
//
//#include<ctype.h>
//void get_char()
//{
//	char input;
//	while ((input = getchar())!= EOF)
//	{
//		getchar();
//		if (isalpha(input)!=0)
//		{
//			printf("%c是一个字母\n", input);
//			printf("在字母表的位置是:%d\n", return_position(input));
//		}
//		else
//		{
//			printf("%c不是字母\n",input);
//			printf("字母表没有位置所以给个%d\n", return_position(input));
//		}
//	}
//}
//
//int return_position(input)
//{
//	if (isalpha(input)!=0)
//	{
//		return input - 'a' + 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	printf("打印一下你想输入的东西\n");
//	get_char();
//	return 0;
//}
// 
// 
//8．第6章的程序清单6.20中，power（）函数返回一个double类型数的正整数次幂。改进该函数，使其能正确计算负幂。
//另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。要使用一个循环，并在程序中测试该函数。
//
//double power(double n,int p)//n是底数，p是指数
//{
//	double pow = 1;
//	int i;
//	if (n==0)
//	{
//		if (p==0)
//		{
//			printf("0的0次幂未定义:\n");
//			pow = 1;
//		}
//		else
//		{
//			pow = 0;
//		}
//	}
//	else
//	{
//		 if (p>0)
//		{
//			for (i = 0; i < p; i++)
//			{
//				pow *= n;
//			}
//		}
//		else if (p==0)
//		{
//			pow = 1;
//		}
//		else
//		{
//			 for ( i = 0; i > p; i--)
//			 {
//				 pow *= 1/n;
//			 }
//		}
//	}
//	return pow;
//}
//int main()
//{
//
//	printf("搞一个10的-2次方=%lf\n", power(10,-2));
//	printf("搞一个0的0次方=%lf\n", power(0,0));
//	printf("搞一个0的-2次方=%lf\n", power(0, -2));
//	printf("搞一个10的0次方=%lf\n", power(-10, 0));
//
//	return 0;
//}
// 
// 
//9．使用递归函数重写编程练习8。
//
//double power(double n, int p)//n是底数，p是指数
//{
//	double pow = 1;//pow是结果
//	int i=0;
//	if (n == 0)
//	{
//		if (p == 0)
//		{
//			printf("0的0次幂未定义:\n");
//			pow = 1;
//		}
//		else
//		{
//			pow = 0;
//			return pow;
//		}
//	}
//	else
//	{
//		if (p == 0)
//		{
//			pow = 1;
//		}
//		else if(p>0)
//		{
//			pow = power(n, p - 1) * n;
//		}
//		else
//		{
//			pow = power(n, p + 1) * 1/n;
//		}
//	}
//	return pow;
//}
//int main()
//{
//
//	printf("搞一个10的-2次方=%lf\n", power(10,-2));
//	printf("搞一个0的0次方=%lf\n", power(0,0));
//	printf("搞一个0的-2次方=%lf\n", power(0, -2));
//	printf("搞一个10的0次方=%lf\n", power(-10, 0));
//
//	return 0;
//}
// 
// 
//10．为了让程序清单9.8中的to＿binary（）函数更通用，编写一个to＿base＿n（）函数接受两个参数，且第二个参数在2～10范围内，
//然后以第2个参数中指定的进制打印第1个参数的数值。例如，to＿base＿n（129，8）显示的结果为201，也就是129的八进制数。在一个完整的程序中测试该函数
//
//void to_base_n(unsigned long n,int x)
//{
//	int r ;
//	r = n % x;
//	if(x>10||x<2)
//	{
//		printf("此函数只支持十进制通往二至十进制的运算\n");
//		return;
//	}
//	if (n>=x)
//	{
//		to_base_n(n / x, x);
//	}
//	printf("%d", r);
//}
//int main()
//{
//	printf("就搞129的八进制看看\n");
//	to_base_n(129, 8);
//	return 0;
//}
// 
// 
////11．编写并测试Fibonacci（）函数，该函数用循环代替递归计算斐波那契数。
//// F(n)=F(n - 1)+F(n - 2)（n ≥ 2，n ∈ N*）
//void Fibonacci()
//{
//	int input;
//	int i = 1, j = 1, k = 2;
//	scanf("%d", &input);
//	for ( int n = 1; n <=input ; n++)
//	{
//		if(n<=2)
//		{
//			printf("第%d个值是%d\n", n, i);
//		}
//		else
//		{
//			printf("第%d个值是%d\n", n, k);      //随便一想搓出来了，看来我的数学还没退步哈哈
//			i = j;
//			j = k;
//			k = i + j;
//		}
//	}
//}
//
//int main()
//{
//	printf("请输入你的斐波那契数列想要到达的位置\n");
//	Fibonacci();
//	return 0;
//}

