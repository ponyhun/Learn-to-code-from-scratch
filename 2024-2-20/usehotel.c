//#define _CRT_SECURE_NO_WARNINGS
////这个程序用来计算房费，作为主程序
//#include<stdio.h>
//#include "hotel.h"//包含这个头文件就不需要对其中声明过的函数进行声明了
//int main()
//{
//	int nights;
//	double hotel_rate;
//	int code;
//	while ((code=menu())!=QUIT)
//	{
//		switch (code)
//		{
//		case 1:
//			hotel_rate = HOTEL1;
//			break;
//		case 2:
//			hotel_rate = HOTEL2;
//			break;
//		case 3:
//			hotel_rate = HOTEL3;
//			break;
//		case 4:
//			hotel_rate = HOTEL4;
//			break;
//		default:
//			hotel_rate = 0.0;
//			printf("错误\n");
//			break;
//		}
//		nights = getnights();
//		showprice(hotel_rate, nights);
//	}
//	printf("bye!");
//	return 0;
//}