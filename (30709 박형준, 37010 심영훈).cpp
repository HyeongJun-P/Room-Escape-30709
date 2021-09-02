#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define GAMESTART 1
#define GAMEEXIT 2

void RenderLine();		// 라인 그리기 
void WaitSecond(); 	// 1초 기다리는 함수 
void Prollog(); 		// 프롤로그
void FirstStage(); 		// 첫번째 스테이지 
void Clear();

void WaitSecond(float _second) {
	Sleep(_second * 0);
}

enum Item
{
	Hammer
};

/* 첫번째 스테이지 오브젝트 */
void VENT();			// 환풍구   1
void BED();				// 침대     2
void WASHSTAND();		// 세면대   3
void TOILET();			// 변기     4
void LIGHT();			// 조명     5
void IRON_GATE();		// 철문     6
void CHANGSAL();		// 창살     7
void SHELF();			// 선반     8

int g_select;

int inven[20] = { 0, };

int main(void)
{	
	int menu;
	
	while (1)
	{
		RenderLine();
		printf("제목 : 검은 방\n");
		printf("[제작 : 박형준 원맨팀]\n\n");
		printf("1. 게임 시작\n");
		printf("2. 게임 나가기\n\n");
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
	printf("[프롤로그]\n\n"); 
	printf("2020년 8월 20일.\n\n");
	WaitSecond(1.8);
	printf("나는 사형 선고를 받았다.\n");
	WaitSecond(1.5);
	printf("눈을 떠보니 녹슨 철창과 더러운 침대가 보인다.\n");
	WaitSecond(1.5);
	printf("모든 것이 낯선 공간..\n");
	WaitSecond(1.5);
	printf("머리가 깨질 듯이 아파왔고, 어제의 기억이 나질 않는다.\n");
	WaitSecond(1.5);
	printf("한번.. 주변을 둘러보자.. \n\n");
	
	printf("계속 하려면 아무 키나 누르시오...\n\n");
	getch();
	
	return; 
}

void FirstStage()
{
	while (1)
	{
		Clear();
		RenderLine();
		printf("[감옥]\n\n");
		printf("방안의 물건들을 살펴본다.\n\n");
		printf("1. 철문     2. 침대     3. 세면대    4. 변기\n");
		printf("5. 조명     6. 창살     7. 선반\n\n");
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
	printf("[철문]\n\n");
	printf("차갑고 딱딱한 철문이다.\n\n");
	
	while (1)
	{
		
		printf("1. 문을 살펴본다     2. 돌아가기\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[철문]\n\n");
				printf("자물쇠로 잠겨있다.\n");
				WaitSecond(0.5);
				printf("\'열쇠\'를 찾아야 할 것 같다.\n\n");
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
	printf("[침대]\n\n");
	printf("슈퍼싱글 사이즈의 침대가 있다.\n\n");
	
	while (1)
	{
		
		printf("1. 침대를 살펴본다     2. 돌아가기\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[침대]\n\n");
				printf("아무런 관련이 없는듯하다.\n");
				WaitSecond(0.5);
				printf("부술 수 있는 물건을 찾아볼까..\n\n");
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
	printf("[세면대]\n\n");
	printf("\n\n");
	
	while (1)
	{
		printf("1. 세면대를 살펴본다     2. 돌아가기\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[세면대]\n\n");
				printf("물이 나오지 않을 것 같은 세면대다.\n");
				WaitSecond(0.5);
                printf("수도꼭지를 한 번 돌려볼까..\n\n");
                printf("1. 가만히 둔다.    2. 수도꼭지를 돌린다.\n\n");
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
	printf("[변기]\n\n");
	printf("\n\n");
	
	while (1)
	{ 
		printf("1. 변기를 만져본다     2. 돌아가기\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[변기]\n\n");
				printf("더러운 변기다.\n");
				printf("오랫동안 사용하지 않은 것 같다.\n\n");
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
	printf("[전구]\n\n");
	printf("\n\n");
	
	while (1)
	{
		printf("1. 전구를 바라본다     2. 돌아가기\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[전구]\n\n");
				printf("눈부신 전구다.\n");
				WaitSecond(0.5);
				printf("... 눈이 아프니 다른 오브젝트를 살펴보자.\n\n");
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
	printf("[선반]\n\n");
	printf("선반이다. 어떻게 할까?\n\n"); 
	
	while (1)
	{
		printf("1. 열어본다.     2. 돌아간다.\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[선반]\n\n");
				if (shelf_Check)
				{
					printf("불쾌한 소음과 함께 선반이 무너졌다.\n");
					printf("\'망치\'를 획득 했다.\n\n");
					shelf_Check = 0;
					WaitSecond(0.5);
				}
				else
				{
					printf("무너진 선반이다.\n\n"); 
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
	printf("[창살]\n\n");
	printf("\n\n");
	
	while (1)
	{
		printf("1. 창살을 만져본다     2. 돌아가기\n\n");
		printf(">>> ");
		
		scanf("%d", &g_select);
		system("cls");
		
		switch(g_select){
			case 1:
				RenderLine();
				printf("[창살]\n\n");
				printf("차갑고 까칠한 창살이다.\n");
				WaitSecond(0.5);
				printf("왠지 불길한 느낌이 든다.\n\n"); 
				break;
			case 2:
				return;
			default:
				printf("");
		}
	}
}
