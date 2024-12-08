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

// ���� ���� ���
void board_printBoardStatus(void) {
    int i; // ���� ���� �̵�
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

// ���� �ʱ�ȭ
int board_initBoard(void) {
    int i; // ���� ���� �̵�
    int coins_placed = 0; // ���� ���� �̵�

    // ���� �ʱ�ȭ
    for (i = 0; i < N_BOARD; i++) {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }

    shark_position = SHARK_INITPOS; // ��� �ʱ� ��ġ ����

    // ���� ��ġ
    while (coins_placed < N_COINPOS) {
        int pos = rand() % N_BOARD; // ������ ��ġ
        if (board_coin[pos] == 0) {
            board_coin[pos] = (rand() % MAX_COIN) + 1; // 1~MAX_COIN ������ ���� ��ġ
            coins_placed++;
        }
    }

    return N_COINPOS;
}

// ��� �̵�
int board_stepShark(void) {
    int step; // ���� ���� �̵�
    int new_position; // ���� ���� �̵�
    int i; // ���� ���� �̵�

    step = rand() % MAX_SHARKSTEP + 1; // ��� �̵� �Ÿ�
    new_position = shark_position + step;

    // ��� �̵� ��� �ı� ó��
    for (i = shark_position + 1; i <= new_position && i < N_BOARD; i++) {
        if (i >= 0 && i < N_BOARD) {
            board_status[i] = BOARDSTATUS_NOK; // �ı� ���·� ����
        }
    }

    // ��� ��ġ ������Ʈ
    shark_position = new_position;
    if (shark_position >= N_BOARD) {
        shark_position = SHARK_INITPOS; // ���� ���� ���� �� �ʱ�ȭ
    }

    return shark_position;
}

// Ư�� ��ġ�� ���� ���� ��ȯ
int board_getBoardStatus(int pos) {
    return board_status[pos];
}

// Ư�� ��ġ�� ���� ���� ��ȯ
int board_getBoardCoin(int pos) {
    int coin = board_coin[pos]; // ���� ���� �̵�
    board_coin[pos] = 0; // ���� ������ �� �ʱ�ȭ
    return coin;
}

