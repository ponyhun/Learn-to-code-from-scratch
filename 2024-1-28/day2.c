#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// Ҫ��2ӢѰת����Ӣ��
//int main()
//{
//	int feet, fathoms;//feet��Ӣ�ߣ�fathoms��ӢѰ
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("��%dӢѰ����%dӢ��!\n", fathoms, feet);
//	printf("�ǵģ���˵����%dӢ��\n", 6 * fathoms);
//	return 0;
//}

////�������
//void butler();           //����һ����Ϊbutler����Ϊ�ܼң��ĺ���
//int main()
//{
//	printf("I will summon the butler function.\n");
//	butler();             // ��main�����е���  
//	printf("Yes,Bring me some tea and writeable DVDs.\n");
//
//	return 0;
//}
//
//void butler()           // ����butler����������
//{
//	printf("You rang,Sir?\n");
//}



//��������ϰ*���������������
// 
// 
// 
//1����дһ�����򣬵���һ��printf()����������������մ�ӡ��һ�С��ٵ���һ��printf()����,
//����������շֱ��ӡ�����С�Ȼ���ٵ�������printf()����, ����������մ�ӡ��һ�С�
//���Ӧ������ʾ����ȻҪ��ʾ�������ݻ����������):
//Gustav Mahler
//Gustav
//Mahler
//Gustav Mahler
//int main()
//{
//	printf("Pony Hun\n");
//	printf("Hun\n");
//	printf("Pony\n");
//	printf("Pony Hun\n");
//	return 0;
//}
// 
// 
//2.��дһ������,��ӡ��������͵�ַ��
//int main()
//{
//	printf("name is ponyhun\n");
//	printf("address is earth\n");
//	return 0;
//}
// 
// 
//3����дһ��������������ת��������������ʾ������ֵ�����ﲻ�ÿ�������
//int main()
//{
//	int age, days;
//	age = 21;
//	days = age * 365;
//	printf("%d\n%d\n", age, days);
//	return 0;
//}
// 
// 
//4����дһ������,�����������:
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//Which nobody can deny!
//����main()�������⣬�ó���Ҫ���������Զ��庯��:һ����Ϊjolly()�����ڴ�ӡǰ3����Ϣ,����һ�δ�ӡһ��;��һ��������Ϊdeny(), ��ӡ���һ����Ϣ��
//void jolly();
//void deny();
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//void jolly()
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny()
//{
//	printf("Which nobody can deny!\n");
//}
// 
// 
//5����дһ������,�����������:
//Brazil,Russia, India, China
//India, China
//Brazil, Russia
//����main()���⣬�ó���Ҫ���������Զ��庯��:һ����Ϊ br()������һ�δ�ӡһ�Ρ�Brazi.Russia";��һ����Ϊic()������һ�δ�ӡһ�Ρ�India,China��������������main ()��������ɡ�
//void br();
//void ic();
//int main()
//{
//	br();
//	printf(", ");
//	ic();
//	ic();
//	br();
//	return 0;
//}
//void br()
//{
//	printf("Brazil, Russia");
//}
//void ic()
//{
//	printf("India, China\n");
//}
//
//
//6.��дһ�����򣬴���һ�����ͱ���toes������toes ����Ϊ10�������л�Ҫ����toes��������toes��ƽ�����ó���Ӧ��ӡ3��ֵ,���ֱ�������ʾ���֡�
//int main()
//{
//	int toes;
//	toes = 10;
//	printf("toes��ֵ=%d\n", toes);
//	printf("toes������ֵ=%d\n", toes * 2);
//	printf("toes��ƽ����ֵ%d\n", toes * toes);
//	return 0;
//}
// 
// 
//7.����о�����, ΢Ц�洦��ࡣ��дһ�������������¸�ʽ�����:
//Smile!Smile!Smile!
//Smile!Smile!
//Smile!
//�ó���Ҫ����һ���������ú���������һ�δ�ӡһ�Ρ�Smile!�������ݳ������Ҫʹ�øú�����
//void smile();
//int main()
//{
//	smile();
//	smile();
//	smile();
//	printf("\n");
//	smile();
//	smile();
//	printf("\n");
//	smile();
//
//	return 0;
//}
//void smile()
//{
//	printf("Smile!");
//}
// 
// 
//8����C�����У��������Ե�����һ����������дһ������
//����һ����Ϊone_three()�ĺ������ú�����һ�д�ӡ���ʡ�one�����ٵ��õ�2������two(),Ȼ������һ�д�ӡ���ʡ�three"��
//two ()������һ����ʾ�����ڡ�two����main�����ڵ���one_three()����ǰҪ��ӡ���starting now : "�����ڵ�����Ϻ���ʾ���done����
//��ˣ��ó�������Ӧ������ʾ:
//starting now:
//one
//two
//three
//done!
//void one_three();
//void two();
//int main()
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!\n");
//	return 0;
//}
//void one_three()
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two()
//{
//	printf("two\n");
//}


//ѧ�����ϸ��ǣ����ô���ȷʵ������ָУ������ú����о��ǳ������
//���������鱾��c primer plus��ѧϰC���Բ���дGitHub�ռǵĵڶ���