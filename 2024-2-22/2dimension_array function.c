//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows);     /*ֻ�ڵڶ��������������Ϊar�͵�һ�����������ʾ�������ʽ���ڶ������������������ڲ���Ԫ��������*/
//void sum_cols(int [][COLS], int );				/*����ʡ���βε����֣���ʱ����뺯��������������ʱ����Ҳ����*/
//int sum2d(int(*ar)[COLS], int rows);			/*     (*ar)��ar[]��һ����˼,������������ľ��ǵ�ַ������Ҫ��ָ����������ʱ��Ҳ�ǼӸ��Ǻž���*/
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
//		printf("��%d��,��r=%d����Ϊ%d\n", r+1,r, total);
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
//		printf("��%d��,��c=%dʱ����Ϊ%d\n", c + 1, c, total);
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