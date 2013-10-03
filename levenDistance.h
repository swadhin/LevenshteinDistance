/*************************************************************/
// Name : SWADHIN PRADHAN
// Roll No. : 12CS71P04
/************************************************************/

#ifndef _LEVEN_DISTANCE_H_
#define _LEVEN_DISTANCE_H_

int LD (char const *s, char const *t,int w1,int w2);
int Minimum (int a, int b, int c);
int *GetCellPointer (int *pOrigin, int col, int row, int nCols);
int GetAt (int *pOrigin, int col, int row, int nCols);
void PutAt (int *pOrigin, int col, int row, int nCols, int x);
int calCost ( char r, char s, int w1,int w2);

#endif 
