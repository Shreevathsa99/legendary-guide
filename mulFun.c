/* Prints stars in triangle and pond as rectangles
 * Written by: Shreevathsa.
 * Date: 08/01/2019.
 */
#include<stdio.h>

//function Prototype.
void printLine(int nCol, char pattern);
void printStar(int nLine, char pattern);
void printRect(int nLine, int nCol, char pattern);

int main(){
	int nLine;
	int nCol;
	printf("Enter the number of lines: ");
	scanf("%d", &nLine);
	printf("Enter the number of columns: ");
	scanf("%d", &nCol);

	printLine(nCol, 'X'); //calling printLine function
	printStar(nLine, '*'); //calling printStar function
	printRect(nLine, nCol, '#'); // calling printRect function

	return 0;
}

void printLine(int nCol, char pattern){
	for(int i = 0; i < nCol; i++){
		printf("%c ", pattern);
	}
	printf("\n");
}

void printStar(int nLine, char pattern){
	int col;

	for(int i = 0; i < nLine; i++){
		//for(int j = 0; j < i+1; j++){
		//	printf("%c ", pattern);
		//}
		//printf("\n");
		col = i + 1;
		printLine(col, pattern);
	}
}

void printRect(int nLine, int nCol, char pattern){
	for(int i = 0; i < nLine; i++){
		//for(int j = 0; j < nCol; j++){
		//	printf("%c ", pattern);
		printLine(nCol, pattern);
		}
		printf("\n");
	}

