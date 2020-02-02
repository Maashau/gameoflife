/*********************************************************************
;	F U N C T I O N    D E S C R I P T I O N                           *
;---------------------------------------------------------------------
; NAME: create_init_state
 DESCRIPTION: Lays the board in the beginning
;	Input: struct cell board
;	Output: Puts starting values to the array
;  Used global variables: none
; REMARKS when using this function: none
;*********************************************************************/
#include "gof.h"

create_init_state(struct cell board[MAXH][MAXW]){
	int cho=0,i,j;

	printf("Do you want to load a file?(1=YES/0=EXIT): ");
	scanf("%d", &cho);

	if(cho==1){
		int look,i=0;
		char sel[20];
		FILE *map;

		printf("please enter full path to the map file (eg. maps/esim.txt): ");
		scanf("%s", &sel);

		map = fopen(sel, "r");
		if(map==NULL){
			perror("error: file not found!");
			exit(0);
		}

		for(i=0;i<MAXH;i++){
			for(j=0;j<MAXW;j++){
				look=fgetc(map);
				if(feof(map)){
					break;
				}
				if(look!=10 && look!=13){
					board[i][j].current=look-48;
				}
				else{
					j--;
				}
			}
		}

		fclose(map);
	}
	else if(cho==0){
		exit(0);
	}
	return(0);
}