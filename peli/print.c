/*********************************************************************
;	F U N C T I O N    D E S C R I P T I O N                           *
;---------------------------------------------------------------------
; NAME: print
 DESCRIPTION: Prints state of the game
;	Input: struct cell board
;	Output: none
;  Used global variables: none
; REMARKS when using this function: none
;*********************************************************************/
#include "gof.h"

int print(struct cell board[MAXH][MAXW]){
	int i,j,k,check;

	init_pair(1, COLOR_WHITE, COLOR_WHITE);
	init_pair(2, COLOR_CYAN, COLOR_CYAN);
	init_pair(3, COLOR_RED, COLOR_RED);

	for(i=0;i<MAXH;i++){
		for(j=0;j<MAXW;j++){
			if(board[i][j].current==1){
				attrset(COLOR_PAIR(2));
				move(i,j);
				printw(" ");
			}
			else if(board[i][j].current==0){
				attrset(COLOR_PAIR(1));
				move(i,j);
				printw(" ");
			}
			else if(board[i][j].current==2){
				attrset(COLOR_PAIR(3));
				move(i,j);
				printw(" ");
			}
		}
	}
	refresh();
}
