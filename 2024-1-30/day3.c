#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//����ѧϰ�й�16���ƺ�8���ƣ���Ȼ��ѧ��ʱ��ѧ�������õú��٣�����Ҫ���ˣ��ó�����Ϥ�ָ�

//int main()//��10���ơ�8���ơ�16���ƴ�ӡ10������100.
//{
//	int x = 100;
//	printf("ʮ����100=%d���˽���100=%o��ʮ������100=%x\n", x, x, x);
//	printf("ʮ����100=%d���˽���100=%#o��ʮ������100=%#x\n", x, x, x);
//	return 0;
//} 
//
//��ͬ����������
//int main()
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 1234567890913;
//	printf("һ���Ǹ���=%u����%d\n", un,un);
//	printf("���ٴ洢������=%hd����%d\n", end, end);
//	printf("����洢�ռ���������=%ld����%hd\n", big, big);
//	printf("���������������%lld������%ld\n", verybig, verybig);
//	return 0;
//}

//
///*������ʾ�ַ��ı��*/
//int main()
//{
//	char ch;
//	printf("������һ���ַ�\n");
//	scanf("%c", &ch);
//	printf("�ַ� %c �ı���� %d.\n", ch, ch);
//	return 0;
//}

#include<stdio.h>
//#include<inttypes.h>//֧�ֿ���ֲ����
//int main()
//{
//	int32_t me32; //me32��һ��32λ�з������ͱ���
//	me32 = 45944945;
//	printf("���ȣ�����int32_t���з�������int:");
//	printf("me32=%d\n", me32);
//	printf("Ȼ�����ǲ�Ҫ���κμ���\n");
//	printf("�෴��ʹ��һ������inttyoes.h��\"�꣨Marco��:\"");
//	printf("me32=%"PRId32"\n", me32);/*��ʹ�ò���PRId32������ַ�"d",ʹ�ú���Ա�֤d�ĳ���*/
//	return 0; 
//}

///*���ַ�ʽ��ӡfloat��ֵ*/
//int main()
//{
//	float aboat = 32000.0f;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%.1f���Ա���д��%.1e\n", aboat, aboat);
//	printf("������һ��ʮ�����Ƶ���%.1a,��2���ݵı�ʾ������ʾ\n", aboat);
//	printf("%.1f�ܱ���д��%.2e\n", abet, abet);
//	printf("%lf�ܱ���д��/%le\n", dip, dip);
//	return 0;
//}

///*��ӡ�������͵Ĵ�С*/
//int main()
//{
//	printf("int���͵Ĵ�С��%zdbyte.\n", sizeof(int));
//	printf("char���͵Ĵ�С��%zdbyte.\n", sizeof(char));
//	printf("long���͵Ĵ�С��%zdbyte.\n", sizeof(long));
//	printf("long long���͵Ĵ�С��%zdbyte.\n", sizeof(long long));
//	printf("double���͵Ĵ�С��%zdbyte.\n", sizeof(double));
//	printf("long double���͵Ĵ�С��%zdbyte.\n",
//		sizeof(long double));
//	return 0;
//}

//����ch��char���͵ı������ֱ�ʹ��ת�����С�ʮ����ֵ���˽����ַ�������ʮ�������ַ������ѻس��ַ�����ch������ʹ��ASCII����ֵ����
//int main()
//{
//	char ch = '\r';
//	printf("%d\n", ch);//ת������
//	//char ch = 13;    ʮ���Ƹ�ֵ
//	printf("%d\n", ch);
//	//char ch = '\15'; �˽��Ƹ�ֵ
//	printf("%#o\n", ch);
//	//char ch = '\xd'; ʮ�����Ƹ�ֵ
//	printf("%#x\n", ch);
//	return 0;
//}
//

//������һ���е���ˣ������ϰ��û����31�������ˣ���ʱ��һ����������ļ����

//#include<float.h> /*��������ȡֵ��Χ*/
//#include<limits.h>/*�з������͵�ȡֵ��Χ*/
////1��ͨ�����飨����д���д�������ĳ��򣩹۲�ϵͳ��δ����������硢����������͸���������������
////
//int main()
//{
//	int big_int;
//	big_int = 2147483647;/*�з��������������ֵ��2��31�η���1*/
//	printf("�����������1������=%d\n", big_int+1);/*��������*/
//	printf("int�����ֵ=%ld\n", INT_MAX);
//	float big_float;
//	big_float =3.4e38;/*�����������ֵһ����3.4e38*/
//	printf("����������=%f\n", big_float*10);/*����������*/
//	printf("�����͵����ֵΪ\f\n", FLT_MAX);
//	float small_float;
//	small_float=10.0 / 3;
//	printf("�������������������С����������%f\n", small_float);
//	return 0;
//}
// 
// 
//2����дһ������Ҫ����ʾ����һ��ASCII��ֵ���磬66����Ȼ���ӡ������ַ���
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
//3����дһ�����򣬷���һ��������Ȼ���ӡ������ı���
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
//4����дһ�����򣬶�ȡһ�����������ȴ�ӡ��С������ʽ���ٴ�ӡ��ָ����ʽ��Ȼ�����ϵͳ֧�֣�
//�ٴ�ӡ��p����������ʮ�����Ƽ��������������¸�ʽ�����ʵ����ʾ��ָ��λ����ϵͳ���죩��
//Enter a floating - point value : 64.25
//fixed - point notation : 64.250000 
//exponential notation : 6.425000e+01
//p notation : 0x1.01p+6
//
//int main()
//{
//	float input;
//	printf("����һ��������\n");
//	scanf("%f",&input);
//	printf("С������ʽ��%f\n",input);
//	printf("ָ����ʽ��%e\n", input);
//	printf("p��������%a\n", input);
//	return 0;
//}
// 
// 
//5��һ���Լ��3.156e+7�롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������
//
//#define sec_per_year 3.156e+7
//int main()
//{
//	float years, seconds;
//	printf("�������������");
//	scanf("%f", &years);
//	seconds = years * sec_per_year;
//	printf("���������%.1f\n", years);
//	printf("ͬʱ�������ȹ���%e��", seconds);
//	return 0;
//}
//6. 1��ˮ���ӵ�����ԼΪ3.0e-23�ˡ�1����ˮ��Լ��950�ˡ���дһ��������ʾ�û�����ˮ�Ŀ�
//����������ʾˮ���ӵ�������
//
//#define water_per_mole 3.0e-23
//#define water_per_quart 950
//int main()
//{
//	float input, water;
//	printf("������ˮ������:");
//	printf("(��λ:����)_____\b\b\b\b\b");
//	scanf("%f", &input);
//	water = input * water_per_quart / water_per_mole;
//	printf("ˮ�Ŀ�������%f", input);
//	printf("ˮ���ӵĸ�����%e", water);
//	return 0;
//}
// 
// 
//7. 1Ӣ���൱��2.54���ס���дһ��������ʾ�û�������ߣ���Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�
//
//#define inch_to_cm 2.54
//int main()
//{
//	float inch, cm;
//	printf("������������(��λ:Ӣ��)___\b\b\b");
//	scanf("%f",&inch);
//	cm = inch * inch_to_cm;
//	printf("��������%.2f����\n", cm);
//	return 0;
//}
// 
// 
//8�����������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2�����ף�1�����׵���3���ס�
//��дһ��������ʾ�û����뱭����
//����Ʒ�ѡ���˾�����ס�����Ϊ��λ��ʾ�ȼ�������˼�����ڸó���Ϊ��ʹ�ø������ͱ��������͸����ʣ�
//
//#define cup_to_pint 0.5
//#define cup_to_ounce 8
//#define cup_to_soup_spoon 16
//#define cup_to_tea_spoon 48
//int main()
//{
//	float cup;
//	printf("�����뱭����___\b\b\b");
//	scanf("%f",&cup);
//	printf("������ı���Ϊ%.3f\n",cup);
//	printf("�ȼ���%.3fƷ��\n", cup*cup_to_pint);
//	printf("�ȼ���%.3f��˾\n", cup*cup_to_ounce);
//	printf("�ȼ���%.3f����\n", cup*cup_to_soup_spoon);
//	printf("�ȼ���%.3f����\n", cup*cup_to_tea_spoon);
//
//	return 0;
//}


//����д���ˣ�д��������Сʱ��ò���ú�����һ�ֹ��߷ǳ����㣬16��������һ���ѵ㣬��Ҫ�������Ķ���
//�������ռǾ͵�����