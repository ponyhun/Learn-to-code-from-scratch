#define _CRT_SECURE_NO_WARNINGS
//
//1.�޸ĳ����嵥10.7��rain.c������ָ����м��㣨��ȻҪ��������ʼ�����飩��
//
/*rain.c  program*/
//#include<stdio.h>
//#define MONTHS 12							/*10.7��rain.c*/
//#define YEARS 5
//int main()
//{
//	const float rain[YEARS][MONTHS] =
//	{
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.31},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//	int year, month;
//	float subtot, total;
//	printf("YEAR	RAINFALL(inches)\n");
//	for ( year = 0,total=0; year < YEARS; year++)
//	{
//		for(month=0,subtot=0;month<MONTHS;month++)
//		{
//			subtot += rain[year][month];
//		}
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
//	for ( month = 0; month < MONTHS; month++)
//	{
//		for (year = 0, subtot = 0;year < YEARS;year++)
//		{
//			subtot += rain[year][month];
//		}
//		printf("%-5.1f", subtot / YEARS);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include<stdio.h>
//#define MONTHS 12
//#define YEARS 5
//int main()
//{
//	const float rain[YEARS][MONTHS] =
//	{
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.31},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//	int year, month;
//	float subtot, total;
//	const float(*ptr)[MONTHS] = rain;                               /*������ˣ���ô�򵥣��������ȫ�Ǹ��ӣ��˷Ѻö�ʱ��*/
//	printf("YEAR	RAINFALL(inches)\n");                            /*ֱ��˵��ָ���ʾ������ʾ���鲻�͵���*/
//	for ( year = 0,total=0; year < YEARS; year++)
//	{
//		for(month=0,subtot=0;month<MONTHS;month++)
//		{
//			subtot += *(*(ptr + year)+month);
//		}
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
//	for ( month = 0; month < MONTHS; month++)
//	{
//		for (year = 0, subtot = 0;year < YEARS;year++)
//		{
//			subtot += *(*(ptr + year) + month);
//		}
//		printf("%-5.1f", subtot / YEARS);
//	}
//	printf("\n");
//	return 0;
//}


//2.��дһ�����򣬳�ʼ��һ��double���͵����飬Ȼ��Ѹ���������ݿ�����3�����������У���main������������4�����飩��
//ʹ�ô������ʾ���ĺ������е�1�ݿ�����
//ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ�����
//��Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ�����
//��3��������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ�롣Ҳ����˵������������������������������ʾ��
//double source��5�� ����1.1�� 2.2��3.3��4.4��5.5����
//double targetl��5�ݣ�
//double target2 ��5�ݣ�
//double target3��5�ݣ�
//copy_arr��target1�� source�� 5����
//copy_ptr��target2�� source�� 5����
//copy_ptrs��target3�� source�� source �� 5����
//

//#include<stdio.h>
//void copy_arr(double[],double[],int );
//void copy_ptr(double[], double[], int );
//void copy_ptrs(double[], double[], double *);
//int main()
//{
//	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	copy_arr(target1, source, 5);
//	copy_ptr(target2,source, 5);
//	copy_ptrs(target3, source, source + 5);
//	return 0;
//}
//void copy_arr(double t1[], double source[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		t1[i] = source[i];
//	}
//}
//void copy_ptr(double t2[], double source[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		*(t2 + i) = *(source + i);
//	}
//}
//void copy_ptrs(double t3[], double source[], double* ptr)
//{
//	while (source<ptr)
//	{
//		*t3=*source;
//		source++;
//		t3++;
//	}
//}


//3.��дһ�����������ش洢��int���������е����ֵ������һ���򵥵ĳ����в��Ըú�����
//4.��дһ�����������ش洢��double�������������ֵ���±꣬����һ���򵥵ĳ����в��Ըú�����
//5.��дһ�����������ش洢��double�������������ֵ����Сֵ�Ĳ�ֵ������һ���򵥵ĳ����в��Ըú�����
//6.��дһ���������� double���������е����ݵ������У�����һ���򵥵ĳ����в��Ըú�����
//#include<stdio.h>
//int max(int ar[],int n)
//{
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if(max<=ar[i])
//			max=ar[i];
//	}
//	return max;
//}
//int max_index(double ar[], int n)
//{
//	int index = 0;
//	double max = 0.0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= ar[i])
//		{
//			max = ar[i];
//			index = i;
//		}
//	}
//	return index;
//}
//double diff_max(double ar[], int n)
//{
//	double max = ar[0];
//	double min = ar[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= ar[i])
//			max = ar[i];
//		if (min >= ar[i])
//			min = ar[i];
//	}
//	return max - min;
//}
//void down(double ar[], int n)
//{
//	double temp = 0.0;
//	if (n%2!=0)												/*��������£�������˫������ʱ(0+n-1)/2=n/2-0.5*/
//	{
//		for (int i = 0, j = n;i < j;i++)
//		{
//			n--;
//			if ((i + n)/2== j / 2)								/*�Զ��ض�0.5*/
//			{
//				temp = ar[i];
//				ar[i] = ar[n];
//				ar[n] = temp;
//			}
//			if (i == n)
//				break;
//		}
//	}
//	else													/*ż�������,�����ǵ���,��ʱ(0+n-1)/2=n/2-1,���ÿ�μ��㶼���ض�0.5*/
//	{
//		for (int i = 0,j=n; i < j; i++)
//		{
//			n--;
//			if ((i+n)/2==j/2-1)
//			{
//				temp = ar[i];
//				ar[i] = ar[n];
//				ar[n] = temp;
//			}
//			if (i==n-1)
//				break;
//		}
//	}
//}
//int main()
//{
//	int arr[4] = { 0,1,2,3 };
//	printf("max=%d\n", max(arr,4));       /*������*/
//	double arr_d[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
//	printf("max-index=%d\n", max_index(arr_d, 7));  /*������*/
//	printf("max-min=%.1lf\n", diff_max(arr_d, 7)); /*������*/
//	down(arr_d, 7);
//	printf("down={");
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%4.1lf",arr_d[i]);					/*������*/
//	}
//	printf("}\n");
//	return 0;
//}
//
//
//7.��дһ�����򣬳�ʼ��һ��double���͵Ķ�ά���飬ʹ�ñ����ϰ2�е�һ�����������Ѹ������е����ݿ�������һ����ά������
//����Ϊ��ά��������������飬���Կ���ʹ�ô���һά����Ŀ������������������е�ÿ�������飩��
//
//#include<stdio.h>
//void copy_ptr(double t2[][2], double source[][2], int first)
//{
//
//	for (int i = 0,j=0; i < first; i++)
//	{
//		for (j = 0;j < 2;j++)
//			*(*(t2 + i) + j) = *(*(source + i) + j);
//	}
//}
//int main()
//{
//	double arr[5][2] = { {1.1,2.2},{2.2,3.3},{3.3,4.4},{4.4,5.5},{5.5,6.6} };
//	double target[5][2];
//	copy_ptr(target, arr, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0;j < 2;j++)
//			printf("%4.1f", target[i][j]);
//	}
//	return 0;
//}
//
//
//8.ʹ�ñ����ϰ2�еĿ�����������һ���ں�7��Ԫ�ص������е�3����5��Ԫ�ؿ������ں�3��Ԫ
//�ص������С��ú���������Ҫ�޸ģ�ֻ��Ҫѡ����ʵ�ʵ�ʲ�����ʵ�ʲ�������Ҫ�������������С��ֻ��Ҫ������Ԫ�صĵ�ַ�ʹ�����Ԫ�صĸ�������
//
//#include<stdio.h>
//void copy_ptr(double t2[], double source[], int count)
//{
//	for (int i = 2,j=0; i < 5; i++,j++)
//	{
//		t2[j] = source[i];
//	}
//}
//int main()
//{
//	double arr1[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
//	double arr2[3];
//	copy_ptr(arr2, arr1, 7);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("arr2[%d]=%4.1lf\n", i, arr2[i]);
//	}
//	return 0;
//}
//
//
//9����дһ�����򣬳�ʼ��һ��double���͵�3x5��ά���飬ʹ��һ������䳤����ĺ������临������һ����ά�����У���Ҫ��дһ���Ա䳤����Ϊ�βεĺ���
// ����ʾ������������ݣ�����������Ӧ���ܴ�������NXM���飨�����������֧�ֱ䳤���飬��ʹ�ô�ͳC��������Nx5�����飩
//
//#include <stdio.h>
//void vla_copy(int rows,int cols,double ar[rows][cols], const double source[rows][cols])
//{
//	int i, j;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			ar[i][j] = source[i][j];
//		}
//	}
//}
//void vla_show(int rows,int cols,const double ar[rows][cols])
//{
//	for (int i = 0; i <rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			printf("%4.2lf	", ar[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 3, m = 5;
//	double arr[][5] = {
//		{1.1, 1.2, 1.3, 1.4, 1.5},
//		{2.1, 2.2, 2.3, 2.4, 2.5},
//		{3.1, 3.2, 3.3, 3.4, 3.5}
//	};
//	double ray[n][m];
//	vla_copy(n,m,ray,arr);
//	vla_show(n,m,ray);
//	return 0;
//}
//
//
//10����дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ���洢����3�������С�Ҳ����˵��
//�������1�а�����ֵ��2��4��5��8������2�а�����ֵ��1��0��4��6����ô�ú�����3��4��9��14������3�����顣��������3����������һ�������С����һ���򵥵ĳ����в��Ըú�����
//
//#include <stdio.h>
//void add_array(int r, int target[r], const int source1[r], const int source2[r])
//{
//	for (int i = 0; i < r; i++)
//	{
//		target[i] = source1[i] + source2[i];
//		printf("%-4d",target[i]);
//	}
//}
//int main()
//{
//	int arr1[4]={2,4,5,8},arr2[4]={1,0,4,6};
//	int arr3[4];
//	add_array(4,arr3,arr1,arr2);
//	return 0;
//}


//11����дһ����������һ��int���͵�3x5��ά���飬���ú��ʵ�ֵ��ʼ�������ó����ӡ�����е�ֵ��Ȼ���ֵ����������ԭֵ��2������
//����ʾ����Ԫ�ص���ֵ����дһ��������ʾ��������ݣ��ٱ�дһ�������Ѹ�Ԫ�ص�ֵ�������������������Ժ�������������Ϊ������

//#include <stdio.h>
//void print_arr(int array[][5], int r)
//{	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%-4d", array[i][j]);
//		}
//	printf("\n");
//	}
//}
//void double_arr(int array[][5], int r)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			array[i][j] *= 2;
//		}
//	}
//}
//int main()
//{
//	int arr[3][5] = {
//		{1, 2, 3, 4, 5},
//		{2, 3, 4, 5, 6},
//		{3, 4, 5, 6, 7}
//	};
//	print_arr(arr,3);
//	double_arr(arr,3);
//	print_arr(arr,3);
//	return 0;
//}
//12����д�����嵥10.7��rain��c���򣬰�main�����е���Ҫ���񶼸ĳ��ú�������ɡ�
//13����дһ��������ʾ�û�����3������ÿ��������5��double���͵���
//�������û�����ȷ����Ӧ�������������ֵ���ݣ����ó���Ӧ�����������
//a�����û���������ݴ洢��3x5��������
//b������ÿ�飨5�������ݵ�ƽ��ֵ
//c.�����������ݵ�ƽ��ֵ
//d���ҳ���15�������е����ֵ
//e.��ӡ���
//ÿ������Ҫ�õ����ĺ�������ɣ�ʹ�ô�ͳC��������ķ�ʽ����
//�������b��Ҫ��дһ�����㲢����һά����ƽ��ֵ�ĺ���������ѭ�����øú���3�Ρ����ڴ�����������ĺ�����Ӧ�ð�����������Ϊ�������������c��d�ĺ���Ӧ�ѽ����������������
//#include <stdio.h>
//double input_lf()
//{
//	double input = 0.0;
//	scanf("%lf", &input);
//	return input;
//}
//double every_arr_average(double ar[][5], int r)
//{
//	double total = 0.0;
//	for (int i = 0; i < 5; i++)
//		total += ar[r][i];
//	return total / 5;
//}
//double average(double ar[][5], int r)
//{
//	double total = 0.0;
//	for (int j = 0; j < r; j++) {
//		for (int i = 0; i < 5; i++)
//			total += ar[j][i];
//	}
//	return total / 15;
//}
//double max(double ar[][5], int r)
//{
//	double max = 0.0;
//	for (int j = 0; j < r; j++) {
//		for (int i = 0; i < 5; i++)
//			if (max <= ar[j][i]) {
//				max = ar[j][i];
//			}
//	}
//	return max;
//}
//void print_all(double ar[][5], int r)
//{
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%-4.2lf	", ar[i][j]);               //��һ��
//		}
//		printf("\n");
//	}
//
//	for ( int i = 0; i < r; i++)
//	{
//		printf("��%d��ƽ������%4lf\n", i+1, every_arr_average(ar, i)); //�ڶ���
//	}
//	printf("������ά�����ƽ��ֵ��%4.2lf\n", average(ar, r));    //������
//	printf("������ά��������ֵ��%4.2lf\n", max(ar, r));
//
//}
//int main()
//{
//	int i = 0;
//	double arr[3][5];
//	double avera[3];
//	for ( i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = input_lf();
//		}
//		printf("�����������Ԫ��\n");
//	}
//	for ( i = 0; i < 3; i++)
//	{
//		avera[i] = every_arr_average(arr, i);
//	}
//	print_all(arr,3);
//
//	return 0;
//}
//14���Ա䳤������Ϊ�����βΣ���ɱ����ϰ13��
//#include <stdio.h>
//double input_lf()
//{
//	double input = 0.0;
//	scanf("%lf", &input);
//	return input;
//}
//double every_arr_average(int row, int cols, double ar[row][cols])
//{
//	double total = 0.0;
//	for (int i = 0; i < cols; i++)
//		total += ar[row][i];
//	return total / 5;
//}
//double average(int row, int cols, double ar[row][cols])
//{
//	double total = 0.0;
//	for (int j = 0; j < row; j++) {
//		for (int i = 0; i < cols; i++)
//			total += ar[j][i];
//	}
//	return total / 15;
//}
//double max(int row, int cols, double ar[row][cols])
//{
//	double max = 0.0;
//	for (int j = 0; j < row; j++) {
//		for (int i = 0; i < cols; i++)
//			if (max <= ar[j][i]) {
//				max = ar[j][i];
//			}
//	}
//	return max;
//}
//void print_all(int row, int cols, double ar[row][cols])
//{
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < cols; j++) {
//			printf("%-4.2lf	", ar[i][j]);               //��һ��
//		}
//		printf("\n");
//	}
//
//	for ( int i = 0; i < row; i++)
//	{
//		printf("��%d��ƽ������%4lf\n", i + 1, every_arr_average(i, cols, ar)); //�ڶ���
//	}
//	printf("������ά�����ƽ��ֵ��%4.2lf\n", average(row, cols, ar));  //������
//	printf("������ά��������ֵ��%4.2lf\n", max(row, cols, ar));
//
//}
//int main()
//{
//	int i = 0;
//	double arr[3][5];
//	double avera[3];
//	for ( i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = input_lf();
//		}
//		printf("�����������Ԫ��\n");
//	}
//	for ( i = 0; i < 3; i++)
//	{
//		avera[i] = every_arr_average(3, 5, arr);
//	}
//	print_all(3, 5, arr);
//
//	return 0;
//}
