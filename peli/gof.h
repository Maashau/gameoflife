/***************************************************************************
 *   Copyright (C) 2018 by Matti Rintam'a'ki   								*
 *   e1700829@edu.vamk.fi  								 					*
 *                                                                         	*
 *   This program is free software; you can redistribute it and/or modify  	*
 *   it under the terms of the GNU General Public License as published by  	*
 *   the Free Software Foundation; either version 2 of the License, or     	*
 *   (at your option) any later version.                                   	*
 *                                                                         	*
 *   This program is distributed in the hope that it will be useful,       	*
 *   but WITHOUT ANY without even the implied of 			 		      	*
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         	*
 *   GNU General Public License for more details.                          	*
 *                                                                         	*
 *   You should have received a copy of the GNU General Public License     	*
 *   along with this program; if not, write to the                         	*
 *   Free Software Foundation, Inc.,                                       	*
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             	*
 ***************************************************************************/

/*********************************************************************
*
* 1.  NAME
*     Game of Life
* 2.  DESCRIPTION
*
* 3.  VERSIONS
*       Original:
*         $Date$ / $Author$
*
*       Version history:
*
*
**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

/*-------------------------------------------------------------------*
*    GLOBAL VARIABLES AND CONSTANTS                                  *
*--------------------------------------------------------------------*/
/* Control flags */

/* Global constants */
#define MAXH 50
#define MAXW 100
#define SECOND 1000000
#define SURV 2
#define CRE 3
/* Global variables */

/* Global structures */
struct cell
{
	int current;
	int future;
};

/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/
int print(struct cell board[MAXH][MAXW]);
int check(struct cell board[MAXH][MAXW]);
