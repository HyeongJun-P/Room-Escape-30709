#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define GAMESTART 1
#define GAMEEXIT 2

void RenderLine();		// ���� �׸��� 
void WaitOneSecond(); 	// 1�� ��ٸ��� �Լ� 
void Prollog(); 		// ���ѷα�
void FirstStage(); 		// ù��° �������� 
void Clear();


/* ù��° �������� ������Ʈ */
void VENT();			// ȯǳ�� 
void BED();				// ħ�� 
void SEMYEONDE();		// ����� 
void TOILET();			// ���� 
void LIGHT();			// ���� 
void IRON_GATE();		// ö�� 
void CHANGSAL();		// â�� 
void SHELF();			// ����

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
		
		switch(scanf("%d", &menu))
		{
			case GAMESTART:
				system("cls");
				Prollog();
				FirstStage();
				break;
			case GAMEEXIT:
				return 0;
			default:
				printf("�ٽ� �Է��ϼ���.");
				break;
		}
	}
	
	return 0;
}

void RenderLine() {
	printf("\n=====================================================================\n\n");
} 

void WaitSecond(float _second) {
	Sleep(_second * 0);
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
			default:
				printf("����");
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
				printf("����");
		}
	}
	
}

void BED() {
	
}


void SEMYEONDE() {
	
}

void TOILET() {
	
}


void LIGHT() {
	
}

void SHELF() {
	
}

void CHANGSAL() {
	
}
