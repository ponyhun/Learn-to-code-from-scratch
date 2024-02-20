//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include "hotel.h"
////这个模块用来创建函数
//int menu()
//{
//	int code, status;
//	printf("\n%s%s\n", STARS, STARS);
//	printf("enter the number of the desired hotel:\n");
//	printf("1)牛马宾馆			2)人上人\n");
//	printf("3)神仙日子			4)无敌\n");
//	printf("5)quit\n");
//	printf("%s%s\n", STARS, STARS);
//	while ((status=scanf("%d",&code))!=1||(code<1||code>5))
//	{
//		if (status != 1)
//			scanf("%s");
//		printf("请输入1-5的整数\n");
//	}
//	return code;
//}
//
//int getnights()
//{
//	int nights;
//	printf("住几晚\n");
//	while (scanf("%d",&nights)!=1)
//	{
//		scanf("%s");
//		printf("请输入整数\n");
//	}
//	return nights;
//}
//
//void showprice(double rate,int night)
//{
//	int n;
//	double total = 0.0;
//	double factor = 1.0;
//	for ( n = 0; n <=night; n++,factor*=DISCOUNT)
//	{
//		total += rate * factor;
//	}
//	printf("total cost will be $%.2f.\n", total);
//}