#include <stdio.h>
#include <Windows.h>
#include <conio.h>

// �޴� ���� 
#define m_Start 1
#define m_Exit 0

// ��й�ȣ 
#define PassWord 031231 

// �濡�� ���ٰ����� ��� 
#define DT_Inven	1000 
#define DT_TV 		1001	 
#define DT_ToolBox 	1002
#define DT_Door		1003

// ������Ʈ
#define DO_Memo 		2000
#define DO_DirtyCoat 	2001
#define DO_Password		2002
#define DO_Humun 		2010
	#define DO_MoneyPocket 	2011

// ������
#define DI_Hammer 	3000
#define DI_Pench 	3001
#define DI_Top 		3002

#define DI_Memo		3005 

#define DI_PeopleCard	4000
#define DI_Money 		4001

int g_Select;

int complete = 1;

int passwordInput = 0;

void GameStart(); // ���� ���� �Լ�
void Prologue();	// ���ѷα�

void Clear()
{
	system("cls");
}

// �κ��丮 
int inven;

void T_Inven();		// �κ��丮
 
void T_TV();		// Ƽ�� 
	void O_Memo();	// �޸��� 
void T_ToolBox();	// �������� 
		void I_Hammer();	// �ظ�
		void I_Pench();		// ��ġ
		void I_Top();		// �� 
void T_Cabinet(); 	// ĳ���
	void O_DirtyCoat();	// ������ ��Ʈ 
	void O_Humun();		// �����ü 
		void O_MoneyPocket();		// ���� 
			void I_PeopleCard();	// �ֹε����
			void I_Money();			// ��
void T_Door();	// ��
	void O_Password();	// �� ��й�ȣ �Է�

void InputGetch();
 
void WaitSecond(float _seconds)
{
	Sleep(_seconds * 0);
}

void RenderLine()
{
	printf("\n====================================================================================\n\n");
}

void ErrorMessage()
{
	Clear();
	printf("�Է¿��� [ERROR]\n\n");
	InputGetch();
}
 
int main(void)
{
	int menu;
	
	while (complete)
	{
		RenderLine();
		printf("TITLE : ������\n\n");
		printf("1. ���ӽ���    2. ��������\n\n");
		printf(">>> "); 
		scanf("%d", &menu);
		switch(menu)
		{
			case m_Start:
				GameStart();
				break;
			case m_Exit:
				printf("���� �Ǿ����ϴ�.");
				return 0;
			default:
				ErrorMessage();
				 
		}
	}
	
	return 0;
}

void GameStart()
{
	Clear();
	Prologue();
	
	while (true)
	{
		Clear();
		RenderLine();
		printf("[��]\n\n");
		printf("1. TV    2. ��������    3. ��	0. �κ��丮\n\n");
		printf(">>> ");
		scanf("%d", &g_Select);
		g_Select += 1000;
		
		switch(g_Select)
		{
			case DT_TV:
				T_TV();
				break;
			case DT_ToolBox:
				T_ToolBox();
				break;
			case DT_Door:
				T_Door();
				if (complete) {
					Clear();
					RenderLine();
					printf("[��]\n\n");
					printf("���� Ŭ����!\n\n");
					InputGetch();
					Clear(); 
					return;
				}
				break;
			case DT_Inven:
				if (inven == DI_Memo)
				{
					Clear();
					RenderLine();
					printf("[�޸�]\n\n");
					printf("�޸� 031231�̶� �����ִ�.\n\n");
					InputGetch();
					break; 
				}
				else
				{
					printf("���� �ǹ� ����.\n");
					InputGetch();
					break;
				}
			default:
				break;
		}
	}	 
}

void Prologue()
{
	printf("[���ѷα�]\n\n"); 
	printf("2020�� 8�� 20��.\n\n");
	WaitSecond(1.8);
	printf("���� ���� ���� �޾Ҵ�.\n");
	WaitSecond(1.5);
	printf("���� ������ ��ǻ�Ϳ� �������ڰ� ���δ�.\n");
	WaitSecond(1.5);
	printf("��� ���� ���� ����..\n");
	WaitSecond(1.5);
	printf("�Ӹ��� ���� ���� ���Ŀ԰�, ������ ����� ���� �ʴ´�.\n");
	WaitSecond(1.5);
	printf("�ѹ�.. �ֺ��� �ѷ�����.. \n\n");
	InputGetch();
	
	return;
}

void T_TV()
{
	Clear();
	RenderLine();
	printf("[TV]\n\n");
	printf("1. ���캻��    2. ���ư���\n\n");
	printf(">>> ");
	scanf("%d", &g_Select);
	
	while (true)
	{
		switch(g_Select)
		{
		case 1:
			Clear();
			RenderLine();
			printf("[TV]\n\n");
			
			printf("1. �μ���.    2. ���ư���.\n\n");
			printf(">>> ");
			scanf("%d", &g_Select);
			switch(g_Select)
			{
				case 1:
					Clear();
					RenderLine();
					printf("[TV]\n\n");
					if (inven == DI_Hammer)
					{
						printf("�ظӴ� �μ����� ���� �������ִ�.\n\n");
						printf("�޸� ȹ���ߴ�.\n\n");
						printf(">>> ");
						InputGetch();
						inven = DI_Memo;
						return;
					}
					else if (inven != DI_Hammer)
					{
						printf("�μ����� ���� �ʿ��� �� ����.\n\n");
						InputGetch();
						return; 
					} else {
						printf("�μ��� �ִ� Ƽ���.");
						InputGetch();
						return; 
					}
					return;
				case 2:
					return;
				default:
					ErrorMessage();
					break;
			 }
		case 2:
			printf("���ư���.\n\n");
				InputGetch();
				break;
		default:
			ErrorMessage();
			break;
			
		}
	}
}

void T_ToolBox()
{
	Clear();
	RenderLine();
	printf("[��������]\n\n");
	printf("1. �����    2. ���ư���\n\n");
	printf(">>> ");
	scanf("%d", &g_Select);
	
	while (true)
	{
		switch(g_Select)
		{
		case 1:
			Clear();
			RenderLine();
			printf("[�������� ��]\n\n");
			
			printf("1. �ظ�    2. ��ġ    3. ��   4. ���ư���.\n\n");
			printf(">>> ");
			scanf("%d", &g_Select);
			Clear();
			RenderLine();
			switch(g_Select)
			{
				case 1:
					printf("[�ظ�]\n\n");
					printf("1. ��������   2. ���������ʴ´�.\n\n");
					printf(">>> ");
					scanf("%d", &g_Select);
					
					Clear();
					RenderLine();
					printf("[�ظ�]\n\n");
					
					switch(g_Select)
					{
						case 1:
							if (inven == DI_Hammer)
							{
								printf("�̹� �ظӸ� ���ϰ��ִ�.\n\n");
								InputGetch();
							}
							else
							{
								inven = DI_Hammer;
								printf("�ظӸ� ȹ���ߴ�.");
							}
						case 2:
							printf("���ư���.\n\n");
							InputGetch();
							return; 
					}
					break;
				case 2:
					printf("[��ġ]\n\n");
					printf("��ġ�� �ִ�.\n\n");
					InputGetch();
					return T_ToolBox();
				case 3:
					printf("[��]\n\n");
					printf("���� �ִ�.\n\n");
					InputGetch();
					return;
				case 4:
					printf("���ư���.\n\n");
					InputGetch();
					return;
				default:
					ErrorMessage();
					break;
			 }
		case 2:
			printf("���ư���.\n\n");
			InputGetch();
			return;
		default:
			ErrorMessage();
			break;
		}
	}
}

void T_Door()
{
	Clear();
	RenderLine();
	printf("[��]\n\n");
	printf("1. ���캻��    2. ���ư���\n\n");
	printf(">>> ");
	scanf("%d", &g_Select);
	
	while (true)
	{
		switch(g_Select)
		{
		case 1:
			Clear();
			RenderLine();
			printf("[��]\n\n");
			printf("��й�ȣ �����ġ�� �ɷ��ִ�.\n\n");
			printf("1. ���캻��.    2. ���ư���.\n\n");
			printf(">>> ");
			scanf("%d", &g_Select);
			switch(g_Select)
			{
				case 1:
					Clear();
					RenderLine();
					printf("[�����ġ]\n\n");
					printf(" ��й�ȣ�� �Է� �Ͻÿ�.\n\n");
					printf(">>> ");
					scanf("%d", &passwordInput);
					
					if (passwordInput == PassWord)
					{
						printf("Ż�� ����.\n\n");
						complete = 0;
						return;
					}
					break;
				case 2:
					return;
				default:
					ErrorMessage();
					break;
			 }
			 break;
		case 2:
			printf("���ư���.\n\n");
			InputGetch();
			return;
		default:
			InputGetch();
			break;
			
		}
	}
}

void InputGetch()
{
	printf("��� �Ϸ��� �ƹ� Ű�� �����ÿ�...\n\n");
	getch();
}
