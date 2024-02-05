#define _CRT_SECURE_NO_WARNINGS
/*今天是二月四日，前几天吃酒席加上打刀塔懈怠了几天，今天要把状态捡回来了，顺带一提今天好冷啊，两三摄氏度左右，寒冬会让人懈怠，但也会让我捡起学习
不说了开始学习*/
#include<stdio.h>
#include<limits.h>
//#define PAGES 959
/*字符修饰*/
//int main()
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);/*字段宽度为10*/
//	printf("*%-10d*\n", PAGES);/*字段宽度也为10，但负号要求数字在左边*/
//	return 0;
//}

/*浮点型修饰*/
//int main()
//{
//	const double rent = 3852.99;  /*const修饰的只读变量*/
//	printf("*%f*\n", rent);
//	printf("*%e*\n", rent);
//	printf("*%4.2f*\n", rent);
//	printf("*%3.1f*\n", rent);
//	printf("*%10.3f*\n", rent);
//	printf("*%10.3e*\n", rent);
//	printf("*%+4.2f*\n", rent);
//	printf("*%010.2f*\n", rent);/*用0填充打印值前面以达到字段要求*/
//
//	return 0;
//}


/*strlen函数，用来求字符串的长度*/
//#include<string.h>
//#define PRAISE "You are an extrordinary begin."
//int main()
//{
//	char name[40];
//	printf("What's your name");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));/*你的名字占用了多少个记忆单元*/
//	printf("The phrase of praise has %zd letters", strlen(PRAISE));/*赞美词占用了多少字母*/
//	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));/*和记忆单元*/
//	return 0;
//	
//}


/*星号*的修饰作用*/
//int main()
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	printf("请输入你的字段宽度:\n");
//	scanf("%d", &width);
//	printf("数字将被输出为:%*d\n",width,number);/*第一个星号代表width，d代表number的输出形式*/
//	printf("现在输入你的宽度和精确程度:\n");
//	scanf("%d %d", &width, &precision);
//	printf("重量被输出为:%*.*f\n", width, precision, weight);
//	printf("结束!\n");
//	return 0;
//}

/*第二个作用是跳过输入项*/
//int main()
//{
//	int n;
//	printf("输入三个整数:\n");
//	scanf("%*d %*d %d", &n);
//	printf("%d", n);
//	return 0;
//}
//
//#define BOOK "war and peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80;
//	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
//	printf("That is %.0f%% of list", percent);
//	return 0;
//}


/*编程练习*/
//1．编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来。
// 
//int main()
//{
//	char first_name[20];
//	char last_name[20];
//	printf("请输入你的名:\n");
//	scanf("%s",first_name);
//	printf("请输入你的姓\n");
//	scanf("%s",last_name);
//	printf("%s,%s",first_name,last_name);
//	return 0;
//}
// 
// 
//2．编写一个程序，提示用户输入名字，并执行以下操作：
//a.打印名字，包括双引号；
//b．在宽度为20的字段右端打印名字，包括双引号；
//c．在宽度为20的字段左端打印名字，包括双引号；
//d．在比姓名宽度宽3的字段中打印名字。
// 
//#include<string.h>
//int main()
//{
//	char name[20];
//	printf("请输入你的名字:\n");
//	scanf("%s", name);
//	int width = strlen(name);
//	printf("\"%20s\"\n",name);
//	printf("\"%-20s\"\n", name);
//	printf("\"%*s\"\n", width + 3, name);
//	return 0;
//}
// 
// 
//3．编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：
//a. The input is 21.3 or 2.1e+001. 
//b. The input is +21.290 or 2.129E+001.
// 
//int main()
//{
//	float input;
//	scanf("%f", &input);
//	printf("The input is %.1f or %.1e\n", input, input);
//	printf("The input is %+.3f or %.3E\n", input, input);
//	return 0;
//}
// 
// 
//4．编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
//Dabney, you are 6.208 feet tall
//使用float类型，并用／作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。
//// 
//int main()
//{
//	char name[20];
//	float height;
//	printf("请输入你的身高(单位:cm）和姓名:\n");
//	scanf("%f %s", &height, name);
//	printf("%s,你的身高是%.2f米\n", name, height / 100);
//	return 0;
//}
// 
// 
//5．编写一个程序，提示用户输入以兆位每秒（Mb／s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
//程序中应计算文件的下载时间。注意，这里1字节等于8位。使用float类型，并用／作为除号。
//该程序要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字：
//At 18.12 megabits per second, a file of 2.20 megabytes 
//downloads in 0.97 seconds.
// 
//int main()
//{
//	float speed,file_size, times;
//	printf("请输入你的下载速度，单位(Mb/s):\n");
//	scanf("%f", &speed);
//	printf("请输入下载文件的大小,单位(MB):\n");
//	scanf("%f", &file_size);
//	times = file_size / speed * 8;
//	printf("下载速度%.2fMb/s,文件大小%.2fMB\n", speed, file_size);
//	printf("下载时间剩余%.2fs\n", times);
//	return 0;
//}


//6．编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
//字母数要与相应名和姓的结尾对齐，如下所示：
// 
//Melissa Honeybee 
//      7        8
//接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
//Melissa Honeybee
//7       8
//#include<string.h>
// int main()
// {
//	 char name[20], surname[20];
//	 printf("请输入你的名\n");
//	 scanf("%s", name);
//	 printf("请输入你的姓\n");
//	 scanf("%s", surname);
//	 int namelength = strlen(name);
//	 int surnamelength = strlen(surname);
//	 printf("%s %s\n", name, surname);
//	 printf("%*d %*d\n", namelength, namelength, surnamelength, surnamelength);
//	 printf("%s %s\n", name, surname);
//	 printf("%-*d %-*d", namelength, namelength, surnamelength, surnamelength);
//	 return 0;
// }

//7．编写一个程序，将一个double类型的变量设置为1.0／3.0，一个float类型的变量设置为1.0／3.0。
//分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
//程序中要包含float．h头文件，并显示FLT＿DIG和DBL＿DIG的值。1.0／3.0的值与这些值一致吗？
// 
//#include<float.h>
//int main()
//{
//	double a = 1.0 / 3.0;
//	float b = 1.0 / 3.0;
//	printf("%lf %f\n", a, b);
//	printf("%.12lf %.12f\n", a, b);
//	printf("%.16lf %.16f\n",a,b);
//	printf("float类型最多能保留%d位有效数字， double类型最多能保留%d位数字\n", FLT_DIG,DBL_DIG);
//	return 0;
//}

//8．编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。
//接下来，使用1加仑大约3.785升，1英里大约为1.609千米，
//把单位是英里／加仑的值转换为升／100公里（欧洲通用的燃料消耗表示法），并显示结果，
//显示小数点后面1位数字。
//注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。
//使用＃define 创建符号常量或使用const 限定符创建变量来表示两个转换系数。
//
//int main()
//{
//	const float gallon_per_liter = 3.785f;
//	const float mile_per_km = 1.609f;
//	float mileage, oil_consume,mileage_per_gallon;
//	printf("请输入你的里程(英里)和耗油量(加仑)\n");
//	scanf("%f %f", &mileage, &oil_consume);
//	mileage_per_gallon = mileage / oil_consume;
//	printf("美国测量：每加仑汽油行驶的英里数:%.1f英里\n",mileage_per_gallon);
//	printf("欧洲测量：每一百公里所消耗的汽油升数:%.1fL\n",(oil_consume*100*gallon_per_liter)/(mileage*mile_per_km));
//	return 0;
//}
 

/*两天学一节这个速度，今天是2024年2月5日，最后一题小学数学题给我卡了，原因是没有用笔和纸脑子都转不动了，有点搞笑了，这一节学的基本上都是打印和输入
感觉比较好用的就是strlen函数了，明天继续努力*/