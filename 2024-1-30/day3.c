#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//今天学习有关16进制和8进制，虽然上学的时候学过，但用得很少，现在要用了，敲出来熟悉手感

//int main()//以10进制、8进制、16进制打印10进制数100.
//{
//	int x = 100;
//	printf("十进制100=%d；八进制100=%o；十六进制100=%x\n", x, x, x);
//	printf("十进制100=%d；八进制100=%#o；十六进制100=%#x\n", x, x, x);
//	return 0;
//} 
//
//不同的数据类型
//int main()
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 1234567890913;
//	printf("一个非负数=%u不是%d\n", un,un);
//	printf("更少存储的整型=%hd或者%d\n", end, end);
//	printf("更大存储空间更多的整型=%ld不是%hd\n", big, big);
//	printf("超大的整形数据是%lld而不是%ld\n", verybig, verybig);
//	return 0;
//}

//
///*可以显示字符的编号*/
//int main()
//{
//	char ch;
//	printf("请输入一个字符\n");
//	scanf("%c", &ch);
//	printf("字符 %c 的编号是 %d.\n", ch, ch);
//	return 0;
//}

#include<stdio.h>
//#include<inttypes.h>//支持可移植类型
//int main()
//{
//	int32_t me32; //me32是一个32位有符号整型变量
//	me32 = 45944945;
//	printf("首先，假设int32_t是有符号整型int:");
//	printf("me32=%d\n", me32);
//	printf("然后我们不要做任何假设\n");
//	printf("相反，使用一个来自inttyoes.h的\"宏（Marco）:\"");
//	printf("me32=%"PRId32"\n", me32);/*宏使得参数PRId32变成了字符"d",使用宏可以保证d的出现*/
//	return 0; 
//}

///*两种方式打印float的值*/
//int main()
//{
//	float aboat = 32000.0f;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%.1f可以被书写成%.1e\n", aboat, aboat);
//	printf("可以让一个十六进制的数%.1a,用2的幂的表示法来表示\n", aboat);
//	printf("%.1f能被书写成%.2e\n", abet, abet);
//	printf("%lf能被书写成/%le\n", dip, dip);
//	return 0;
//}

///*打印数据类型的大小*/
//int main()
//{
//	printf("int类型的大小是%zdbyte.\n", sizeof(int));
//	printf("char类型的大小是%zdbyte.\n", sizeof(char));
//	printf("long类型的大小是%zdbyte.\n", sizeof(long));
//	printf("long long类型的大小是%zdbyte.\n", sizeof(long long));
//	printf("double类型的大小是%zdbyte.\n", sizeof(double));
//	printf("long double类型的大小是%zdbyte.\n",
//		sizeof(long double));
//	return 0;
//}

//假设ch是char类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给ch（假设使用ASCII编码值）。
//int main()
//{
//	char ch = '\r';
//	printf("%d\n", ch);//转义序列
//	//char ch = 13;    十进制赋值
//	printf("%d\n", ch);
//	//char ch = '\15'; 八进制赋值
//	printf("%#o\n", ch);
//	//char ch = '\xd'; 十六进制赋值
//	printf("%#x\n", ch);
//	return 0;
//}
//

//今天这一章有点多了，编程练习还没做，31号再做了，到时候一并做在这个文件里边

//#include<float.h> /*浮点数的取值范围*/
//#include<limits.h>/*有符号整型的取值范围*/
////1．通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。
////
//int main()
//{
//	int big_int;
//	big_int = 2147483647;/*有符号整型数据最大值是2的31次方减1*/
//	printf("最大整型上溢1个数字=%d\n", big_int+1);/*整型上溢*/
//	printf("int的最大值=%ld\n", INT_MAX);
//	float big_float;
//	big_float =3.4e38;/*浮点数的最大值一般是3.4e38*/
//	printf("浮点型上溢=%f\n", big_float*10);/*浮点型上溢*/
//	printf("浮点型的最大值为\f\n", FLT_MAX);
//	float small_float;
//	small_float=10.0 / 3;
//	printf("浮点型下溢会造成输出少小数点后的数字%f\n", small_float);
//	return 0;
//}
// 
// 
//2．编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
//
//int main()
//{
//	int input=0;
//	scanf("%d", &input);
//	printf("%c\n", input);
//	return 0;
//}
// 
// 
//3．编写一个程序，发出一声警报，然后打印下面的文本：
//Startled by the sudden sound, Sally shouted,
//"By the Great Pumpkin, what was that!"
//int main()
//{
//	printf("\aStartled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"\n");
//	return 0;
//}
// 
// 
//4．编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。然后，如果系统支持，
//再打印成p记数法（即十六进制记数法）。按以下格式输出（实际显示的指数位数因系统而异）：
//Enter a floating - point value : 64.25
//fixed - point notation : 64.250000 
//exponential notation : 6.425000e+01
//p notation : 0x1.01p+6
//
//int main()
//{
//	float input;
//	printf("输入一个浮点数\n");
//	scanf("%f",&input);
//	printf("小数点形式：%f\n",input);
//	printf("指数形式：%e\n", input);
//	printf("p计数法：%a\n", input);
//	return 0;
//}
// 
// 
//5．一年大约有3.156e+7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
//
//#define sec_per_year 3.156e+7
//int main()
//{
//	float years, seconds;
//	printf("请输入你的年龄");
//	scanf("%f", &years);
//	seconds = years * sec_per_year;
//	printf("你的年龄是%.1f\n", years);
//	printf("同时你的年龄度过了%e秒", seconds);
//	return 0;
//}
//6. 1个水分子的质量约为3.0e-23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸
//脱数，并显示水分子的数量。
//
//#define water_per_mole 3.0e-23
//#define water_per_quart 950
//int main()
//{
//	float input, water;
//	printf("请输入水的重量:");
//	printf("(单位:夸脱)_____\b\b\b\b\b");
//	scanf("%f", &input);
//	water = input * water_per_quart / water_per_mole;
//	printf("水的夸脱数是%f", input);
//	printf("水分子的个数是%e", water);
//	return 0;
//}
// 
// 
//7. 1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（／英寸），然后以厘米为单位显示身高。
//
//#define inch_to_cm 2.54
//int main()
//{
//	float inch, cm;
//	printf("请输入你的身高(单位:英寸)___\b\b\b");
//	scanf("%f",&inch);
//	cm = inch * inch_to_cm;
//	printf("你的身高是%.2f厘米\n", cm);
//	return 0;
//}
// 
// 
//8．在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
//编写一个程序，提示用户输入杯数，
//并以品脱、盎司、汤勺、茶勺为单位显示等价容量，思考对于该程序，为何使用浮点类型比整数类型更合适？
//
//#define cup_to_pint 0.5
//#define cup_to_ounce 8
//#define cup_to_soup_spoon 16
//#define cup_to_tea_spoon 48
//int main()
//{
//	float cup;
//	printf("请输入杯数：___\b\b\b");
//	scanf("%f",&cup);
//	printf("你输入的杯数为%.3f\n",cup);
//	printf("等价于%.3f品脱\n", cup*cup_to_pint);
//	printf("等价于%.3f盎司\n", cup*cup_to_ounce);
//	printf("等价于%.3f汤勺\n", cup*cup_to_soup_spoon);
//	printf("等价于%.3f茶勺\n", cup*cup_to_tea_spoon);
//
//	return 0;
//}


//终于写完了，写了两个半小时，貌似用宏来做一种工具非常方便，16进制是这一章难点，主要表现在阅读上
//第三天日记就到这了