#define _CRT_SECURE_NO_WARNINGS
//
//1.修改程序清单10.7的rain.c程序，用指针进行计算（仍然要声明并初始化数组）。
//
/*rain.c  program*/
//#include<stdio.h>
//#define MONTHS 12							/*10.7的rain.c*/
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
//	const float(*ptr)[MONTHS] = rain;                               /*我真服了，这么简单，这题干完全是镐子，浪费好多时间*/
//	printf("YEAR	RAINFALL(inches)\n");                            /*直接说用指针表示法来表示数组不就得了*/
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


//2.编写一个程序，初始化一个double类型的数组，然后把该数组的内容拷贝至3个其他数组中（在main（）中声明这4个数组）。
//使用带数组表示法的函数进行第1份拷贝。
//使用带指针表示法和指针递增的函数进行第2份拷贝。
//把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。
//第3个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指针。也就是说，给定以下声明，则函数调用如下所示：
//double source［5］ ＝（1.1， 2.2，3.3，4.4，5.5｝；
//double targetl［5］；
//double target2 ［5］；
//double target3［5］；
//copy_arr（target1， source， 5）；
//copy_ptr（target2， source， 5）；
//copy_ptrs（target3， source， source ＋ 5）；
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


//3.编写一个函数，返回存储在int类型数组中的最大值，并在一个简单的程序中测试该函数。
//4.编写一个函数，返回存储在double类型数组中最大值的下标，并在一个简单的程序中测试该函数。
//5.编写一个函数，返回存储在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。
//6.编写一个函数，把 double类型数组中的数据倒序排列，并在一个简单的程序中测试该函数。
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
//	if (n%2!=0)												/*奇数情况下，序列是双数，此时(0+n-1)/2=n/2-0.5*/
//	{
//		for (int i = 0, j = n;i < j;i++)
//		{
//			n--;
//			if ((i + n)/2== j / 2)								/*自动截断0.5*/
//			{
//				temp = ar[i];
//				ar[i] = ar[n];
//				ar[n] = temp;
//			}
//			if (i == n)
//				break;
//		}
//	}
//	else													/*偶数情况下,序列是单数,此时(0+n-1)/2=n/2-1,左边每次计算都被截断0.5*/
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
//	printf("max=%d\n", max(arr,4));       /*第三题*/
//	double arr_d[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
//	printf("max-index=%d\n", max_index(arr_d, 7));  /*第四题*/
//	printf("max-min=%.1lf\n", diff_max(arr_d, 7)); /*第五题*/
//	down(arr_d, 7);
//	printf("down={");
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%4.1lf",arr_d[i]);					/*第六题*/
//	}
//	printf("}\n");
//	return 0;
//}
//
//
//7.编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中
//（因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
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
//8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5个元素拷贝至内含3个元
//素的数组中。该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名数组大小，只需要是数组元素的地址和待处理元素的个数）。
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
//9．编写一个程序，初始化一个double类型的3x5二维数组，使用一个处理变长数组的函数将其复制至另一个二维数组中，还要编写一个以变长数组为形参的函数
// 以显示两个数组的内容，这两个函数应该能处理任意NXM数组（如果编译器不支持变长数组，就使用传统C函数处理Nx5的数组）
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
//10．编写一个函数，把两个数组中相对应的元素相加，然后把结果存储到第3个数组中。也就是说。
//如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数。
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


//11．编写一个程序，声明一个int类型的3x5二维数组，并用合适的值初始化它。该程序打印数组中的值，然后各值翻倍（即是原值的2倍），
//并显示出各元素的新值。编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。这两个函数都以函数名和行数作为参数。

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
//12．重写程序清单10.7的rain．c程序，把main（）中的主要任务都改成用函数来完成。
//13．编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
//（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。
//a．把用户输入的数据存储在3x5的数组中
//b．计算每组（5个）数据的平均值
//c.计算所有数据的平均值
//d．找出这15个数据中的最大值
//e.打印结果
//每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。
//完成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。
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
//			printf("%-4.2lf	", ar[i][j]);               //第一个
//		}
//		printf("\n");
//	}
//
//	for ( int i = 0; i < r; i++)
//	{
//		printf("第%d组平均数是%4lf\n", i+1, every_arr_average(ar, i)); //第二个
//	}
//	printf("整个二维数组的平均值是%4.2lf\n", average(ar, r));    //第三个
//	printf("整个二维数组的最大值是%4.2lf\n", max(ar, r));
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
//		printf("请输入下五个元素\n");
//	}
//	for ( i = 0; i < 3; i++)
//	{
//		avera[i] = every_arr_average(arr, i);
//	}
//	print_all(arr,3);
//
//	return 0;
//}
//14．以变长数组作为函数形参，完成编程练习13。
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
//			printf("%-4.2lf	", ar[i][j]);               //第一个
//		}
//		printf("\n");
//	}
//
//	for ( int i = 0; i < row; i++)
//	{
//		printf("第%d组平均数是%4lf\n", i + 1, every_arr_average(i, cols, ar)); //第二个
//	}
//	printf("整个二维数组的平均值是%4.2lf\n", average(row, cols, ar));  //第三个
//	printf("整个二维数组的最大值是%4.2lf\n", max(row, cols, ar));
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
//		printf("请输入下五个元素\n");
//	}
//	for ( i = 0; i < 3; i++)
//	{
//		avera[i] = every_arr_average(3, 5, arr);
//	}
//	print_all(3, 5, arr);
//
//	return 0;
//}
