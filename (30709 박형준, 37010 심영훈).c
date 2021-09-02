#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define GAMESTART 1
#define GAMEEXIT 2

void RenderLine();		// ���� �׸��� 
void WaitSecond(float); 	// 1�� ��ٸ��� �Լ� 
void Prollog(); 		// ���ѷα�
void FirstStage(); 		// ù��° �������� 
void Clear();

void WaitSecond(float _second) {
	Sleep(_second * 0);
}

enum Item
{
	Hammer
};

/* ù��° �������� ������Ʈ */
void VENT();			// ȯǳ��   1
void BED();				// ħ��     2
void WASHSTAND();		// �����   3
void TOILET();			// ����     4
void LIGHT();			// ����     5
void IRON_GATE();		// ö��     6
void CHANGSAL();		// â��     7
void SHELF();			// ����     8

int g_select;

int inven[20] = { 0, };

int main(void)
{	
	int menu;
	
	while (1)
	{
		RenderLine();
		printf("���� : ���� ��\n");
		printf("[���� : ������ ������]\n\n");
		printf("1. ���� ����\n");
		printf("2. ���� ������\n\n");
		printf(">>> ");
		
		scanf("%d", &menu);
		
		switch(menu)
		{
			case GAMESTART:
				system("cls");
				Prollog();
				FirstStage();
				break;
			case GAMEEXIT:
				return 0;
			default:
				system("cls");
				printf("\n.\n");
				WaitSecond(3);
				return 0;
		}
	}
	
	return 0;
}

void RenderLine() {
	printf("\n=====================================================================\n\n");
} 

void Clear() {
	system("cls");
}

void Prollog()
{
	printf("[���ѷα�]\n\n"); 
	printf("2020�� 8�� 20��.\n\n");
	WaitSecond(1.8);
	printf("���� ���� ���� �޾Ҵ�.\n");
	WaitSecond(1.5);
	printf("���� ������ �콼 öâ�� ������ ħ�밡 ���δ�.\n");
	WaitSecond(1.5);
	printf("��� ���� ���� ����..\n");
	WaitSecond(1.5);
	printf("�Ӹ��� ���� ���� ���Ŀ԰�, ������ ����� ���� �ʴ´�.\n");
	WaitSecond(1.5);
	printf("�ѹ�.. �ֺ��� �ѷ�����.. \n\n");
	
	printf("��� �Ϸ��� �ƹ� Ű�� �����ÿ�...\n\n");
	getch();
	
	return; 
}

void FirstStage()
{
	while (1)
	{
		Clear();
		RenderLine();
		printf("[����]\n\n");
		printf("����� ���ǵ��� ���캻��.\n\n");
		printf("1. ö��     2. ħ��     3. �����    4. ����\n");
		printf("5. ����     6. â��     7. ����\n\n");
		printf(">>> ");
		scanf("%d", &g_select);
		
		switch(g_select)
		{
			case 1: IRON_GATE(); break;
            case 2: BED(); break;
            case 3: WASHSTAND(); break;
            case 4: TOILET(); break;
            case 5: LIGHT(); break;
            case 6: CHANGSAL(); break;
            case 7: SHELF(); break;
			default:
				printf("");
		}
	}
}

void IRON_GATE() {
	system("cls");
	RenderLine();
	printf("[ö��]\n\n");
	printf("������ ������ ö���̴�.\n\n");
	
	while (1)
	{
		
		printf("1. ���� ���캻��     2. ���ư���\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[ö��]\n\n");
				printf("�ڹ���� ����ִ�.\n");
				WaitSecond(0.5);
				printf("\'����\'�� ã�ƾ� �� �� ����.\n\n");
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}

void BED() {
	system("cls");
	RenderLine();
	printf("[ħ��]\n\n");
	printf("���۽̱� �������� ħ�밡 �ִ�.\n\n");
	
	while (1)
	{
		
		printf("1. ħ�븦 ���캻��     2. ���ư���\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[ħ��]\n\n");
				printf("�ƹ��� ������ ���µ��ϴ�.\n");
				WaitSecond(0.5);
				printf("�μ� �� �ִ� ������ ã�ƺ���..\n\n");
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}


void WASHSTAND() {
	system("cls");
	RenderLine();
	printf("[�����]\n\n");
	printf("\n\n");
	
	while (1)
	{
		printf("1. ����븦 ���캻��     2. ���ư���\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[�����]\n\n");
				printf("���� ������ ���� �� ���� ������.\n");
				WaitSecond(0.5);
                printf("���������� �� �� ��������..\n\n");
                printf("1. ������ �д�.    2. ���������� ������.\n\n");
                printf(">>> ");
                scanf("%d", &g_select);
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}

void TOILET() {
	system("cls");
	RenderLine();
	printf("[����]\n\n");
	printf("\n\n");
	
	while (1)
	{ 
		printf("1. ���⸦ ��������     2. ���ư���\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[����]\n\n");
				printf("������ �����.\n");
				printf("�������� ������� ���� �� ����.\n\n");
				WaitSecond(0.5);
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}


void LIGHT() {
	system("cls");
	RenderLine();
	printf("[����]\n\n");
	printf("\n\n");
	
	while (1)
	{
		printf("1. ������ �ٶ󺻴�     2. ���ư���\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[����]\n\n");
				printf("���ν� ������.\n");
				WaitSecond(0.5);
				printf("... ���� ������ �ٸ� ������Ʈ�� ���캸��.\n\n");
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}

void SHELF() {
	static int shelf_Check = 1; 
	system("cls");
	RenderLine();
	printf("[����]\n\n");
	printf("�����̴�. ��� �ұ�?\n\n"); 
	
	while (1)
	{
		printf("1. �����.     2. ���ư���.\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[����]\n\n");
				if (shelf_Check)
				{
					printf("������ ������ �Բ� ������ ��������.\n");
					printf("\'��ġ\'�� ȹ�� �ߴ�.\n\n");
					shelf_Check = 0;
					WaitSecond(0.5);
				}
				else
				{
					printf("������ �����̴�.\n\n"); 
				}
				
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}

void CHANGSAL() {
	system("cls");
	RenderLine();
	printf("[â��]\n\n");
	printf("\n\n");
	
	while (1)
	{
		printf("1. â���� ��������     2. ���ư���\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[â��]\n\n");
				printf("������ ��ĥ�� â���̴�.\n");
				WaitSecond(0.5);
				printf("���� �ұ��� ������ ���.\n\n"); 
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}
