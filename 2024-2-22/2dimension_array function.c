//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows);     /*只在第二个括号填常量是因为ar和第一个框框用来表示数组的形式，第二个框用来代表数组内部的元素是数组*/
//void sum_cols(int [][COLS], int );				/*可以省略形参的名字，到时候代入函数，创建函数的时候补上也不迟*/
//int sum2d(int(*ar)[COLS], int rows);			/*     (*ar)和ar[]是一个意思,数组名所代表的就是地址，而想要以指针做参数的时候也是加个星号就行*/
//int main()
//{
//	int junk[3][4] = {
//		{2,4,6,8},
//		{3,5,7,9},
//		{12,10,8,6}
//	};
//	sum_rows(junk, ROWS);
//	sum_cols(junk, ROWS);
//	printf("Sum of all elements=%d\n", sum2d(junk, ROWS));
//	return 0;
//}
//
//void sum_rows(int ar[][COLS], int rows)
//{
//	int r = 0, c = 0;
//	int total=0;
//	for ( r = 0; r < rows; r++)
//	{
//		total = 0;
//		for (c = 0; c < COLS; c++)
//		{
//			total += ar[r][c];
//		}
//		printf("第%d行,当r=%d总数为%d\n", r+1,r, total);
//		
//	}
//}
//
//void sum_cols(int ar[][COLS], int rows)
//{
//	int r = 0, c = 0;
//	int total = 0;
//	for ( c = 0; c < COLS; c++)
//	{
//		total = 0;
//		for(r=0;r<rows;r++)
//		{
//			total += ar[r][c];
//		}
//		printf("第%d列,当c=%d时总数为%d\n", c + 1, c, total);
//	}
//}
//
//int sum2d(int(*ar)[COLS], int rows)
//{
//	int total=0;
//	int r = 0, c = 0;
//	for ( r = 0; r < rows; r++)
//	{
//		for (c = 0;c < COLS;c++)
//			total += ar[r][c];
//	}
//	return total;
//}