#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*10号是大年初一，今天11号过年总算结束了，忙了好多事啊，现在继续来学习，第六章讲循环讲得更加细化一些，while循环我已经比较熟了
这里有个赋值bool有点意思，直接写一遍*/
//int main()
//{
//	long num=0;
//	long sum = 0L;
//	_Bool input_is_good;/*创建一个布尔变量*/
//	printf("please enter an interage to be summed");
//	printf("(q to quit):");
//	input_is_good = (scanf("%ld",&num)==1);/*scanf函数如果输入数字则会返回1，此时1==1则会使得变量被赋值为true，输入字母返回0,0!=1使得变量赋值false*/
//	while (input_is_good)/*直接用来做判断*/
//	{
//		sum = sum + num;
//		printf("please enter next interage(q to quit):");
//		input_is_good = (scanf("%ld", &num)==1);
//	}
//	printf("Those interage sum to %ld.\n",sum);
//	return 0;
//}

///*嵌套for循环*/
//#define ROWS 6
//#define CHARS 10
//int main()
//{
//	int row;
//	char ch;
//	for(row=0;row<ROWS;row++)/*执行6次*/
//	{
//		for(ch='A';ch<('A'+CHARS);ch++)/*执行10次*/
//		{
//			printf("%c", ch);/*打印a到a+10的字母*/
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//for循环中使用数组
//#define	SIZE 10
//#define PAR 72/*标准分*/
//int main()
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//	printf("Enter %d golf scores:\n", SIZE);/*输入size个高尔夫分数*/
//	for (index = 0;index < SIZE;index++)
//	{scanf("%d", &score[index]);}/*从0到9一一对应*/
//	printf("The score read in are as follow:\n");
//	for (index = 0;index < SIZE;index++)
//	{printf("%5d", score[index]);}/*用来验证输入是否正确*/
//	printf("\n");
//	for (index = 0;index < SIZE;index++)
//	{
//		sum += score[index];/*总分*/
//	}
//	average = (float)sum / SIZE;	
//	printf("10个球的总分=%d 平均分=%.2f\n", sum, average);
//	printf("差点=%.0f", average - PAR);
//	return 0;
//}

/*编程练习*/
//1.编写一个程序，创建一个包含26个元素的数组，并在其中存储26个小写字母。然后打印数组的所
//有内容.
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
//2．使用嵌套循环，按下面的格式打印字符：
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
//3．使用嵌套循环，按下面的格式打印字母：
//F
//FE 
//FED
//FEDC
//FEDCB 
//FEDCBA
//注意：如果你的系统不使用ASCII或其他以数字顺序编码的代码，可以把字符数组初始化为字母表中的字母：
//char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//然后用数组下标选择单独的字母，例如lets［0］是＇A＇，等等。
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
//4．使用嵌套循环，按下面的格式打印字母：
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
//	return 0;                                          /*这一题有点难度说实话，写了我好久时间才摸索出来，技术又得到提升了*/
//}
//5．编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
//    A
//   ABA 
//  ABCBA
// ABCDCBA
//ABCDEDCBA
//要根据用户输入的字母来决定，上面是输入E的打印结果
//提示：用外层循环处理行，每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母
//
//int main()
//{
//	printf("请输入大写字母:\n");
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
//		}                                                                           /*这题目真的难啊，头都晕了*/
//		for ( j=1,ch-=2; j <i; j++,ch--)
//		{
//			printf("%C", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//6．编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。
//要求用户输入表格的上下限。使用一个for循环。
//
//int main()
//{
//	printf("请输入表格的上限\n");
//	int start, end, i;
//	scanf("%d", &start);
//	printf("请输入表格的下限\n");
//	scanf("%d", &end);
//	printf("数值   平方    立方\n");
//	for(;end<=start;end++)                                                   /*这么简单我是没想到的*/
//	{
//		printf("%d %8d %8d\n", end, end * end, end * end * end);
//	}
//	return 0;
//}                   
//7．编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。提示：strlen（）函数
//4章介绍过）可用于计算数组最后一个字符的下标。
//
//#include<string.h>
//int main()
//{
//	char ch[20];
//	printf("请输入单词\n");
//	scanf("%s", ch);
//	printf("你输入的单词是:%s\n", ch);
//	printf("单词的字数为:%d\n", strlen(ch));
//	for (int i = strlen(ch) - 1;i >= 0;i--)
//	{
//		printf("%c", ch[i]);
//	}
//
//	return 0;
//}
//8．编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数
//字之前，程序应循环处理用户输入的每对值。
//
//int main()
//{
//	printf("请输入两个浮点数:(输入非数字退出)\n");
//	float m = 0.0f;
//	float n = 0.0f;
//	scanf("%f %f", &m, &n);
//	do
//	{
//		printf("两数之差除以两数相乘=%.2f\n", (m - n) / (m * n));
//		printf("请输入两个浮点数:(输入非数字退出)\n");
//	} while (scanf("%f %f",&m,&n)==2);
//
//	return 0;
//}
// 
// 
//9．修改练习8，使用一个函数返回计算的结果。
//
//float end(float x,float y)
//{
//	return (x - y) / (x * y);
//}
//int main()
//{
//	printf("请输入两个浮点数:(输入非数字退出)\n");
//	float m = 0.0f;
//	float n = 0.0f;
//	scanf("%f %f", &m, &n);
//	while (scanf("%f %f", &m, &n) == 2)
//	{
//		printf("两数之差除以两数相乘=%.2f\n", end(m, n));
//		printf("请输入两个浮点数:(输入非数字退出)\n");
//	}
//	printf("程序已退出");
//	return 0;
//}
// 
// 
//10．编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有
//的平方和，并显示计算结果。然后程序继续提示用户输入上限和下限整数，
//并显示结果，直户输入的上限整数等于或小于下限整数为止。程序的运行示例如下：
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
//	printf("请输入一对下限和上限整数:");
//	scanf("%d %d", &low, &up);
//	while (low < up)
//	{
//		for (int i = low; i <= up;i++)
//		{
//			sum += i * i;
//		}
//		printf("从下限平方 %d 到上限平方 %d 其中上下限之间所有整数的平方和为 %d\n", low * low, up * up, sum);
//		sum = 0;
//		printf("请输入下一对数字:");
//		scanf("%d %d", &low, &up);
//	}
//	printf("Done");
//	return 0;
//}
// 
// 
//11．编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
//
//int main()
//{
//	int arr[8];
//	int i = 0;
//	printf("请输入8个整数:\n");
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
//12．考虑下面两个无限序列：
//1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ...
//1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...
//编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1相乘得-1，偶数
//-1相乘得1。让用户交互地输入指定的次数，当用户输入0或负值时结束输入。
//查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？
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
//	printf("请输入程序运作次数");
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
//		printf("再输入程序运作次数:");
//		scanf("%d", &input);
//	}
//	
//	return 0;
//}
// 
// 
//13．编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。
//使用for循环设置数组元素的值，使用do while循环显示数组元素的值。
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
//14．编写一个程序，创建两个包含8个元素的double类型数组，使用循环提示用户为第一个数组输入8个值。
//第二个数组元素的值设置为第一个数组对应元素的累积之和。
//例如，第二个数组的第4个元素的值是第一个数组前4个元素之和，
//第二个数组的第5个元素的值是第一个数组前5个元素之和（用嵌套循环可以完成，
//但是利用第二个数组的第5个元素是第二个数组的第4个元素与第一个数组的第5个元素之和，只用一个循环就能完成任务，不需要使用嵌套循环）。
//最后，使用循环显示两个数组的内容，第一个数组显示成一行，第二个数组显示在第一个数组的下一行，
//而且每个元素都与第一个数组各元素相对应。
//
//int main()
//{
//	double arr1[8], arr2[8];
//	printf("请输入8个值\n");
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
//15．编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入存储在char类型的数组中，
//假设每行字符不超过255.回忆一下根据%c转换说明，scanf函数一次只能从输
//入中读取一个字符，而且在用户按下Enter键时scanf（）函数会生成一个换行字符（＼n）。
//
//#include<string.h>
//int main()
//{
//	char ch[256];
//	int i = 0;
//	do
//	{
//		scanf("%c", &ch[i]);
//	} while (ch[i]!='\n' && ++i);                       /*牛的，学到了*/
//	printf("倒过来:\n");                         
//	for  (i--; i>=0 ;i--)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}
// 
// 
//16．Daphne以10％的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10％）。
//Deirdre以%5的复合利息投资了100美元（也就是说，利息是当前余额的%5，包含之前的利息）。编写一个程序，
//计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
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
//		}                                                       /*看了参考书才发现把程序写复杂了，根本不需要嵌套的*/
//		for (int i = 0; i < years; i++)
//		{
//			Deir += Deir * 0.05;
//		}
//		years++;
//	}
//	printf("投资年限为%d\n", years);
//	printf("Daphne的投资额为%f\n", Daph);
//	printf("Deirdre的投资额为%f", Deir);
//	return 0;
//}
// 
// 
//17.Chuokie Lucky 赢得了100万美元（税后），他把奖金存入年利率8％的账户。在每年的最后一天。
//取出10万美元。编写一个程序计算多少年后会取完所有的钱。
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
//	printf("%d年后取完所有钱\n", years);
//	return 0;
//}
// 
//
//18. Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长。
//第1周少1个朋友，剩下的朋友数量翻倍；第2周少2个，剩下的翻倍，一般
//而言，第N周少了N个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示Rabnud博士每
//周的朋友数量。该程序一直运行，直到超过邓巴数。邓巴数是粗略估算一个人
//在社交圈中有稳定关系的成员的最大值，该值大约是150。
//
//int main()
//{
//	int friend = 5;
//	int week = 0;
//	for ( week = 1; friend < 150; week++)
//	{
//		friend -= week;
//		friend *= 2;
//		printf("第%d周少了%d个朋友，剩下的朋友翻倍后数量为%d\n", week, week,friend);
//	}
//	return 0;
//}


//后面的题目咋都这么简单，学这一章花了两天，主要是题目确实有些难度，今天2月13日了，这些题目一下就做完了
