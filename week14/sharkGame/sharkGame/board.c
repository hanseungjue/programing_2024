//  board.c
//  sharkGame
//

#include "board.h"

#define N_COINPOS       12
#define MAX_COIN        4
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4

static int board_coin[N_BOARD];
static int board_status[N_BOARD]; // 0 - OK, 1 - destroyed
static int shark_position;

// 보드 상태 출력
void board_printBoardStatus(void) {
    int i; // 변수 선언 이동
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i = 0; i < N_BOARD; i++) {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

// 보드 초기화
int board_initBoard(void) {
    int i; // 변수 선언 이동
    int coins_placed = 0; // 변수 선언 이동

    // 변수 초기화
    for (i = 0; i < N_BOARD; i++) {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }

    shark_position = SHARK_INITPOS; // 상어 초기 위치 설정

    // 코인 배치
    while (coins_placed < N_COINPOS) {
        int pos = rand() % N_BOARD; // 무작위 위치
        if (board_coin[pos] == 0) {
            board_coin[pos] = (rand() % MAX_COIN) + 1; // 1~MAX_COIN 개수의 코인 배치
            coins_placed++;
        }
    }

    return N_COINPOS;
}

// 상어 이동
int board_stepShark(void) {
    int step; // 변수 선언 이동
    int new_position; // 변수 선언 이동
    int i; // 변수 선언 이동

    step = rand() % MAX_SHARKSTEP + 1; // 상어 이동 거리
    new_position = shark_position + step;

    // 상어 이동 경로 파괴 처리
    for (i = shark_position + 1; i <= new_position && i < N_BOARD; i++) {
        if (i >= 0 && i < N_BOARD) {
            board_status[i] = BOARDSTATUS_NOK; // 파괴 상태로 변경
        }
    }

    // 상어 위치 업데이트
    shark_position = new_position;
    if (shark_position >= N_BOARD) {
        shark_position = SHARK_INITPOS; // 보드 끝에 도달 시 초기화
    }

    return shark_position;
}

// 특정 위치의 보드 상태 반환
int board_getBoardStatus(int pos) {
    return board_status[pos];
}

// 특정 위치의 코인 정보 반환
int board_getBoardCoin(int pos) {
    int coin = board_coin[pos]; // 변수 선언 이동
    board_coin[pos] = 0; // 코인 가져간 후 초기화
    return coin;
}

