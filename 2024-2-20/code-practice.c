#define _CRT_SECURE_NO_WARNINGS
////�����ϰ
////
//1.���һ������min��x��y������������double����ֵ�Ľ�Сֵ����һ���򵥵����������в��Ըú�����
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
//	printf("��СֵΪ%.1lf", min(big, small));
//	return 0;
//}
// 
// 
//2.���һ������chline��ch��i��j������ӡָ�����ַ�j��i�С���һ���򵥵����������в��Ըú�����
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
//	printf("��ӡ3��4�е�$\n");
//	chline('$', 3, 4);
//	return 0;
//}
//

//3����дһ������������3��������һ���ַ��������������ַ������Ǵ���ӡ���ַ�����1������ָ��һ���д�ӡ�ַ��Ĵ�������2������ָ����ӡָ���ַ�����������дһ�����øú����ĳ���
//void nice_printf(char ch, int i, int j)
//{
//	for (int n = 0; n < j; n++)
//	{
//		for ( int n = 0; n < i; n++)
//		{
//			printf("%c", ch);					//�����һģһ������Ŀ
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	printf("��20��$��ӡ��5��\n");
//	printf("һ�д�ӡ5������ӡ4��\n");
//	nice_printf('$', 5, 4);
//	return 0;
//}
// 
// 
//4�������ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ���������������ƽ��ֵ�����ȡ�������ĵ�������дһ����������������double���͵Ĳ��������������������ĵ���ƽ������
//double average(double x, double y)
//{
//	double x_down = 1 / x;
//	double y_down = 1 / y;
//	return 1 / ((x_down + y_down)/2);
//}
// 
//int main()
//{
//	printf("��һ��3��һ��2��Ū���ǵĵ���ƽ����\n");
//	printf("������,����������ƽ��ֵ��5/12,����ƽ������12/5,Ҳ����2.4\n");
//	printf("������Ϊ%.1lf\n", average(3, 2));
//	return 0;
//}
// 
// 
//5����д������һ������larger��of�������ú���������double���ͱ�����ֵ�滻Ϊ�ϴ��ֵ�����磬larger��of��x��y�����x��y�нϴ��ֵ���¸�������������
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
////6����д������һ���������ú�����3��double�����ĵ�ַ��Ϊ����������Сֵ�����1���������м�ֵ�����2�����������ֵ�����3��������
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
//7����дһ���������ӱ�׼�����ж�ȡ�ַ���ֱ�������ļ���β������Ҫ����ÿ���ַ��Ƿ�����ĸ������ǣ���Ҫ�������ĸ����ĸ���е���ֵλ�á�
//���磬c��c����ĸ���е�λ�ö���3���ϲ�һ����������һ���ַ���Ϊ������������ַ���һ����ĸ�򷵻�һ����ֵλ�ã����򷵻ء�1��
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
//			printf("%c��һ����ĸ\n", input);
//			printf("����ĸ���λ����:%d\n", return_position(input));
//		}
//		else
//		{
//			printf("%c������ĸ\n",input);
//			printf("��ĸ��û��λ�����Ը���%d\n", return_position(input));
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
//	printf("��ӡһ����������Ķ���\n");
//	get_char();
//	return 0;
//}
// 
// 
//8����6�µĳ����嵥6.20�У�power������������һ��double�����������������ݡ��Ľ��ú�����ʹ������ȷ���㸺�ݡ�
//���⣬����Ҫ����0���κδ��ݶ�Ϊ0���κ�����0���ݶ�Ϊ1������Ӧ����0��0����δ���壬��˰Ѹ�ֵ����Ϊ1����Ҫʹ��һ��ѭ�������ڳ����в��Ըú�����
//
//double power(double n,int p)//n�ǵ�����p��ָ��
//{
//	double pow = 1;
//	int i;
//	if (n==0)
//	{
//		if (p==0)
//		{
//			printf("0��0����δ����:\n");
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
//	printf("��һ��10��-2�η�=%lf\n", power(10,-2));
//	printf("��һ��0��0�η�=%lf\n", power(0,0));
//	printf("��һ��0��-2�η�=%lf\n", power(0, -2));
//	printf("��һ��10��0�η�=%lf\n", power(-10, 0));
//
//	return 0;
//}
// 
// 
//9��ʹ�õݹ麯����д�����ϰ8��
//
//double power(double n, int p)//n�ǵ�����p��ָ��
//{
//	double pow = 1;//pow�ǽ��
//	int i=0;
//	if (n == 0)
//	{
//		if (p == 0)
//		{
//			printf("0��0����δ����:\n");
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
//	printf("��һ��10��-2�η�=%lf\n", power(10,-2));
//	printf("��һ��0��0�η�=%lf\n", power(0,0));
//	printf("��һ��0��-2�η�=%lf\n", power(0, -2));
//	printf("��һ��10��0�η�=%lf\n", power(-10, 0));
//
//	return 0;
//}
// 
// 
//10��Ϊ���ó����嵥9.8�е�to��binary����������ͨ�ã���дһ��to��base��n�����������������������ҵڶ���������2��10��Χ�ڣ�
//Ȼ���Ե�2��������ָ���Ľ��ƴ�ӡ��1����������ֵ�����磬to��base��n��129��8����ʾ�Ľ��Ϊ201��Ҳ����129�İ˽���������һ�������ĳ����в��Ըú���
//
//void to_base_n(unsigned long n,int x)
//{
//	int r ;
//	r = n % x;
//	if(x>10||x<2)
//	{
//		printf("�˺���ֻ֧��ʮ����ͨ������ʮ���Ƶ�����\n");
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
//	printf("�͸�129�İ˽��ƿ���\n");
//	to_base_n(129, 8);
//	return 0;
//}
// 
// 
////11����д������Fibonacci�����������ú�����ѭ������ݹ����쳲���������
//// F(n)=F(n - 1)+F(n - 2)��n �� 2��n �� N*��
//void Fibonacci()
//{
//	int input;
//	int i = 1, j = 1, k = 2;
//	scanf("%d", &input);
//	for ( int n = 1; n <=input ; n++)
//	{
//		if(n<=2)
//		{
//			printf("��%d��ֵ��%d\n", n, i);
//		}
//		else
//		{
//			printf("��%d��ֵ��%d\n", n, k);      //���һ�������ˣ������ҵ���ѧ��û�˲�����
//			i = j;
//			j = k;
//			k = i + j;
//		}
//	}
//}
//
//int main()
//{
//	printf("���������쳲�����������Ҫ�����λ��\n");
//	Fibonacci();
//	return 0;
//}

