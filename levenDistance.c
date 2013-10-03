/*************************************************************/
// Name : SWADHIN PRADHAN
// Roll No. : 12CS71P04
/************************************************************/

#include "levenDistance.h"
#include <string.h>
#include <malloc.h>

//****************************
// Get minimum of three values
//****************************

int Minimum (int a, int b, int c)
{
    int mi;
    mi = a;

      if (b < mi) {
            mi = b;
      }
      if (c < mi) {
            mi = c;
      }

      return mi;
}

//**************************************************
// Get a pointer to the specified cell of the matrix
//************************************************** 

int* GetCellPointer (int *pOrigin, int col, int row, int nCols)
{
    return pOrigin + col + (row * (nCols + 1));
}

//*****************************************************
// Get the contents of the specified cell in the matrix 
//*****************************************************

int GetAt (int *pOrigin, int col, int row, int nCols)
{
    int *pCell;

      pCell = GetCellPointer (pOrigin, col, row, nCols);
      return *pCell;
}

//*******************************************************
// Fill the specified cell in the matrix with the value x
//*******************************************************

void PutAt (int *pOrigin, int col, int row, int nCols, int x)
{
    int *pCell;

    pCell = GetCellPointer (pOrigin, col, row, nCols);
    *pCell = x;
}

//*****************************************
//Calcualte Replacement Cost of Characters
//*****************************************

int calCost(char r, char s, int w1, int w2)
{
    int val = w2;
    
    switch(r){

        case 'C':
                if (s == 'D'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'c':
                if (s == 'd'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'D':
                if (s == 'C'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'd':
                if (s == 'c'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'E':
                if (s == 'F'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'F':
                if (s == 'E'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'I':
                if ((s == 'P') || (s == 'J') || (s == 'T')){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'J':
                if (s == 'I'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'L':
                if (s == 'U'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'M':
                if (s == 'N'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'N':
                if (s == 'M'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'm':
                if (s == 'n'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'n':
                if (s == 'm'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'O':
                if (s == 'Q'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'o':
                if (s == 'q'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'P':
                if (s == 'I'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'p':
                if (s == 'q'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'Q':
                if (s == 'O'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'q':
                if ( (s == 'p') || (s == 'o') ){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'T':
                if (s == 'I'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'U':
                if ( (s == 'L') || (s == 'V')){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'u':
                if (s == 'v'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'V':
                if (s == 'W'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'v':
                if ( (s == 'u') || (s == 'w') ){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'W':
                if (s == 'V'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'w':
                if (s == 'v'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'X':
                if (s == 'Y'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'x':
                if (s == 'y'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'Y':
                if (s == 'X'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        case 'y':
                if (s == 'x'){
                    val = w1;
                }else{
                    val = w2;
                }
                break;
        default:
                val = w2;
                break;
    }

    return val;
}

//*****************************
// Compute Levenshtein distance
//*****************************

int LD (char const *s, char const *t,int w1,int w2)
{
    int *d; // pointer to matrix
    int n; // length of s
    int m; // length of t
    int i; // iterates through s
    int j; // iterates through t
    char s_i; // ith character of s
    char t_j; // jth character of t
    int cost; // cost
    int result; // result
    int cell; // contents of target cell
    int above; // contents of cell immediately above
    int left; // contents of cell immediately to left
    int diag; // contents of cell immediately above and to left
    int sz; // number of cells in matrix
    
      // Step 1    
    
      n = strlen (s);
      m = strlen (t);
      if (n == 0) {
        return m;
      }
      if (m == 0) {
        return n;
      }
      sz = (n+1) * (m+1) * sizeof (int);
      d = (int *) malloc (sz);
    
      // Step 2
    
      for (i = 0; i <= n; i++) {
        PutAt (d, i, 0, n, i);
      }
    
      for (j = 0; j <= m; j++) {
        PutAt (d, 0, j, n, j);
      }
    
      // Step 3
    
      for (i = 1; i <= n; i++) {
    
        s_i = s[i-1];
    
        // Step 4
    
        for (j = 1; j <= m; j++) {
    
          t_j = t[j-1];
    
          // Step 5
    
          if (s_i == t_j) {
            cost = 0;
          }
          else {
            cost = calCost(s_i,t_j,w1,w2); //Replacement is x times costlier than insertion/deletion
      }
    
          // Step 6 
    
          above = GetAt (d,i-1,j, n); //Deletion
          left = GetAt (d,i, j-1, n); //Insertion
          diag = GetAt (d, i-1,j-1, n); //Replacement
          cell = Minimum (above + 1, left + 1, diag + cost);
          PutAt (d, i, j, n, cell);
        }
      }
    
      // Step 7
    
      result = GetAt (d, n, m, n);
      free (d);
      return result;        
}
