#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*10���Ǵ����һ������11�Ź�����������ˣ�æ�˺ö��������ڼ�����ѧϰ�������½�ѭ�����ø���ϸ��һЩ��whileѭ�����Ѿ��Ƚ�����
�����и���ֵbool�е���˼��ֱ��дһ��*/
//int main()
//{
//	long num=0;
//	long sum = 0L;
//	_Bool input_is_good;/*����һ����������*/
//	printf("please enter an interage to be summed");
//	printf("(q to quit):");
//	input_is_good = (scanf("%ld",&num)==1);/*scanf�����������������᷵��1����ʱ1==1���ʹ�ñ�������ֵΪtrue��������ĸ����0,0!=1ʹ�ñ�����ֵfalse*/
//	while (input_is_good)/*ֱ���������ж�*/
//	{
//		sum = sum + num;
//		printf("please enter next interage(q to quit):");
//		input_is_good = (scanf("%ld", &num)==1);
//	}
//	printf("Those interage sum to %ld.\n",sum);
//	return 0;
//}

///*Ƕ��forѭ��*/
//#define ROWS 6
//#define CHARS 10
//int main()
//{
//	int row;
//	char ch;
//	for(row=0;row<ROWS;row++)/*ִ��6��*/
//	{
//		for(ch='A';ch<('A'+CHARS);ch++)/*ִ��10��*/
//		{
//			printf("%c", ch);/*��ӡa��a+10����ĸ*/
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//forѭ����ʹ������
//#define	SIZE 10
//#define PAR 72/*��׼��*/
//int main()
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//	printf("Enter %d golf scores:\n", SIZE);/*����size���߶������*/
//	for (index = 0;index < SIZE;index++)
//	{scanf("%d", &score[index]);}/*��0��9һһ��Ӧ*/
//	printf("The score read in are as follow:\n");
//	for (index = 0;index < SIZE;index++)
//	{printf("%5d", score[index]);}/*������֤�����Ƿ���ȷ*/
//	printf("\n");
//	for (index = 0;index < SIZE;index++)
//	{
//		sum += score[index];/*�ܷ�*/
//	}
//	average = (float)sum / SIZE;	
//	printf("10������ܷ�=%d ƽ����=%.2f\n", sum, average);
//	printf("���=%.0f", average - PAR);
//	return 0;
//}

/*�����ϰ*/
//1.��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д洢26��Сд��ĸ��Ȼ���ӡ�������
//������.
// 
//int main()
//{
//	char alp[26], n='a';
//	int i;
//	for(i=0;i<26;i++)
//	{
//		alp[i] = n;
//		n++;
//		printf("%c", alp[i]);
//
//	}
//	return 0;
//}
//
//
//2��ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ�ַ���
//$
//$$
//$$$
//$$$$
//$$$$$
//
//int main()
//{
//	int m, n;
//	for (m = 0; m < 5; m++)
//	{
//		for ( n = 0; n<=m; n++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
//
//3��ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
//F
//FE 
//FED
//FEDC
//FEDCB 
//FEDCBA
//ע�⣺������ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬���԰��ַ������ʼ��Ϊ��ĸ���е���ĸ��
//char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//Ȼ���������±�ѡ�񵥶�����ĸ������lets��0���ǣ�A�����ȵȡ�
//
//int main()
//{
//	int j;
//	char m = 'A', i;
//	for ( i = 'F'; i >=m; i--)
//	{
//		for ( j = 'F';j>=i; j--)
//		{
//			printf("%c", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//4��ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
//A 
//BC 
//DEF
//GHIJ
//KLMNO 
//PQRSTU
//
//int main()
//{
//	char i = 'A', m = 'A' + 6, n = 'A', z = 'A', x = 1;
//	while (i < m)
//	{
//		do
//		{
//			printf("%c", n);
//			n++;
//		} while (n<=z);
//		printf("\n");
//		i++;
//		x++;
//		z += x;
//	}
//	return 0;                                          /*��һ���е��Ѷ�˵ʵ����д���Һþ�ʱ������������������ֵõ�������*/
//}
//5����дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ��
//    A
//   ABA 
//  ABCBA
// ABCDCBA
//ABCDEDCBA
//Ҫ�����û��������ĸ������������������E�Ĵ�ӡ���
//��ʾ�������ѭ�������У�ÿ��ʹ��3���ڲ�ѭ�����ֱ���ո��������ӡ��ĸ���Խ����ӡ��ĸ
//
//int main()
//{
//	printf("�������д��ĸ:\n");
//	int i, j, num;
//	char c;
//	char ch = 'A';
//	scanf("%c", &c);
//	num = c - 'A' + 1;
//	for ( i = 1; i <=num; i++)
//	{
//		for ( j=0; j< num-i; j++)
//		{
//			printf(" ");
//		}
//		for ( ch = 'A'; j < num; j++)
//		{
//			printf("%C", ch++);
//		}                                                                           /*����Ŀ����Ѱ���ͷ������*/
//		for ( j=1,ch-=2; j <i; j++,ch--)
//		{
//			printf("%C", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//6����дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������
//Ҫ���û�������������ޡ�ʹ��һ��forѭ����
//
//int main()
//{
//	printf("�������������\n");
//	int start, end, i;
//	scanf("%d", &start);
//	printf("�������������\n");
//	scanf("%d", &end);
//	printf("��ֵ   ƽ��    ����\n");
//	for(;end<=start;end++)                                                   /*��ô������û�뵽��*/
//	{
//		printf("%d %8d %8d\n", end, end * end, end * end * end);
//	}
//	return 0;
//}                   
//7����дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ���ʾ��strlen��������
//4�½��ܹ��������ڼ����������һ���ַ����±ꡣ
//
//#include<string.h>
//int main()
//{
//	char ch[20];
//	printf("�����뵥��\n");
//	scanf("%s", ch);
//	printf("������ĵ�����:%s\n", ch);
//	printf("���ʵ�����Ϊ:%d\n", strlen(ch));
//	for (int i = strlen(ch) - 1;i >= 0;i--)
//	{
//		printf("%c", ch[i]);
//	}
//
//	return 0;
//}
//8����дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ�������û��������
//��֮ǰ������Ӧѭ�������û������ÿ��ֵ��
//
//int main()
//{
//	printf("����������������:(����������˳�)\n");
//	float m = 0.0f;
//	float n = 0.0f;
//	scanf("%f %f", &m, &n);
//	do
//	{
//		printf("����֮������������=%.2f\n", (m - n) / (m * n));
//		printf("����������������:(����������˳�)\n");
//	} while (scanf("%f %f",&m,&n)==2);
//
//	return 0;
//}
// 
// 
//9���޸���ϰ8��ʹ��һ���������ؼ���Ľ����
//
//float end(float x,float y)
//{
//	return (x - y) / (x * y);
//}
//int main()
//{
//	printf("����������������:(����������˳�)\n");
//	float m = 0.0f;
//	float n = 0.0f;
//	scanf("%f %f", &m, &n);
//	while (scanf("%f %f", &m, &n) == 2)
//	{
//		printf("����֮������������=%.2f\n", end(m, n));
//		printf("����������������:(����������˳�)\n");
//	}
//	printf("�������˳�");
//	return 0;
//}
// 
// 
//10����дһ������Ҫ���û�����һ������������һ��������������������޵����޷�Χ������
//��ƽ���ͣ�����ʾ��������Ȼ����������ʾ�û��������޺�����������
//����ʾ�����ֱ������������������ڻ�С����������Ϊֹ�����������ʾ�����£�
//Enter lower and upper integer limits : 5 9 
//The sums of the squares from 25 to 81 is 255
//Enter next set of limits : 3 25 
//The sums of the squares from 9 to 625 is 5520
//Enter next set of limits : 5 5
//Done
//
//int main()
//{
//	int low = 0, up = 0,sum = 0;
//	printf("������һ�����޺���������:");
//	scanf("%d %d", &low, &up);
//	while (low < up)
//	{
//		for (int i = low; i <= up;i++)
//		{
//			sum += i * i;
//		}
//		printf("������ƽ�� %d ������ƽ�� %d ����������֮������������ƽ����Ϊ %d\n", low * low, up * up, sum);
//		sum = 0;
//		printf("��������һ������:");
//		scanf("%d %d", &low, &up);
//	}
//	printf("Done");
//	return 0;
//}
// 
// 
//11����дһ�������������ж���8��������Ȼ�󰴵����ӡ��8��������
//
//int main()
//{
//	int arr[8];
//	int i = 0;
//	printf("������8������:\n");
//	for ( i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for ( i=7;i >=0; i--)
//	{
//		printf("%4d", arr[i]);
//	}
//	return 0;
//}
// 
// 
//12���������������������У�
//1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ...
//1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...
//��дһ����������������������е��ܺͣ�ֱ������ĳ��������ʾ��������-1��˵�-1��ż��
//-1��˵�1�����û�����������ָ���Ĵ��������û�����0��ֵʱ�������롣
//�鿴����100�1000�10000�����ܺͣ��Ƿ���ÿ�����ж�������ĳֵ��
//
//float ONE(int n)
//{
//	int z = 1;
//	float a = -1.0;
//	while (z<=n)
//	{
//		a = a * -1;
//		z++;
//	}
//	return a;
//}
//int main()
//{
//	float one = 1.0f;
//	float seq1 = 0.0f;
//	float seq2 = 0.0f;
//	int input = 0;
//	printf("�����������������");
//	scanf("%d", &input);
//	while (input>0)
//	{
//		for (int i = 1; i <= input; i++)
//		{
//			seq1 += one / i;
//		}
//		for (int i = 1; i <= input; i++)
//		{
//			seq2 += ONE(i) / i;
//		}
//		printf("%f\n", seq1 + seq2);
//		seq1 = 0.0;
//		seq2 = 0.0;
//		printf("�����������������:");
//		scanf("%d", &input);
//	}
//	
//	return 0;
//}
// 
// 
//13����дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
//ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ��
//
//int main()
//{
//	int arr[8], a = 1, i;
//	for (i = 1; i < 8; i++)
//	{
//		arr[0] = 2;
//
//		arr[i] = 2 * arr[i - 1];
//	}
//	i = 0;
//	do
//	{
//		printf("%2d\n", arr[i]);
//		i++;
//	} while (i<8);
//	return 0;
//}
// 
// 
//14����дһ�����򣬴�����������8��Ԫ�ص�double�������飬ʹ��ѭ����ʾ�û�Ϊ��һ����������8��ֵ��
//�ڶ�������Ԫ�ص�ֵ����Ϊ��һ�������ӦԪ�ص��ۻ�֮�͡�
//���磬�ڶ�������ĵ�4��Ԫ�ص�ֵ�ǵ�һ������ǰ4��Ԫ��֮�ͣ�
//�ڶ�������ĵ�5��Ԫ�ص�ֵ�ǵ�һ������ǰ5��Ԫ��֮�ͣ���Ƕ��ѭ��������ɣ�
//�������õڶ�������ĵ�5��Ԫ���ǵڶ�������ĵ�4��Ԫ�����һ������ĵ�5��Ԫ��֮�ͣ�ֻ��һ��ѭ������������񣬲���Ҫʹ��Ƕ��ѭ������
//���ʹ��ѭ����ʾ������������ݣ���һ��������ʾ��һ�У��ڶ���������ʾ�ڵ�һ���������һ�У�
//����ÿ��Ԫ�ض����һ�������Ԫ�����Ӧ��
//
//int main()
//{
//	double arr1[8], arr2[8];
//	printf("������8��ֵ\n");
//	for (int i = 0; i < 8; i++)
//	{
//		scanf("%lf", &arr1[i]);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		double sum = 0;
//		for (int j=0;j <=i;j++)
//		{
//			sum = arr1[j] + sum;
//		}
//		arr2[i] = sum;
//	}
//	printf("first array:");
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%f.", arr1[i]);
//	}
//	printf("\nsecond array:");
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%f.", arr2[i]);
//	}
//	return 0;
//}
//
// 
//15����дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ���������԰�����洢��char���͵������У�
//����ÿ���ַ�������255.����һ�¸���%cת��˵����scanf����һ��ֻ�ܴ���
//���ж�ȡһ���ַ����������û�����Enter��ʱscanf��������������һ�������ַ�����n����
//
//#include<string.h>
//int main()
//{
//	char ch[256];
//	int i = 0;
//	do
//	{
//		scanf("%c", &ch[i]);
//	} while (ch[i]!='\n' && ++i);                       /*ţ�ģ�ѧ����*/
//	printf("������:\n");                         
//	for  (i--; i>=0 ;i--)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}
// 
// 
//16��Daphne��10���ĵ���ϢͶ����100��Ԫ��Ҳ����˵��ÿ��Ͷ�ʻ����൱��ԭʼͶ�ʵ�10������
//Deirdre��%5�ĸ�����ϢͶ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ����%5������֮ǰ����Ϣ������дһ������
//������Ҫ������Deirdre��Ͷ�ʶ�Żᳬ��Daphne������ʾ��ʱ���˵�Ͷ�ʶ
//
//int main()
//{
//	float Daph = 100.0f, Deir = 100.0f;
//	int years=0;
//	while (Deir<=Daph)
//	{
//		Daph = 100.0f;
//		Deir = 100.0f;
//		for (int i = 0; i < years; i++)
//		{
//			Daph += 10.0;
//		}                                                       /*���˲ο���ŷ��ְѳ���д�����ˣ���������ҪǶ�׵�*/
//		for (int i = 0; i < years; i++)
//		{
//			Deir += Deir * 0.05;
//		}
//		years++;
//	}
//	printf("Ͷ������Ϊ%d\n", years);
//	printf("Daphne��Ͷ�ʶ�Ϊ%f\n", Daph);
//	printf("Deirdre��Ͷ�ʶ�Ϊ%f", Deir);
//	return 0;
//}
// 
// 
//17.Chuokie Lucky Ӯ����100����Ԫ��˰�󣩣����ѽ������������8�����˻�����ÿ������һ�졣
//ȡ��10����Ԫ����дһ����������������ȡ�����е�Ǯ��
//
//int main()
//{
//	float money = 1000000.0;
//	int years = 0;
//	while (money>0)
//	{
//		years++;
//		money += 0.08 * money;
//		money -= 100000;
//	}
//	printf("%d���ȡ������Ǯ\n", years);
//	return 0;
//}
// 
//
//18. Rabnud��ʿ������һ���罻Ȧ���������5�����ѡ���ע�⵽������������������ķ�ʽ������
//��1����1�����ѣ�ʣ�µ�����������������2����2����ʣ�µķ�����һ��
//���ԣ���N������N�����ѣ�ʣ�µ�����������������дһ�����򣬼��㲢��ʾRabnud��ʿÿ
//�ܵ������������ó���һֱ���У�ֱ�������˰������˰����Ǵ��Թ���һ����
//���罻Ȧ�����ȶ���ϵ�ĳ�Ա�����ֵ����ֵ��Լ��150��
//
//int main()
//{
//	int friend = 5;
//	int week = 0;
//	for ( week = 1; friend < 150; week++)
//	{
//		friend -= week;
//		friend *= 2;
//		printf("��%d������%d�����ѣ�ʣ�µ����ѷ���������Ϊ%d\n", week, week,friend);
//	}
//	return 0;
//}


//�������Ŀզ����ô�򵥣�ѧ��һ�»������죬��Ҫ����Ŀȷʵ��Щ�Ѷȣ�����2��13���ˣ���Щ��Ŀһ�¾�������