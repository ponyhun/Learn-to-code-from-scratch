#define _CRT_SECURE_NO_WARNINGS
/*�����Ƕ������գ�ǰ����Ծ�ϯ���ϴ���и���˼��죬����Ҫ��״̬������ˣ�˳��һ�������䰡���������϶����ң�����������и������Ҳ�����Ҽ���ѧϰ
��˵�˿�ʼѧϰ*/
#include<stdio.h>
#include<limits.h>
//#define PAGES 959
/*�ַ�����*/
//int main()
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);/*�ֶο��Ϊ10*/
//	printf("*%-10d*\n", PAGES);/*�ֶο��ҲΪ10��������Ҫ�����������*/
//	return 0;
//}

/*����������*/
//int main()
//{
//	const double rent = 3852.99;  /*const���ε�ֻ������*/
//	printf("*%f*\n", rent);
//	printf("*%e*\n", rent);
//	printf("*%4.2f*\n", rent);
//	printf("*%3.1f*\n", rent);
//	printf("*%10.3f*\n", rent);
//	printf("*%10.3e*\n", rent);
//	printf("*%+4.2f*\n", rent);
//	printf("*%010.2f*\n", rent);/*��0����ӡֵǰ���Դﵽ�ֶ�Ҫ��*/
//
//	return 0;
//}


/*strlen�������������ַ����ĳ���*/
//#include<string.h>
//#define PRAISE "You are an extrordinary begin."
//int main()
//{
//	char name[40];
//	printf("What's your name");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));/*�������ռ���˶��ٸ����䵥Ԫ*/
//	printf("The phrase of praise has %zd letters", strlen(PRAISE));/*������ռ���˶�����ĸ*/
//	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));/*�ͼ��䵥Ԫ*/
//	return 0;
//	
//}


/*�Ǻ�*����������*/
//int main()
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	printf("����������ֶο��:\n");
//	scanf("%d", &width);
//	printf("���ֽ������Ϊ:%*d\n",width,number);/*��һ���ǺŴ���width��d����number�������ʽ*/
//	printf("����������Ŀ�Ⱥ;�ȷ�̶�:\n");
//	scanf("%d %d", &width, &precision);
//	printf("���������Ϊ:%*.*f\n", width, precision, weight);
//	printf("����!\n");
//	return 0;
//}

/*�ڶ�������������������*/
//int main()
//{
//	int n;
//	printf("������������:\n");
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


/*�����ϰ*/
//1����дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ������
// 
//int main()
//{
//	char first_name[20];
//	char last_name[20];
//	printf("�����������:\n");
//	scanf("%s",first_name);
//	printf("�����������\n");
//	scanf("%s",last_name);
//	printf("%s,%s",first_name,last_name);
//	return 0;
//}
// 
// 
//2����дһ��������ʾ�û��������֣���ִ�����²�����
//a.��ӡ���֣�����˫���ţ�
//b���ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
//c���ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
//d���ڱ�������ȿ�3���ֶ��д�ӡ���֡�
// 
//#include<string.h>
//int main()
//{
//	char name[20];
//	printf("�������������:\n");
//	scanf("%s", name);
//	int width = strlen(name);
//	printf("\"%20s\"\n",name);
//	printf("\"%-20s\"\n", name);
//	printf("\"%*s\"\n", width + 3, name);
//	return 0;
//}
// 
// 
//3����дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����
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
//4����дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
//Dabney, you are 6.208 feet tall
//ʹ��float���ͣ����ã���Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�������Ϊ��λ��ʾ������
//// 
//int main()
//{
//	char name[20];
//	float height;
//	printf("������������(��λ:cm��������:\n");
//	scanf("%f %s", &height, name);
//	printf("%s,��������%.2f��\n", name, height / 100);
//	return 0;
//}
// 
// 
//5����дһ��������ʾ�û���������λÿ�루Mb��s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
//������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ����ã���Ϊ���š�
//�ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
//At 18.12 megabits per second, a file of 2.20 megabytes 
//downloads in 0.97 seconds.
// 
//int main()
//{
//	float speed,file_size, times;
//	printf("��������������ٶȣ���λ(Mb/s):\n");
//	scanf("%f", &speed);
//	printf("�����������ļ��Ĵ�С,��λ(MB):\n");
//	scanf("%f", &file_size);
//	times = file_size / speed * 8;
//	printf("�����ٶ�%.2fMb/s,�ļ���С%.2fMB\n", speed, file_size);
//	printf("����ʱ��ʣ��%.2fs\n", times);
//	return 0;
//}


//6����дһ����������ʾ�û���������Ȼ����ʾ�û������ա���һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ����
//��ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
// 
//Melissa Honeybee 
//      7        8
//���������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���룬������ʾ��
//Melissa Honeybee
//7       8
//#include<string.h>
// int main()
// {
//	 char name[20], surname[20];
//	 printf("�����������\n");
//	 scanf("%s", name);
//	 printf("�����������\n");
//	 scanf("%s", surname);
//	 int namelength = strlen(name);
//	 int surnamelength = strlen(surname);
//	 printf("%s %s\n", name, surname);
//	 printf("%*d %*d\n", namelength, namelength, surnamelength, surnamelength);
//	 printf("%s %s\n", name, surname);
//	 printf("%-*d %-*d", namelength, namelength, surnamelength, surnamelength);
//	 return 0;
// }

//7����дһ�����򣬽�һ��double���͵ı�������Ϊ1.0��3.0��һ��float���͵ı�������Ϊ1.0��3.0��
//�ֱ���ʾ���μ���Ľ����3�Σ�һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�
//������Ҫ����float��hͷ�ļ�������ʾFLT��DIG��DBL��DIG��ֵ��1.0��3.0��ֵ����Щֵһ����
// 
//#include<float.h>
//int main()
//{
//	double a = 1.0 / 3.0;
//	float b = 1.0 / 3.0;
//	printf("%lf %f\n", a, b);
//	printf("%.12lf %.12f\n", a, b);
//	printf("%.16lf %.16f\n",a,b);
//	printf("float��������ܱ���%dλ��Ч���֣� double��������ܱ���%dλ����\n", FLT_DIG,DBL_DIG);
//	return 0;
//}

//8����дһ��������ʾ�û��������е���̺����ĵ���������Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС�������һλ���֡�
//��������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף�
//�ѵ�λ��Ӣ����ص�ֵת��Ϊ����100���ŷ��ͨ�õ�ȼ�����ı�ʾ����������ʾ�����
//��ʾС�������1λ���֡�
//ע�⣬�������õķ����������ĵ�λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ�������ĵ�ȼ�ϲ���������ֵԽ��Խ�ã���
//ʹ�ã�define �������ų�����ʹ��const �޶���������������ʾ����ת��ϵ����
//
//int main()
//{
//	const float gallon_per_liter = 3.785f;
//	const float mile_per_km = 1.609f;
//	float mileage, oil_consume,mileage_per_gallon;
//	printf("������������(Ӣ��)�ͺ�����(����)\n");
//	scanf("%f %f", &mileage, &oil_consume);
//	mileage_per_gallon = mileage / oil_consume;
//	printf("����������ÿ����������ʻ��Ӣ����:%.1fӢ��\n",mileage_per_gallon);
//	printf("ŷ�޲�����ÿһ�ٹ��������ĵ���������:%.1fL\n",(oil_consume*100*gallon_per_liter)/(mileage*mile_per_km));
//	return 0;
//}
 

/*����ѧһ������ٶȣ�������2024��2��5�գ����һ��Сѧ��ѧ����ҿ��ˣ�ԭ����û���ñʺ�ֽ���Ӷ�ת�����ˣ��е��Ц�ˣ���һ��ѧ�Ļ����϶��Ǵ�ӡ������
�о��ȽϺ��õľ���strlen�����ˣ��������Ŭ��*/