#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*第五天，学循环，上来先来个经典笑话谷仓题目，国王奖励学者，学者要求64个格子，
然后从第一个格子开始放2^0个谷粒，第二个格子2^1个，放到2^63个国王直接裂开，地球上的粮食都不够他放的*/
//int main()
//{
//	const int squares = 64;
//	const double crop = 2E16;/*大约总产的谷粒数量*/
//	double current, total;
//	int count = 1;
//
//	printf("第n格    谷粒       谷粒     ");
//	printf("世界谷粒\n");
//	printf("        增加量      总量     ");
//	printf(" 占有率\n");
//	total = current = 1.0;
//	while (count<=squares)
//	{
//		printf("%3d %11.2e %10.2e %10.2e\n", count,current,total,total/crop);
//		current = current * 2;
//		total = total + current;
//		count++;
//	}
//	return 0;
//}

/*这一章内容比较少啊，我还以为要学循环了，就是学了一些运算符*/
//轻松收官

/*关于递加递减符号*/
//#define FORMAT "%s! C is cool!\n"
//int main()
//{
//	int num = 10;
//	printf(FORMAT, FORMAT);
//	printf("%d\n", ++num);
//	printf("%d\n", num++);
//	printf("%d\n", num--);
//	printf("%d\n", num);
//
//	return 0;
//}

/*打印字母a-g*/
//#define G 'g'
//int main()
//{
//	char A = 'a';
//	while (A<=G)
//	{
//		printf("%5c\n", A);
//		A++;
//	}
//	return 0;
//}

//编程练习 
//1．编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。使用＃define或const创
//建一个表示60的符号常量或const变量。通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
// 
//#define mins_to_hours 60
//int main()
//{
//	int hours = 0;
//	int mins=0;
//	printf("请输入分钟数:\n输入0或负数退出\n");
//	scanf("%d", &mins);
//	while (mins>0)
//	{
//		hours = mins / mins_to_hours;
//		printf("The time was %dH%dMins\n",hours,mins%mins_to_hours);
//		printf("请输入分钟数:\n输入0或负数退出\n");
//		scanf("%d", &mins);
//	}
//	return 0;
//}
// 
// 
//2．编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和15）。
//要求打印的各值之间用一个空格、制表符或换行符分开。
//
//int main()
//{
//	int input = 0;
//	int output = 0;
//	printf("请输入一个整数:\n");
//	scanf("%d", &input);
//	output = input + 10;
//	while (input<=output)
//	{
//		printf("%d\n", input);
//		input++;
//	}
//	return 0;
//}
// 
// 
//3．编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成2周4天。以下面的格式显示结果：
//18 days are 2 weeks, 4 days.
//通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或—20），循环结束。
//
//int main()
//{ 
//	const int days_to_weeks = 7;
//	int days=0;
//	int weeks = 0;
//	printf("请输入天数(0或负数退出):\n");
//	scanf("%d", &days);
//	while (days>0)
//	{
//		printf("转换为周天则是%d周%d天\n",days/days_to_weeks,days%days_to_weeks);
//		printf("请输入天数(0或负数退出):\n");
//		scanf("%d", &days);
//	}
//	printf("done!");
//	return 0;
//}
// 
// 
//4．编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英尺、英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身高，
//直到用户输入一个非正值。其输出示例如下：
//Enter a height in centimeters:
// 182
//182.0 cm = 5 feet, 11.7 inches
//Enter a height in centimeters(<= 0 to quit) :
// 168.7 
// 168.7 cm = 5 feet, 6.4 inches
//Enter a height in centimeters(<= 0 to quit) :
// 0 
// bye
//
//int main()
//{
//	const float inches_to_cm= 2.54;
//	const float feet_to_cm = 30.48;
//	float height = 0.0;
//	float inches = 0.0;
//	int feet = 0;
//	printf("Enter a height in centimeters:\n");
//	scanf("%f", &height);
//	while (height>0)
//	{
//		feet = height / feet_to_cm;
//		inches = (height - feet * feet_to_cm)/inches_to_cm;
//		printf("%.1fcm=%dfeet,%.1f inches\n", height, feet, inches);
//		printf("Enter a height in centimeters(<= 0 to quit) :\n");
//		scanf("%f", &height);
//	}
//	printf("bye");
//	return 0;
//}
// 
// 
//5．修改程序addemup．c（程序清单5.13），你可以认为addemup．c是计算20天里赚多少钱的程序
//（假设第1天赚＄1、第2天赚＄2、第3天赚＄3，以此类推）。修改程序，使其可以与用户交互，根据用户输入的数进行计算（即，用读入的一个变量来代替20）。
// 
//int main()
//{
//	int sum = 0;
//	int count = 0;
//	printf("Enter your days.\n");
//	scanf("%d", &count);
//	while(count>0)
//	{
//		while (count> 0)
//		{
//			sum = sum+ count--;
//		}
//		printf("total money was $%d\n", sum);
//		count = 0;sum = 0;
//		printf("Enter your days.\n");
//		scanf("%d", &count);
//	}
//
//	printf("program exit!\n");
//	return 0;
//}
//
// 
//6．修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚＄1、第2天赚＄4、第3天赚S9，以此类推，这看起来很不错）。C没有平方函数，但是可以用n＊n来表示n的平方。
// 
//int main()
//{
//	int sum = 0;
//	int count = 0;
//	printf("Enter your days.\n");
//	scanf("%d", &count);
//	while(count>0)
//	{
//		while (count> 0)
//		{
//			sum = sum+ count*count--;  /*在这加一个count就完事了*/
//		}
//		printf("total money was $%d\n", sum);
//		count = 0;sum = 0;
//		printf("Enter your days.\n");
//		scanf("%d", &count);
//	}
//
//	printf("program exit!\n");
//	return 0;
//}
// 
// 
//7．编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。自己设计一个函数计算并打印立方值。main（）函数要把用户输入的值传递给该函数。
// 
//double function(double n);
//int main(void)
//{
//	double input=0;
//	printf("请输入一个double类型的数字\n");
//	scanf("%lf", &input);
//	printf("该数字的立方值为:%lf",function(input));
//	return 0;
//}
//
//double function(double n)
//{
//	return n * n * n;
//}
//
//8．编写一个程序，显示求模运算的结果。
//把用户输入的第1个整数作为求模运算符的第2个运算对象，该数在运算过程中保持不变。
//用户后面输入的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例如下：
//This program computes moduli.
//Enter an integer to serve as the second operand : 256 
//Now enter the first operand : 438
//438 % 256 is 182
//Enter next number for first operand(<= 0 to quit) : 1234567 
//1234567 % 256 is 135
//Enter next number for first operand(<= 0 to quit) : 0
//Done
// 
//int main()
//{
//	int first=0;
//	int second = 0;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand :");
//	scanf("%d", &second);
//	printf("Now enter the first operand :");
//	scanf("%d", &first);
//	while (first > 0)
//	{
//		printf("%d %% %d is %d\n", first, second, first % second);
//		printf("Enter next number for first operand(<= 0 to quit) :");
//		scanf("%d", &first);
//	}
//	printf("Done");
//	return 0;
//}
//
// 
//9．编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数Temperatures（）。
//该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示3种温度。要使用不同的温标来表示这3个温度值。
//下面是华氏温度转摄氏温度的公式：
//摄氏温度＝5.0／9.0＊（华氏温度—32.0）
//开氏温标常用于科学研究，0表示绝对零，代表最低的温度。
// 下面是摄氏温度转开氏温度的公式：开氏温度＝摄氏温度＋273.16
//Temperatures（）函数中用const创建温度转换中使用的变量。
// 在main函数中使用一个循环让用户重复输入温度，当用户输入q或其他非数字时循环结束。
//scanf函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。可以使用==运算符将scanf（）的返回值和1作比较，测试两值是否相等。
//
//double Temperatures(double Fahrenheit)
//{
//	const double F_to_C = 32.0;/*华氏度转摄氏度*/
//	const double C_to_K = 273.16;/*摄氏度转开氏度*/
//	double Celsius, Kelvin;
//	Celsius = 5.0 / 9.0 * (Fahrenheit - F_to_C);
//	Kelvin = Celsius + C_to_K;
//	printf("华氏度为:%.2fF\n转换为开氏度:%.2fK\n转换为摄氏度:%.2fC\n", Fahrenheit, Kelvin, Celsius);
//}
//
//int main()
//{
//	printf("华氏度转化，输入非数字即可退出\n");
//	double input = 0;
//	printf("输入华氏度,\n");
//	while (scanf("%lf", &input)==1)
//	{
//		printf("开始运算\n");
//		Temperatures(input);
//	}
//	return 0;
//}


/*这一章的练习有点难，属实是学到新东西了，循环的程序确实容易把人搞晕，特别是嵌套之后，最后一题给我恶心坏了
没想到有个网站的温度转化有毛病，搞的我检查了好几遍代码，while循环搭配scanf函数真的是让我学到了，就是下面这个，属实是题目没读懂，看懵逼了，开始上强度了冲冲冲，期待后面学的东西*/
//////////////scanf函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。可以使用==运算符将scanf（）的返回值和1作比较，测试两值是否相等。//////////////////////////
