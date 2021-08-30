#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define GAMESTART 1
#define GAMEEXIT 2

void RenderLine();		// 라인 그리기 
void WaitOneSecond(); 	// 1초 기다리는 함수 
void Prollog(); 		// 프롤로그
void FirstStage(); 		// 첫번째 스테이지 
void Clear();


/* 첫번째 스테이지 오브젝트 */
void VENT();			// 환풍구 
void BED();				// 침대 
void SEMYEONDE();		// 세면대 
void TOILET();			// 변기 
void LIGHT();			// 조명 
void IRON_GATE();		// 철문 
void CHANGSAL();		// 창살 
void SHELF();			// 선반

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
				printf("다시 입력하세요.");
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
			default:
				printf("좆까");
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
				printf("좆까");
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
