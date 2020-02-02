/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/
#include "gof.h"

void main(void){
	int i,rntm,slp;
	float spc;
	struct cell board[MAXH][MAXW]={{0}};

	create_init_state(board);
	printf("Number of cycles: ");
	scanf("%d", &rntm);
	printf("Seconds/cycle: ");
	scanf("%f", &spc);
	slp=spc*SECOND;

	initscr();
	clear();
	nodelay(stdscr, TRUE);

	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLUE);
	bkgd(COLOR_PAIR(1));
	curs_set(0);

	noecho();

	for(i=0;i<rntm;i++){
		print(board);
		refresh();
		usleep(slp);
		check(board);
	}

	nodelay(stdscr, FALSE);

	getch();
	endwin();
} /* end of main */