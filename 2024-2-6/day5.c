#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*�����죬ѧѭ������������������Ц���Ȳ���Ŀ����������ѧ�ߣ�ѧ��Ҫ��64�����ӣ�
Ȼ��ӵ�һ�����ӿ�ʼ��2^0���������ڶ�������2^1�����ŵ�2^63������ֱ���ѿ��������ϵ���ʳ���������ŵ�*/
//int main()
//{
//	const int squares = 64;
//	const double crop = 2E16;/*��Լ�ܲ��Ĺ�������*/
//	double current, total;
//	int count = 1;
//
//	printf("��n��    ����       ����     ");
//	printf("�������\n");
//	printf("        ������      ����     ");
//	printf(" ռ����\n");
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

/*��һ�����ݱȽ��ٰ����һ���ΪҪѧѭ���ˣ�����ѧ��һЩ�����*/
//�����չ�

/*���ڵݼӵݼ�����*/
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

/*��ӡ��ĸa-g*/
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

//�����ϰ 
//1����дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣ʹ�ã�define��const��
//��һ����ʾ60�ķ��ų�����const������ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
// 
//#define mins_to_hours 60
//int main()
//{
//	int hours = 0;
//	int mins=0;
//	printf("�����������:\n����0�����˳�\n");
//	scanf("%d", &mins);
//	while (mins>0)
//	{
//		hours = mins / mins_to_hours;
//		printf("The time was %dH%dMins\n",hours,mins%mins_to_hours);
//		printf("�����������:\n����0�����˳�\n");
//		scanf("%d", &mins);
//	}
//	return 0;
//}
// 
// 
//2����дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����10���������������磬�û�����5�����ӡ5��15����������������5��15����
//Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���
//
//int main()
//{
//	int input = 0;
//	int output = 0;
//	printf("������һ������:\n");
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
//3����дһ��������ʾ�û�����������Ȼ����ת�������������������磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
//18 days are 2 weeks, 4 days.
//ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��20����ѭ��������
//
//int main()
//{ 
//	const int days_to_weeks = 7;
//	int days=0;
//	int weeks = 0;
//	printf("����������(0�����˳�):\n");
//	scanf("%d", &days);
//	while (days>0)
//	{
//		printf("ת��Ϊ��������%d��%d��\n",days/days_to_weeks,days%days_to_weeks);
//		printf("����������(0�����˳�):\n");
//		scanf("%d", &days);
//	}
//	printf("done!");
//	return 0;
//}
// 
// 
//4����дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ�ߡ�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������ߣ�
//ֱ���û�����һ������ֵ�������ʾ�����£�
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
//5���޸ĳ���addemup��c�������嵥5.13�����������Ϊaddemup��c�Ǽ���20����׬����Ǯ�ĳ���
//�������1��׬��1����2��׬��2����3��׬��3���Դ����ƣ����޸ĳ���ʹ��������û������������û�����������м��㣨�����ö����һ������������20����
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
//6���޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬��1����2��׬��4����3��׬S9���Դ����ƣ��⿴�����ܲ�����Cû��ƽ�����������ǿ�����n��n����ʾn��ƽ����
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
//			sum = sum+ count*count--;  /*�����һ��count��������*/
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
//7����дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ���Լ����һ���������㲢��ӡ����ֵ��main��������Ҫ���û������ֵ���ݸ��ú�����
// 
//double function(double n);
//int main(void)
//{
//	double input=0;
//	printf("������һ��double���͵�����\n");
//	scanf("%lf", &input);
//	printf("�����ֵ�����ֵΪ:%lf",function(input));
//	return 0;
//}
//
//double function(double n)
//{
//	return n * n * n;
//}
//
//8����дһ��������ʾ��ģ����Ľ����
//���û�����ĵ�1��������Ϊ��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣
//�û�������������ǵ�1��������󡣵��û�����һ������ֵʱ����������������ʾ�����£�
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
//9����дһ������Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���Temperatures������
//�ú������������¶ȺͿ����¶ȣ�����С���������λ���ֵľ�����ʾ3���¶ȡ�Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ��
//�����ǻ����¶�ת�����¶ȵĹ�ʽ��
//�����¶ȣ�5.0��9.0���������¶ȡ�32.0��
//�����±곣���ڿ�ѧ�о���0��ʾ�����㣬������͵��¶ȡ�
// �����������¶�ת�����¶ȵĹ�ʽ�������¶ȣ������¶ȣ�273.16
//Temperatures������������const�����¶�ת����ʹ�õı�����
// ��main������ʹ��һ��ѭ�����û��ظ������¶ȣ����û�����q������������ʱѭ��������
//scanf�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�������ȡq�򲻷���1������ʹ��==�������scanf�����ķ���ֵ��1���Ƚϣ�������ֵ�Ƿ���ȡ�
//
//double Temperatures(double Fahrenheit)
//{
//	const double F_to_C = 32.0;/*���϶�ת���϶�*/
//	const double C_to_K = 273.16;/*���϶�ת���϶�*/
//	double Celsius, Kelvin;
//	Celsius = 5.0 / 9.0 * (Fahrenheit - F_to_C);
//	Kelvin = Celsius + C_to_K;
//	printf("���϶�Ϊ:%.2fF\nת��Ϊ���϶�:%.2fK\nת��Ϊ���϶�:%.2fC\n", Fahrenheit, Kelvin, Celsius);
//}
//
//int main()
//{
//	printf("���϶�ת������������ּ����˳�\n");
//	double input = 0;
//	printf("���뻪�϶�,\n");
//	while (scanf("%lf", &input)==1)
//	{
//		printf("��ʼ����\n");
//		Temperatures(input);
//	}
//	return 0;
//}


/*��һ�µ���ϰ�е��ѣ���ʵ��ѧ���¶����ˣ�ѭ���ĳ���ȷʵ���װ��˸��Σ��ر���Ƕ��֮�����һ����Ҷ��Ļ���
û�뵽�и���վ���¶�ת����ë��������Ҽ���˺ü�����룬whileѭ������scanf�������������ѧ���ˣ����������������ʵ����Ŀû���������±��ˣ���ʼ��ǿ���˳��壬�ڴ�����ѧ�Ķ���*/
//////////////scanf�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�������ȡq�򲻷���1������ʹ��==�������scanf�����ķ���ֵ��1���Ƚϣ�������ֵ�Ƿ���ȡ�//////////////////////////
