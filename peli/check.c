/*********************************************************************
;	F U N C T I O N    D E S C R I P T I O N                           *
;---------------------------------------------------------------------
; NAME: check
 DESCRIPTION: Checks "neighbor" values from the array
;	Input: struct cell board
;	Output: Saves new values to array according to rules
;  Used global variables: none
; REMARKS when using this function: none
;*********************************************************************/
#include "gof.h"

int check(struct cell board[MAXH][MAXW]){
	int i,j,k,l,check;

	for(i=0;i<MAXH;i++){
		for(j=0;j<MAXW;j++){
			check=0;
			if(board[i-1][j-1].current==1){
            check++;
         }
         if(board[i-1][j].current==1){
            check++;
         }
         if(board[i-1][j+1].current==1){
            check++;
         }
         if(board[i][j-1].current==1){
            check++;
         }
         if(board[i][j+1].current==1){
            check++;
         }
         if(board[i+1][j-1].current==1){
            check++;
         }
         if(board[i+1][j].current==1){
            check++;
         }
         if(board[i+1][j+1].current==1){
            check++;
         }
         if(check==CRE){
            board[i][j].future=1;
         }
         else if(board[i][j].current==1 && check==SURV){
            board[i][j].future=1;
         }
         else{
            board[i][j].future=0;
         }

		}
	}
	for(i=0;i<MAXH;i++){
		for(j=0;j<MAXW;j++){
			board[i][j].current=board[i][j].future;
		}
	}
}
