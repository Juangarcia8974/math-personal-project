#include <stdio.h>
#include <math.h>
#ifndef Algebra
#define Algebra

//THINGS TO DO
//1: In the function CreateMatrix();Im not sure if to use the first(do,while) I included to do the same as I did in the geometry (To check if the matrix they create is really the one they are omtending to create) [NEED TO THINK ABOUT IT]
//2: In the functions ShowMatrix(); and PrintMatrix(); if any of the elements are negetive, it messes up the presentation so I need to fix that.


void CreateSquareMatrix2(float* row, float* column, float* x1, float* y1, float* x2, float* y2);
void CreateMatrix2x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2);
void CreateMatrix2x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2);
void CreateMatrix2x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2);
void CreateMatrix2x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2);
void CreateSquareMatrix3(float* row, float* column, float* x1, float* y1, float * z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3);
void CreateMatrix3x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3);
void CreateMatrix3x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3);
void CreateMatrix3x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3, float* b3);
void CreateMatrix3x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3, float* b3, float* c3);
void CreateSquareMatrix4(float* row, float* column, float* x1, float* y1, float * z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4);
void CreateMatrix4x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4);
void CreateMatrix4x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3, float* x4, float* y4, float* z4);
void CreateMatrix4x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3, float* b3, float* x4, float* y4, float* z4, float* a4, float* b4);
void CreateMatrix4x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3, float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4);
void CreateSquareMatrix5(float* row, float* column, float* x1, float* y1, float * z1, float* a1, float*b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* x4, float* y4, float* z4, float* a4, float* b4, float* x5, float* y5, float* z5, float* a5, float* b5);
void CreateMatrix5x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, float* x5, float* y5);
void CreateMatrix5x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3, float* x4, float* y4, float* z4, float* x5, float* y5, float* z5);
void CreateMatrix5x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4, float* x5, float* y5, float* z5, float* a5);
void CreateMatrix5x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3, float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4, float* x5, float* y5, float* z5, float* a5, float* b5, float* c5);
void CreateSquareMatrix6(float* row, float* column, float* x1, float* y1, float *z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4, float* x5, float* y5, float* z5, float* a5, float* b5, float* c5, float* x6, float* y6, float* z6, float* a6, float* b6, float* c6);
void CreateMatrix6x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, float* x5, float* y5, float* x6, float* y6);
void CreateMatrix6x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3, float* x4, float* y4, float* z4, float* x5, float* y5, float* z5, float* x6, float* y6, float* z6);
void CreateMatrix6x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4, float* x5, float* y5, float* z5, float* a5, float* x6, float* y6, float* z6, float* a6);
void CreateMatrix6x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3, float* b3, float* x4, float* y4, float* z4, float* a4, float* b4, float* x5, float* y5, float* z5, float* a5, float* b5, float* x6, float* y6, float* z6, float* a6, float* b6);
void PrintMatrix(float r, float c, float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6);
void PrintSquareMatrix2(float x1, float y1, float x2, float y2);
void PrintMatrix2x3(float x1, float y1, float z1, float x2, float y2, float z2);
void PrintMatrix2x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2);
void PrintMatrix2x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2);
void PrintMatrix2x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2);
void PrintSquareMatrix3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
void PrintMatrix3x2(float x1, float y1, float x2, float y2, float x3, float y3);
void PrintMatrix3x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3);
void PrintMatrix3x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3);
void PrintMatrix3x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3);
void PrintSquareMatrix4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4);
void PrintMatrix4x2(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
void PrintMatrix4x3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4);
void PrintMatrix4x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4);
void PrintMatrix4x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4);
void PrintSquareMatrix5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4, float x5, float y5, float z5, float a5, float b5);
void PrintMatrix5x2(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x5, float y5);
void PrintMatrix5x3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float x5, float y5, float z5);
void PrintMatrix5x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4, float x5, float y5, float z5, float a5);
void PrintMatrix5x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5);
void PrintSquareMatrix6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6);
void PrintMatrix6x2(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x5, float y5, float x6, float y6);
void PrintMatrix6x3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float x5, float y5, float z5, float x6, float y6, float z6);
void PrintMatrix6x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4, float x5, float y5, float z5, float a5, float x6, float y6, float z6, float a6);
void PrintMatrix6x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4, float x5, float y5, float z5, float a5, float b5, float x6, float y6, float z6, float a6, float b6);
void ShowMatrix(int nm, float row, float column, float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6);
void AddMatrix(float r, float c, float x1a, float y1a, float z1a, float a1a, float b1a, float c1a, float x2a, float y2a, float z2a, float a2a, float b2a, float c2a, float x3a, float y3a, float z3a, float a3a, float b3a, float c3a, float x4a, float y4a, float z4a, float a4a, float b4a, float c4a, float x5a, float y5a, float z5a, float a5a, float b5a, float c5a, float x6a, float y6a, float z6a, float a6a, float b6a, float c6a, float x1b, float y1b, float z1b, float a1b, float b1b, float c1b, float x2b, float y2b, float z2b, float a2b, float b2b, float c2b, float x3b, float y3b, float z3b, float a3b, float b3b, float c3b, float x4b, float y4b, float z4b, float a4b, float b4b, float c4b, float x5b, float y5b, float z5b, float a5b, float b5b, float c5b, float x6b, float y6b, float z6b, float a6b, float b6b, float c6b);
void SubstractMatrix(float r, float c, float x1a, float y1a, float z1a, float a1a, float b1a, float c1a, float x2a, float y2a, float z2a, float a2a, float b2a, float c2a, float x3a, float y3a, float z3a, float a3a, float b3a, float c3a, float x4a, float y4a, float z4a, float a4a, float b4a, float c4a, float x5a, float y5a, float z5a, float a5a, float b5a, float c5a, float x6a, float y6a, float z6a, float a6a, float b6a, float c6a, float x1b, float y1b, float z1b, float a1b, float b1b, float c1b, float x2b, float y2b, float z2b, float a2b, float b2b, float c2b, float x3b, float y3b, float z3b, float a3b, float b3b, float c3b, float x4b, float y4b, float z4b, float a4b, float b4b, float c4b, float x5b, float y5b, float z5b, float a5b, float b5b, float c5b, float x6b, float y6b, float z6b, float a6b, float b6b, float c6b);
void MultiplyMatrix(float r1, float col1, float col2, float x1a, float y1a, float z1a, float a1a, float b1a, float c1a, float x2a, float y2a, float z2a, float a2a, float b2a, float c2a, float x3a, float y3a, float z3a, float a3a, float b3a, float c3a, float x4a, float y4a, float z4a, float a4a, float b4a, float c4a, float x5a, float y5a, float z5a, float a5a, float b5a, float c5a, float x6a, float y6a, float z6a, float a6a, float b6a, float c6a, float x1b, float y1b, float z1b, float a1b, float b1b, float c1b, float x2b, float y2b, float z2b, float a2b, float b2b, float c2b, float x3b, float y3b, float z3b, float a3b, float b3b, float c3b, float x4b, float y4b, float z4b, float a4b, float b4b, float c4b, float x5b, float y5b, float z5b, float a5b, float b5b, float c5b, float x6b, float y6b, float z6b, float a6b, float b6b, float c6b);
void CalculateDeterminant(float dim, float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6);
float CalculateDeterminant2(float x1, float y1, float x2, float y2);
float CalculateDeterminant3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
float CalculateDeterminant4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4);
float CalculateDeterminant5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4, float x5, float y5, float z5, float a5, float b5);
float CalculateDeterminant6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6);
void CalculateVectorialProduct(float* i, float* j, float* k, float x1, float y1, float z1, float x2, float y2, float z2);

	//ALGEBRA
		//MATRIX
			//Create Matrix
void CreateMatrix(float* row, float* column, float* x1, float* y1, float *z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4, float* x5, float* y5, float* z5, float* a5, float* b5, float* c5, float* x6, float* y6, float* z6, float* a6, float* b6, float* c6){
	int r;
	int c;
	int e;
	do{
		do{
			e=0;
			printf("\n\nCREATING POINT: ");
			printf("\nEnter the dimension of the Matrix you want to create [MAX is (6,6)]. Each coordinate separated by a coma and in this template: (rows,columns): ");
			scanf("%d,%d", &r, &c);
			if(r<2 || c<2 || r>6 || c>6){//Coordinates that have been introduced are not suppported by this program.
				printf("\nERROR: The dimension that has been entered is not supported by this program. Please try again.");
				e=1;
			}
		}while(e==1);
		e=0;//Reset of error variable.
		if(r==2){//2 Rows
			if(c==2){//Dimension 2 x 2
				CreateSquareMatrix2(&*row, &*column, &*x1, &*y1, &*x2, &*y2);
			}
			else if(c==3){//Dimension 2 x 3
				CreateMatrix2x3(&*row, &*column, &*x1, &*y1, &*z1, &*x2, &*y2, &*z2);
			}
			else if(c==4){//Dimension 2 x 4
				CreateMatrix2x4(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*x2, &*y2, &*z2, &*a2);
			}
			else if(c==5){//Dimension 2 x 5
				CreateMatrix2x5(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*x2, &*y2, &*z2, &*a2, &*b2);
			}
			else{//Dimension 2 x 6
				CreateMatrix2x6(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*c1, &*x2, &*y2, &*z2, &*a2, &*b2, &*c2);
			}
		}
		else if(r==3){//3 Rows
			if(c==2){//Dimension 3 x 2
				CreateMatrix3x2(&*row, &*column, &*x1, &*y1, &*x2, &*y2, &*x3, &*y3);
			}
			else if(c==3){//Dimension 3 x 3
				CreateSquareMatrix3(&*row, &*column, &*x1, &*y1, &*z1, &*x2, &*y2, &*z2, &*x3, &*y3, &*z3);
			}
			else if(c==4){//Dimension 3 x 4
				CreateMatrix3x4(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*x2, &*y2, &*z2, &*a2, &*x3, &*y3, &*z3, &*a3);
			}
			else if(c==5){//Dimension 3 x 5
				CreateMatrix3x5(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*x2, &*y2, &*z2, &*a2, &*b2, &*x3, &*y3, &*z3, &*a3, &*b3);
			}
			else{//Dimension 3 x 6
				CreateMatrix3x6(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*c1, &*x2, &*y2, &*z2, &*a2, &*b2, &*c2, &*x3, &*y3, &*z3, &*a3, &*b3, &*c3);
			}
		}
		else if(r==4){//4 Rows
			if(c==2){//Dimension 4 x 2
				CreateMatrix4x2(&*row, &*column, &*x1, &*y1, &*x2, &*y2, &*x3, &*y3, &*x4, &*y4);
			}
			else if(c==3){//Dimension 4 x 3
				CreateMatrix4x3(&*row, &*column, &*x1, &*y1, &*z1, &*x2, &*y2, &*z2, &*x3, &*y3, &*z3, &*x4, &*y4, &*z4);
			}
			else if(c==4){//Dimension 4 x 4
				CreateSquareMatrix4(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*x2, &*y2, &*z2, &*a2, &*x3, &*y3, &*z3, &*a3, &*x4, &*y4, &*z4, &*a4);
			}
			else if(c==5){//Dimension 4 x 5
				CreateMatrix4x5(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*x2, &*y2, &*z2, &*a2, &*b2, &*x3, &*y3, &*z3, &*a3, &*b3, &*x4, &*y4, &*z4, &*a4, &*b4);
			}
			else{//Dimension 4 x 6
				CreateMatrix4x6(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*c1, &*x2, &*y2, &*z2, &*a2, &*b2, &*c2, &*x3, &*y3, &*z3, &*a3, &*b3, &*c3, &*x4, &*y4, &*z4, &*a4, &*b4, &*c4);
			}
		}
		else if(r==5){//5 Rows
			if(c==2){//Dimension 5 x 2
				CreateMatrix5x2(&*row, &*column, &*x1, &*y1, &*x2, &*y2, &*x3, &*y3, &*x4, &*y4, &*x5, &*y5);
			}
			else if(c==3){//Dimension 5 x 3
				CreateMatrix5x3(&*row, &*column, &*x1, &*y1, &*z1, &*x2, &*y2, &*z2, &*x3, &*y3, &*z3, &*x4, &*y4, &*z4, &*x5, &*y5, &*z5);
			}
			else if(c==4){//Dimension 5 x 4
				CreateMatrix5x4(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*x2, &*y2, &*z2, &*a2, &*x3, &*y3, &*z3, &*a3, &*x4, &*y4, &*z4, &*a4, &*x5, &*y5, &*z5, &*a5);
			}
			else if(c==5){//Dimension 5 x 5
				CreateSquareMatrix5(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*x2, &*y2, &*z2, &*a2, &*b2, &*x3, &*y3, &*z3, &*a3, &*b3, &*x4, &*y4, &*z4, &*a4, &*b4, &*x5, &*y5, &*z5, &*a5, &*b5);
			}
			else{//Dimension 5 x 6
				CreateMatrix5x6(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*c1, &*x2, &*y2, &*z2, &*a2, &*b2, &*c2, &*x3, &*y3, &*z3, &*a3, &*b3, &*c3, &*x4, &*y4, &*z4, &*a4, &*b4, &*c4, &*x5, &*y5, &*z5, &*a5, &*b5, &*c5);
			}
		}
		else{//6 Rows
			if(c==2){//Dimension 6 x 2
				CreateMatrix6x2(&*row, &*column, &*x1, &*y1, &*x2, &*y2, &*x3, &*y3, &*x4, &*y4, &*x5, &*y5, &*x6, &*y6);
			}
			else if(c==3){//Dimension 6 x 3
				CreateMatrix6x3(&*row, &*column, &*x1, &*y1, &*z1, &*x2, &*y2, &*z2, &*x3, &*y3, &*z3, &*x4, &*y4, &*z4, &*x5, &*y5, &*z5, &*x6, &*y6, &*z6);
			}
			else if(c==4){//Dimension 6 x 4
				CreateMatrix6x4(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*x2, &*y2, &*z2, &*a2, &*x3, &*y3, &*z3, &*a3, &*x4, &*y4, &*z4, &*a4, &*x5, &*y5, &*z5, &*a5, &*x6, &*y6, &*z6, &*a6);
			}
			else if(c==5){//Dimension 6 x 5
				CreateMatrix6x5(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*x2, &*y2, &*z2, &*a2, &*b2, &*x3, &*y3, &*z3, &*a3, &*b3, &*x4, &*y4, &*z4, &*a4, &*b4, &*x5, &*y5, &*z5, &*a5, &*b5, &*x6, &*y6, &*z6, &*a6, &*b6);
			}
			else{//Dimension 6 x 6
				CreateSquareMatrix6(&*row, &*column, &*x1, &*y1, &*z1, &*a1, &*b1, &*c1, &*x2, &*y2, &*z2, &*a2, &*b2, &*c2, &*x3, &*y3, &*z3, &*a3, &*b3, &*c3, &*x4, &*y4, &*z4, &*a4, &*b4, &*c4, &*x5, &*y5, &*z5, &*a5, &*b5, &*c5, &*x6, &*y6, &*z6, &*a6, &*b6, &*c6);
			}
		}
	}while(e==1);
}
				//Dimension 2 x 2
void CreateSquareMatrix2(float* row, float* column, float* x1, float* y1, float* x2, float* y2){
		*row=2;
		*column=2;
		printf("\nEnter the 2 elements of the first row separated by a coma: ");
		scanf("%f,%f",&*x1, &*y1);
		printf("\nNow enter the 2 elements of the second row separated by a coma: ");
		scanf("%f,%f",&*x2, &*y2);
}
				//Dimension 2 x 3
void CreateMatrix2x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2){
	*row=2;
	*column=3;
	printf("\nEnter the 3 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f",&*x1 ,&*y1 ,&*z1);
	printf("\nNow enter the 3 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f",&*x2 ,&*y2 ,&*z2);	
}
				//Dimension 2 x 4
void CreateMatrix2x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2){
	*row=2;
	*column=4;
	printf("\nEnter the 4 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1);
	printf("\nNow enter the 4 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2);
}
				//Dimension 2 x 5
void CreateMatrix2x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2){
	*row=2;
	*column=5;
	printf("\nEnter the 5 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1);
	printf("\nNow enter the 5 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2);
}
				//Dimension 2 x 6
void CreateMatrix2x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2){
	*row=2;
	*column=5;
	printf("\nEnter the 6 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1, &*c1);
	printf("\nNow enter the 6 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2, &*c2);
}
				//Dimension 3 x 3			
void CreateSquareMatrix3(float* row, float* column, float* x1, float* y1, float *z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3){
		*row=3;
		*column=3;
		printf("\nEnter the 3 elements of the first row separated by a coma: ");
		scanf("%f,%f,%f",&*x1, &*y1, &*z1);
		printf("\nNow enter the 3 elements of the second row separated by a coma: ");
		scanf("%f,%f,%f",&*x2, &*y2, &*z2);
		printf("\nNow enter the 3 elements of the third row separated by a coma: ");
		scanf("%f,%f,%f",&*x3, &*y3, &*z3);
}
				//Dimension 3 x 2
void CreateMatrix3x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3){
	*row=3;
	*column=2;
	printf("\nEnter the 2 elements of the first row separated by a coma: ");
	scanf("%f,%f", &*x1, &*y1);
	printf("\nNow enter the 2 elements of the second row separated by a coma: ");
	scanf("%f,%f", &*x2, &*y2);
	printf("\nNow enter the 2 elements of the third row separated by a coma: ");
	scanf("%f,%f", &*x3, &*y3);

}
				//Dimension 3 x 4
void CreateMatrix3x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3){
	*row=3;
	*column=4;
	printf("\nEnter the 4 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1);
	printf("\nNow enter the 4 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2);
	printf("\nNow enter the 4 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3);
}
				//Dimension 3 x 5
void CreateMatrix3x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3, float* b3){
	*row=3;
	*column=5;
	printf("\nEnter the 5 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1);
	printf("\nNow enter the 5 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2);
	printf("\nNow enter the 5 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3);
}
				//Dimension 3 x 6
void CreateMatrix3x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3, float* b3, float* c3){
	*row=3;
	*column=6;
	printf("\nEnter the 6 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1, &*c2);
	printf("\nNow enter the 6 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2, &*c2);
	printf("\nNow enter the 6 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3, &*c3);

}
				//Dimension 4 x 4
void CreateSquareMatrix4(float* row, float* column, float* x1, float* y1, float *z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4){
		*row=4;
		*column=4;
		printf("\nEnter the 4 elements of the first row separated by a coma: ");
		scanf("%f,%f,%f,%f",&*x1, &*y1, &*z1, &*a1);
		printf("\nNow enter the 4 elements of the second row separated by a coma: ");
		scanf("%f,%f,%f,%f",&*x2, &*y2, &*z2, &*a2);
		printf("\nNow enter the 4 elements of the third row separated by a coma: ");
		scanf("%f,%f,%f,%f",&*x3, &*y3, &*z3, &*a3);
		printf("\nNow enter the 4 elements of the fourth row separated by a coma: ");
		scanf("%f,%f,%f,%f",&*x4, &*y4, &*z4, &*a4);
}
				//Dimension 4 x 2
void CreateMatrix4x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4){
	*row=4;
	*column=2;
	printf("\nEnter the 2 elements of the first row separated by a coma: ");
	scanf("%f,%f", &*x1, &*y1);
	printf("\nNow enter the 2 elements of the second row separated by a coma: ");
	scanf("%f,%f", &*x2, &*y2);
	printf("\nNow enter the 2 elements of the third row separated by a coma: ");
	scanf("%f,%f", &*x3, &*y3);
	printf("\nNow enter the 2 elements of the fourth row separated by a coma: ");
	scanf("%f,%f", &*x4, &*y4);
}
				//Dimension 4 x 3
void CreateMatrix4x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3, float* x4, float* y4, float* z4){
	*row=4;
	*column=3;
	printf("\nEnter the 3 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f", &*x1, &*y1, &*z1);
	printf("\nNow enter the 3 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f", &*x2, &*y2, &*z2);
	printf("\nNow enter the 3 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f", &*x3, &*y3, &*z3);
	printf("\nNow enter the 3 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f", &*x4, &*y4, &*z4);
}
				//Dimension 4 x 5
void CreateMatrix4x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3, float* b3, float* x4, float* y4, float* z4, float* a4, float* b4){
	*row=4;
	*column=5;
	printf("\nEnter the 5 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1);
	printf("\nNow enter the 5 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2);
	printf("\nNow enter the 5 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3);
	printf("\nNow enter the 5 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4, &*b4);
}
				//Dimension 4 x 6
void CreateMatrix4x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3, float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4){
	*row=4;
	*column=5;
	printf("\nEnter the 6 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1, &*c1);
	printf("\nNow enter the 6 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2, &*c2);
	printf("\nNow enter the 6 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3, &*c3);
	printf("\nNow enter the 6 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4, &*b4, &*c4);
}
				//Dimension 5 x 5
void CreateSquareMatrix5(float* row, float* column, float* x1, float* y1, float *z1, float* a1, float*b1, float* x2, float* y2, float* z2, float* a2, float*b2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* x4, float* y4, float* z4, float* a4, float*b4, float* x5, float* y5, float* z5, float* a5, float* b5){
	*row=5;
	*column=5;
	printf("\nEnter the 5 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1);
	printf("\nNow enter the 5 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2);
	printf("\nNow enter the 5 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3);
	printf("\nNow enter the 5 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4, &*b4);
	printf("\nNow enter the 5 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x5, &*y5, &*z5, &*a5, &*b5);
}
				//Dimension 5 x 2
void CreateMatrix5x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, float* x5, float* y5){
	*row=5;
	*row=2;
	printf("\nEnter the 2 elements of the first row separated by a coma: ");
	scanf("%f,%f", &*x1, &*y1);
	printf("\nNow enter the 2 elements of the second row separated by a coma: ");
	scanf("%f,%f", &*x2, &*y2);
	printf("\nNow enter the 2 elements of the third row separated by a coma: ");
	scanf("%f,%f", &*x3, &*y3);
	printf("\nNow enter the 2 elements of the fourth row separated by a coma: ");
	scanf("%f,%f", &*x4, &*y4);
	printf("\nNow enter the 2 elements of the fifth row separated by a coma: ");
	scanf("%f,%f", &*x5, &*y5);
}
				//Dimension 5 x 3
void CreateMatrix5x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3, float* x4, float* y4, float* z4, float* x5, float* y5, float* z5){
	*row=5;
	*column=3;
	printf("\nEnter the 3 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f", &*x1, &*y1, &*z1);
	printf("\nNow enter the 3 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f", &*x2, &*y2, &*z2);
	printf("\nNow enter the 3 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f", &*x3, &*y3, &*z3);
	printf("\nNow enter the 3 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f", &*x4, &*y4, &*z4);
	printf("\nNow enter the 3 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f", &*x5, &*y5, &*z5);
}
				//Dimension 5 x 4
void CreateMatrix5x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4, float* x5, float* y5, float* z5, float* a5){
	*row=5;
	*column=4;
	printf("\nEnter the 4 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1);
	printf("\nNow enter the 4 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2);
	printf("\nNow enter the 4 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3);
	printf("\nNow enter the 4 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4);
	printf("\nNow enter the 4 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x5, &*y5, &*z5, &*a5);	
}
				//Dimension 5 x 6
void CreateMatrix5x6(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3, float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4, float* x5, float* y5, float* z5, float* a5, float* b5, float* c5){
	*row=5;
	*column=6;
	printf("\nEnter the 6 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1, &*c1);
	printf("\nNow enter the 6 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2, &*c2);
	printf("\nNow enter the 6 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3, &*c3);
	printf("\nNow enter the 6 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4, &*b4, &*c4);
	printf("\nNow enter the 6 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x5, &*y5, &*z5, &*a5, &*b5, &*c5);
}
				//Dimension 6 x 6
void CreateSquareMatrix6(float* row, float* column, float* x1, float* y1, float *z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4, float* x5, float* y5, float* z5, float* a5, float* b5, float* c5, float* x6, float* y6, float* z6, float* a6, float* b6, float* c6){
	*row=6;
	*column=6;
	printf("\nEnter the 6 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1, &*c1);
	printf("\nNow enter the 6 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2, &*c2);
	printf("\nNow enter the 6 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3, &*c3);
	printf("\nNow enter the 6 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4, &*b4, &*c4);
	printf("\nNow enter the 6 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x5, &*y5, &*z5, &*a5, &*b5, &*c5);
	printf("\nNow enter the 6 elements of the sixth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f,%f", &*x6, &*y6, &*z6, &*a6, &*b6, &*c6);

}
				//Dimension 6 x 2
void CreateMatrix6x2(float* row, float* column, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, float* x5, float* y5, float* x6, float* y6){
	*row=6;
	*column=2;
	printf("\nEnter the 2 elements of the first row separated by a coma: ");
	scanf("%f,%f", &*x1, &*y1);
	printf("\nNow enter the 2 elements of the second row separated by a coma: ");
	scanf("%f,%f", &*x2, &*y2);
	printf("\nNow enter the 2 elements of the third row separated by a coma: ");
	scanf("%f,%f", &*x3, &*y3);
	printf("\nNow enter the 2 elements of the fourth row separated by a coma: ");
	scanf("%f,%f", &*x4, &*y4);
	printf("\nNow enter the 2 elements of the fifth row separated by a coma: ");
	scanf("%f,%f", &*x5, &*y5);
	printf("\nNow enter the 2 elements of the sixth row separated by a coma: ");
	scanf("%f,%f", &*x6, &*y6);	
}
				//Dimension 6 x 3
void CreateMatrix6x3(float* row, float* column, float* x1, float* y1, float* z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3, float* x4, float* y4, float* z4, float* x5, float* y5, float* z5, float* x6, float* y6, float* z6){
	*row=6;
	*column=3;
	printf("\nEnter the 3 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f", &*x1, &*y1, &*z1);
	printf("\nNow enter the 3 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f", &*x2, &*y2, &*z2);
	printf("\nNow enter the 3 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f", &*x3, &*y3, &*z3);
	printf("\nNow enter the 3 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f", &*x4, &*y4, &*z4);
	printf("\nNow enter the 3 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f", &*x5, &*y5, &*z5);
	printf("\nNow enter the 3 elements of the sixth row separated by a coma: ");
	scanf("%f,%f,%f", &*x6, &*y6, &*z6);
}
				//Dimension 6 x 4
void CreateMatrix6x4(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4, float* x5, float* y5, float* z5, float* a5, float* x6, float* y6, float* z6, float* a6){
	*row=6;
	*column=4;
	printf("\nEnter the 4 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1);
	printf("\nNow enter the 4 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2);
	printf("\nNow enter the 4 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3);
	printf("\nNow enter the 4 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4);
	printf("\nNow enter the 4 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x5, &*y5, &*z5, &*a5);
	printf("\nNow enter the 4 elements of the sixth row separated by a coma: ");
	scanf("%f,%f,%f,%f", &*x6, &*y6, &*z6, &*a6);	
}
				//Dimension 6 x 5
void CreateMatrix6x5(float* row, float* column, float* x1, float* y1, float* z1, float* a1, float* b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3, float* b3, float* x4, float* y4, float* z4, float* a4, float* b4, float* x5, float* y5, float* z5, float* a5, float* b5, float* x6, float* y6, float* z6, float* a6, float* b6){
	*row=6;
	*column=5;
	printf("\nEnter the 5 elements of the first row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x1, &*y1, &*z1, &*a1, &*b1);
	printf("\nNow enter the 5 elements of the second row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x2, &*y2, &*z2, &*a2, &*b2);
	printf("\nNow enter the 5 elements of the third row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x3, &*y3, &*z3, &*a3, &*b3);
	printf("\nNow enter the 5 elements of the fourth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x4, &*y4, &*z4, &*a4, &*b4);
	printf("\nNow enter the 5 elements of the fifth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x5, &*y5, &*z5, &*a5, &*b5);
	printf("\nNow enter the 5 elements of the sixth row separated by a coma: ");
	scanf("%f,%f,%f,%f,%f", &*x6, &*y6, &*z6, &*a6, &*b6);	
}
			//PRINT
				//Print any matrix
void PrintMatrix(float r, float c, float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6){
	if(r==c){//Its a square matrix
		if(r==2){
			PrintSquareMatrix2(x1, y1, x2, y2);
		}
		else if(r==3){
			PrintSquareMatrix3(x1, y1, z1, x2, y2, z2, x3, y3, z3);
		}
		else if(r==4){
			PrintSquareMatrix4(x1, y1, z1, a1, x2, y2, z2, a2, x3, y3, z3, a3, x4, y4, z4, a4);
		}
		else if(r==5){
			PrintSquareMatrix5(x1, y1, z1, a1, b1, x2, y2, z2, a2, b2, x3, y3, z3, a3, b3, x4, y4, z4, a4, b4, x5, y5, z5, a5, b5);
		}
		else{
			PrintSquareMatrix6(x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5, x6, y6, z6, a6, b6, c6);
		}
	}
	else{//Its an irregular matrix
		if(r==2){
			if(c==3){
				PrintMatrix2x3(x1, y1, z1, x2, y2, z2);
			}
			else if(c==4){
				PrintMatrix2x4(x1, y1, z1, a1, x2, y2, z2, a2);
			}
			else if(c==5){
				PrintMatrix2x5(x1, y1, z1, a1, b1, x2, y2, z2, a2, b2);
			}
			else{PrintMatrix2x6(x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2);}
		}
		else if(r==3){
			if(c==2){
				PrintMatrix3x2(x1, y1, x2, y2, x3, y3);
			}
			else if(c==4){
				PrintMatrix3x4(x1, y1, z1, a1, x2, y2, z2, a2, x3, y3, z3, a3);
			}
			else if(c==5){
				PrintMatrix3x5(x1, y1, z1, a1, b1, x2, y2, z2, a2, b2, x3, y3, z3, a3, b3);
			}
			else{PrintMatrix3x6(x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3);}
		}
		else if(r==4){
			if(c==2){
				PrintMatrix4x2(x1, y1, x2, y2, x3, y3, x4, y4);
			}
			else if(c==3){
				PrintMatrix4x3(x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4);
			}
			else if(c==5){
				PrintMatrix4x5(x1, y1, z1, a1, b1, x2, y2, z2, a2, b2, x3, y3, z3, a3, b3, x4, y4, z4, a4, b4);
			}
			else{PrintMatrix4x6(x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4);}
		}
		else if(r==5){
			if(c==2){
				PrintMatrix5x2(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
			}
			else if(c==3){
				PrintMatrix5x3(x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, x5, y5, z5);
			}
			else if(c==4){
				PrintMatrix5x4(x1, y1, z1, a1, x2, y2, z2, a2, x3, y3, z3, a3, x4, y4, z4, a4, x5, y5, z5, a5);
			}
			else{PrintMatrix5x6(x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5);}
		}
		else{
			if(c==2){
				PrintMatrix6x2(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6);
			}
			else if(c==3){
				PrintMatrix6x3(x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, x5, y5, z5, x6, y6, z6);
			}
			else if(c==4){
				PrintMatrix6x4(x1, y1, z1, a1, x2, y2, z2, a2, x3, y3, z3, a3, x4, y4, z4, a4, x5, y5, z5, a5, x6, y6, z6, a6);
			}
			else{PrintMatrix6x5(x1, y1, z1, a1, b1, x2, y2, z2, a2, b2, x3, y3, z3, a3, b3, x4, y4, z4, a4, b4, x5, y5, z5, a5, b5, x6, y6, z6, a6, b6);}
		}
	}
}
				//PrintSquareMatrix2
void PrintSquareMatrix2(float x1, float y1, float x2, float y2){
	printf("|%f|%f|\n", x1, y1);
	printf("|%f|%f|\n"), x2, y2;
}
				//Print Matrix 2x3
void PrintMatrix2x3(float x1, float y1, float z1, float x2, float y2, float z2){
	printf("|%f|%f|%f|\n", x1, y1, z1);
	printf("|%f|%f|%f|\n", x2, y2, z2);
}
				//Print Matrix 2x4
void PrintMatrix2x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2){
	printf("|%f|%f|%f|%f|\n", x1, y1, z1, a1);
	printf("|%f|%f|%f|%f|\n", x2, y2, z2, a2);
}
				//Print Matrix 2x5
void PrintMatrix2x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2){
	printf("|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1);
	printf("|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2);
}
				//Print Matrix 2x6
void PrintMatrix2x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2){
	printf("|%f|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1, c1);
	printf("|%f|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2, c2);
}
				//PrintSquareMatrix3
void PrintSquareMatrix3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){
	printf("|%f|%f|%f|\n", x1, y1, z1);
	printf("|%f|%f|%f|\n", x2, y2, z2);
	printf("|%f|%f|%f|\n", x3, y3, z3);
}
				//Print Matrix 3x2
void PrintMatrix3x2(float x1, float y1, float x2, float y2, float x3, float y3){
	printf("|%f|%f|\n", x1, y1);
	printf("|%f|%f|\n", x2, y2);
	printf("|%f|%f|\n", x3, y3);
}
				//Print Matrix 3x4
void PrintMatrix3x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3){
	printf("|%f|%f|%f|%f|\n", x1, y1, z1, a1);
	printf("|%f|%f|%f|%f|\n", x2, y2, z2, a2);
	printf("|%f|%f|%f|%f|\n", x3, y3, z3, a3);
}
				//Print Matrix 3x5
void PrintMatrix3x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3){
	printf("|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1);
	printf("|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2);
	printf("|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3);
}
				//Print Matrix 3x6
void PrintMatrix3x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3){
	printf("|%f|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1, c1);
	printf("|%f|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2, c2);
	printf("|%f|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3, c3);
}
				//PrintSquareMatrix4
void PrintSquareMatrix4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4){
	printf("|%f|%f|%f|%f|\n", x1, y1, z1, a1);
	printf("|%f|%f|%f|%f|\n", x2, y2, z2, a2);
	printf("|%f|%f|%f|%f|\n", x3, y3, z3, a3);
	printf("|%f|%f|%f|%f|\n", x4, y4, z4, a4);
}
				//Print Matrix 4x2
void PrintMatrix4x2(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){
	printf("|%f|%f|\n", x1, y1);
	printf("|%f|%f|\n", x2, y2);
	printf("|%f|%f|\n", x3, y3);
	printf("|%f|%f|\n", x4, y4);

}
				//Print Matrix 4x3
void PrintMatrix4x3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4){
	printf("|%f|%f|%f|\n", x1, y1, z1);
	printf("|%f|%f|%f|\n", x2, y2, z2);
	printf("|%f|%f|%f|\n", x3, y3, z3);
	printf("|%f|%f|%f|\n", x4, y4, z4);
}
				//Print Matrix 4x5
void PrintMatrix4x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4){
	printf("|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1);
	printf("|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2);
	printf("|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3);
	printf("|%f|%f|%f|%f|%f|\n", x4, y4, z4, a4, b4);
}
				//Print Matrix 4x6
void PrintMatrix4x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4){
	printf("|%f|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1, c1);
	printf("|%f|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2, c2);
	printf("|%f|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3, c3);
	printf("|%f|%f|%f|%f|%f|%f|\n", x4, y4, z4, a4, b4, c4);
}
				//PrintSquareMatrix5
void PrintSquareMatrix5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4, float x5, float y5, float z5, float a5, float b5){
	printf("|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1);
	printf("|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2);
	printf("|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3);
	printf("|%f|%f|%f|%f|%f|\n", x4, y4, z4, a4, b4);
	printf("|%f|%f|%f|%f|%f|\n", x5, y5, z5, a5, b5);
}
				//Print Matrix 5x2
void PrintMatrix5x2(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x5, float y5){
	printf("|%f|%f|\n", x1, y1);
	printf("|%f|%f|\n", x2, y2);
	printf("|%f|%f|\n", x3, y3);
	printf("|%f|%f|\n", x4, y4);
	printf("|%f|%f|\n", x5, y5);

}
				//Print Matrix 5x3
void PrintMatrix5x3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float x5, float y5, float z5){
	printf("|%f|%f|%f|\n", x1, y1, z1);
	printf("|%f|%f|%f|\n", x2, y2, z2);
	printf("|%f|%f|%f|\n", x3, y3, z3);
	printf("|%f|%f|%f|\n", x4, y4, z4);
	printf("|%f|%f|%f|\n", x5, y5, z5);
}
				//Print Matrix 5x4
void PrintMatrix5x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4, float x5, float y5, float z5, float a5){
	printf("|%f|%f|%f|%f|\n", x1, y1, z1, a1);
	printf("|%f|%f|%f|%f|\n", x2, y2, z2, a2);
	printf("|%f|%f|%f|%f|\n", x3, y3, z3, a3);
	printf("|%f|%f|%f|%f|\n", x4, y4, z4, a4);
	printf("|%f|%f|%f|%f|\n", x5, y5, z5, a5);

}
				//Print Matrix 5x6
void PrintMatrix5x6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5){
	printf("|%f|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1, c1);
	printf("|%f|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2, c2);
	printf("|%f|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3, c3);
	printf("|%f|%f|%f|%f|%f|%f|\n", x4, y4, z4, a4, b4, c4);
	printf("|%f|%f|%f|%f|%f|%f|\n", x5, y5, z5, a5, b5, c5);

}
				//PrintSquareMatrix6
void PrintSquareMatrix6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6){
	printf("|%f|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1, c1);
	printf("|%f|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2, c2);
	printf("|%f|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3, c3);
	printf("|%f|%f|%f|%f|%f|%f|\n", x4, y4, z4, a4, b4, c4);
	printf("|%f|%f|%f|%f|%f|%f|\n", x5, y5, z5, a5, b5, c5);
	printf("|%f|%f|%f|%f|%f|%f|\n", x6, y6, z6, a6, b6, c6);
}
				//Print Matrix 6x2
void PrintMatrix6x2(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x5, float y5, float x6, float y6){
	printf("|%f|%f|\n", x1, y1);
	printf("|%f|%f|\n", x2, y2);
	printf("|%f|%f|\n", x3, y3);
	printf("|%f|%f|\n", x4, y4);
	printf("|%f|%f|\n", x5, y5);
	printf("|%f|%f|\n", x6, y6);
}
				//Print Matrix 6x3
void PrintMatrix6x3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float x5, float y5, float z5, float x6, float y6, float z6){
	printf("|%f|%f|%f|\n", x1, y1, z1);
	printf("|%f|%f|%f|\n", x2, y2, z2);
	printf("|%f|%f|%f|\n", x3, y3, z3);
	printf("|%f|%f|%f|\n", x4, y4, z4);
	printf("|%f|%f|%f|\n", x5, y5, z5);
	printf("|%f|%f|%f|\n", x6, y6, z6);
}
				//Print Matrix 6x4
void PrintMatrix6x4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4, float x5, float y5, float z5, float a5, float x6, float y6, float z6, float a6){
	printf("|%f|%f|%f|%f|\n", x1, y1, z1, a1);
	printf("|%f|%f|%f|%f|\n", x2, y2, z2, a2);
	printf("|%f|%f|%f|%f|\n", x3, y3, z3, a3);
	printf("|%f|%f|%f|%f|\n", x4, y4, z4, a4);
	printf("|%f|%f|%f|%f|\n", x5, y5, z5, a5);
	printf("|%f|%f|%f|%f|\n", x6, y6, z6, a6);
}
				//Print Matrix 6x5
void PrintMatrix6x5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4, float x5, float y5, float z5, float a5, float b5, float x6, float y6, float z6, float a6, float b6){
	printf("|%f|%f|%f|%f|%f|\n", x1, y1, z1, a1, b1);
	printf("|%f|%f|%f|%f|%f|\n", x2, y2, z2, a2, b2);
	printf("|%f|%f|%f|%f|%f|\n", x3, y3, z3, a3, b3);
	printf("|%f|%f|%f|%f|%f|\n", x4, y4, z4, a4, b4);
	printf("|%f|%f|%f|%f|%f|\n", x5, y5, z5, a5, b5);
	printf("|%f|%f|%f|%f|%f|\n", x6, y6, z6, a6, b6);
}
			//Show Matrix
void ShowMatrix(int nm, float row, float column, float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6){
	printf("\nMatrix %d:\n", nm);
	PrintMatrix(row, column, x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5, x6, y6, z6, a6, b6, c6);
}
			//Operations
				//Addition
void AddMatrix(float r, float c, float x1a, float y1a, float z1a, float a1a, float b1a, float c1a, float x2a, float y2a, float z2a, float a2a, float b2a, float c2a, float x3a, float y3a, float z3a, float a3a, float b3a, float c3a, float x4a, float y4a, float z4a, float a4a, float b4a, float c4a, float x5a, float y5a, float z5a, float a5a, float b5a, float c5a, float x6a, float y6a, float z6a, float a6a, float b6a, float c6a, float x1b, float y1b, float z1b, float a1b, float b1b, float c1b, float x2b, float y2b, float z2b, float a2b, float b2b, float c2b, float x3b, float y3b, float z3b, float a3b, float b3b, float c3b, float x4b, float y4b, float z4b, float a4b, float b4b, float c4b, float x5b, float y5b, float z5b, float a5b, float b5b, float c5b, float x6b, float y6b, float z6b, float a6b, float b6b, float c6b){
	float x1=x1a+x1b;
	float y1=y1a+y1b;
	float z1=z1a+z1b;
	float a1=a1a+a1b;
	float b1=b1a+b1b;
	float c1=c1a+c1b;
	float x2=x2a+x2b;
	float y2=y2a+y2b;
	float z2=z2a+z2b;
	float a2=a2a+a2b;
	float b2=b2a+b2b;
	float c2=c2a+c2b;
	float x3=x1a+x1b;
	float y3=y3a+y3b;
	float z3=z3a+z3b;
	float a3=a3a+a3b;
	float b3=b3a+b3b;
	float c3=c3a+c3b;
	float x4=x4a+x4b;
	float y4=y4a+y4b;
	float z4=z4a+z4b;
	float a4=a4a+a4b;
	float b4=b4a+b4b;
	float c4=c4a+c4b;
	float x5=x5a+x5b;
	float y5=y5a+y5b;
	float z5=z5a+z5b;
	float a5=a5a+a5b;
	float b5=b5a+b5b;
	float c5=c5a+c5b;
	float x6=x6a+x6b;
	float y6=y6a+y6b;
	float z6=z6a+z6b;
	float a6=a6a=a6b;
	float b6=a6a+a6b;
	float c6=c6a+c6b;
	printf("\nResult:\n");
	//PRINT THE RESULT
	PrintMatrix(r, c, x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5, x6, y6, z6, a6, b6, c6);
}
				//Substraction	
void SubstractMatrix(float r, float c, float x1a, float y1a, float z1a, float a1a, float b1a, float c1a, float x2a, float y2a, float z2a, float a2a, float b2a, float c2a, float x3a, float y3a, float z3a, float a3a, float b3a, float c3a, float x4a, float y4a, float z4a, float a4a, float b4a, float c4a, float x5a, float y5a, float z5a, float a5a, float b5a, float c5a, float x6a, float y6a, float z6a, float a6a, float b6a, float c6a, float x1b, float y1b, float z1b, float a1b, float b1b, float c1b, float x2b, float y2b, float z2b, float a2b, float b2b, float c2b, float x3b, float y3b, float z3b, float a3b, float b3b, float c3b, float x4b, float y4b, float z4b, float a4b, float b4b, float c4b, float x5b, float y5b, float z5b, float a5b, float b5b, float c5b, float x6b, float y6b, float z6b, float a6b, float b6b, float c6b){
	float x1=x1a-x1b;
	float y1=y1a-y1b;
	float z1=z1a-z1b;
	float a1=a1a-a1b;
	float b1=b1a-b1b;
	float c1=c1a-c1b;
	float x2=x2a-x2b;
	float y2=y2a-y2b;
	float z2=z2a-z2b;
	float a2=a2a-a2b;
	float b2=b2a-b2b;
	float c2=c2a-c2b;
	float x3=x1a-x1b;
	float y3=y3a-y3b;
	float z3=z3a-z3b;
	float a3=a3a-a3b;
	float b3=b3a-b3b;
	float c3=c3a-c3b;
	float x4=x4a-x4b;
	float y4=y4a-y4b;
	float z4=z4a-z4b;
	float a4=a4a-a4b;
	float b4=b4a-b4b;
	float c4=c4a-c4b;
	float x5=x5a-x5b;
	float y5=y5a-y5b;
	float z5=z5a-z5b;
	float a5=a5a-a5b;
	float b5=b5a-b5b;
	float c5=c5a-c5b;
	float x6=x6a-x6b;
	float y6=y6a-y6b;
	float z6=z6a-z6b;
	float a6=a6a-a6b;
	float b6=a6a-a6b;
	float c6=c6a-c6b;
	printf("\nResult:\n");
	//PRINT THE RESULT
	PrintMatrix(r, c, x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5, x6, y6, z6, a6, b6, c6);
}
			//Multiplication
void MultiplyMatrix(float r1, float col1, float col2, float x1a, float y1a, float z1a, float a1a, float b1a, float c1a, float x2a, float y2a, float z2a, float a2a, float b2a, float c2a, float x3a, float y3a, float z3a, float a3a, float b3a, float c3a, float x4a, float y4a, float z4a, float a4a, float b4a, float c4a, float x5a, float y5a, float z5a, float a5a, float b5a, float c5a, float x6a, float y6a, float z6a, float a6a, float b6a, float c6a, float x1b, float y1b, float z1b, float a1b, float b1b, float c1b, float x2b, float y2b, float z2b, float a2b, float b2b, float c2b, float x3b, float y3b, float z3b, float a3b, float b3b, float c3b, float x4b, float y4b, float z4b, float a4b, float b4b, float c4b, float x5b, float y5b, float z5b, float a5b, float b5b, float c5b, float x6b, float y6b, float z6b, float a6b, float b6b, float c6b){
	//If the multiplication is A x B (A and B being matrices of the necessary dimensions to be multiplied), the matrix result is going to have the following dimensions: (same rows as A and same columns as B).
	//A and B can be multiplied whenever the number of columns of A is equal to the number of rows of B.
	//For these two reasons, I dont only need the dimension of one of the matrices, but I also need the number of columns of the second Matrix.
	float r=r1;//Rows of the result 
	float c=col2;//Columns of the result
	float x1=x1a*x1b+y1a*x2b+z1a*x3b+a1a*x4b+b1a*x5b+c1a*x6b;
	float y1=x1a*y1b+y1a*y2b+z1a*y3b+a1a*y4b+b1a*y5b+c1a*y6b;
	float z1=x1a*z1b+y1a*z2b+z1a*z3b+a1a*z4b+b1a*z5b+c1a*z6b;
	float a1=x1a*a1b+y1a*a2b+z1a*a3b+a1a*a4b+b1a*a5b+c1a*a6b;
	float b1=x1a*b1b+y1a*b2b+z1a*b3b+a1a*b4b+b1a*b5b+c1a*b6b;
	float c1=x1a*c1b+y1a*c2b+z1a*c3b+a1a*c4b+b1a*c5b+c1a*c6b;
	float x2=x2a*x1b+y2a*x2b+z2a*x3b+a2a*x4b+b2a*x5b+c2a*x6b;
	float y2=x2a*y1b+y2a*y2b+z2a*y3b+a2a*y4b+b2a*y5b+c2a*y6b;
	float z2=x2a*z1b+y2a*z2b+z2a*z3b+a2a*z4b+b2a*z5b+c2a*z6b;
	float a2=x2a*a1b+y2a*a2b+z2a*a3b+a2a*a4b+b2a*a5b+c2a*a6b;
	float b2=x2a*b1b+y2a*b2b+z2a*b3b+a2a*b4b+b2a*b5b+c2a*b6b;
	float c2=x2a*c1b+y2a*c2b+z2a*c3b+a2a*c4b+b2a*c5b+c2a*c6b;
	float x3=x3a*x1b+y3a*x2b+z3a*x3b+a3a*x4b+b3a*x5b+c3a*x6b;
	float y3=x3a*y1b+y3a*y2b+z3a*y3b+a3a*y4b+b3a*y5b+c3a*y6b;
	float z3=x3a*z1b+y3a*z2b+z3a*z3b+a3a*z4b+b3a*z5b+c3a*z6b;
	float a3=x3a*a1b+y3a*a2b+z3a*a3b+a3a*a4b+b3a*a5b+c3a*a6b;
	float b3=x3a*b1b+y3a*b2b+z3a*b3b+a3a*b4b+b3a*b5b+c3a*b6b;
	float c3=x3a*c1b+y3a*c2b+z3a*c3b+a3a*c4b+b3a*c5b+c3a*c6b;
	float x4=x4a*x1b+y4a*x2b+z4a*x3b+a4a*x4b+b4a*x5b+c4a*x6b;
	float y4=x4a*y1b+y4a*y2b+z4a*y3b+a4a*y4b+b4a*y5b+c4a*y6b;
	float z4=x4a*z1b+y4a*z2b+z4a*z3b+a4a*z4b+b4a*z5b+c4a*z6b;
	float a4=x4a*a1b+y4a*a2b+z4a*a3b+a4a*a4b+b4a*a5b+c4a*a6b;
	float b4=x4a*b1b+y4a*b2b+z4a*b3b+a4a*b4b+b4a*b5b+c4a*b6b;
	float c4=x4a*c1b+y4a*c2b+z4a*c3b+a4a*c4b+b4a*c5b+c4a*c6b;
	float x5=x5a*x1b+y5a*x2b+z5a*x3b+a5a*x4b+b5a*x5b+c5a*x6b;
	float y5=x5a*y1b+y5a*y2b+z5a*y3b+a5a*y4b+b5a*y5b+c5a*y6b;
	float z5=x5a*z1b+y5a*z2b+z5a*z3b+a5a*z4b+b5a*z5b+c5a*z6b;
	float a5=x5a*a1b+y5a*a2b+z5a*a3b+a5a*a4b+b5a*a5b+c5a*a6b;
	float b5=x5a*b1b+y5a*b2b+z5a*b3b+a5a*b4b+b5a*b5b+c5a*b6b;
	float c5=x5a*c1b+y5a*c2b+z5a*c3b+a5a*c4b+b5a*c5b+c5a*c6b;
	float x6=x6a*x1b+y6a*x2b+z6a*x3b+a6a*x4b+b6a*x5b+c6a*x6b;
	float y6=x6a*y1b+y6a*y2b+z6a*y3b+a6a*y4b+b6a*y5b+c6a*y6b;
	float z6=x6a*z1b+y6a*z2b+z6a*z3b+a6a*z4b+b6a*z5b+c6a*z6b;
	float a6=x6a*a1b+y6a*a2b+z6a*a3b+a6a*a4b+b6a*a5b+c6a*a6b;
	float b6=x6a*b1b+y6a*b2b+z6a*b3b+a6a*b4b+b6a*b5b+c6a*b6b;
	float c6=x6a*c1b+y6a*c2b+z6a*c3b+a6a*c4b+b6a*c5b+c6a*c6b;
	PrintMatrix(r, c, x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5, x6, y6, z6, a6, b6, c6);
}

		//DETERMINANTS
			//Calculate the determinant of any square matrix up to 6 x 6
void CalculateDeterminant(float dim, float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6){
	float det;
	int dimension=0+dim;
	switch(dimension){
		case 2: det=CalculateDeterminant2(x1, y1, x2, y2);break;
		case 3: det=CalculateDeterminant3(x1, y1, z1, x2, y2, z2, x3, y3, z3);break;
		case 4: det=CalculateDeterminant4(x1, y1, z1, a1, x2, y2, z2, a2, x3, y3, z3, a3, x4, y4, z4, a4);break;
		case 5: det=CalculateDeterminant5(x1, y1, z1, a1, b1, x2, y2, z2, a2, b2, x3, y3, z3, a3, b3, x4, y4, z4, a4, b4, x5, y5, z5, a5, b5);break;
		case 6: det=CalculateDeterminant6(x1, y1, z1, a1, b1, c1, x2, y2, z2, a2, b2, c2, x3, y3, z3, a3, b3, c3, x4, y4, z4, a4, b4, c4, x5, y5, z5, a5, b5, c5, x6, y6, z6, a6, b6, c6);break; 
	}
	printf("\nDeterminant of the matrix is %f", det);
}
			//Calculate the 2 x 2 determinant.
float CalculateDeterminant2(float x1, float y1, float x2, float y2){
	float det;
	//|x1|y1|
	//|x2|y2|
	det=x1*y2-x2*y1;
	return det;
}
			//Calculate the 3 x 3 determinant.
float CalculateDeterminant3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){
	float det;
	//|x1|y1|z1|
	//|x2|y2|z2|
	//|x3|y3|z3|
	det=x1*y2*z3+x2*y3*z1+x3*y1*z2-x1*y3*z2-x2*y1*z3-x3*y2*z1; 
	return det;
}
			// Calculate the 4 x 4 determinant
float CalculateDeterminant4(float x1, float y1, float z1, float a1, float x2, float y2, float z2, float a2, float x3, float y3, float z3, float a3, float x4, float y4, float z4, float a4){
	float det;
	float acumulator=1;
	//|x1|y1|z1|a1|
	//|x2|y2|z2|a2|
	//|x3|y3|z3|a3|
	//|x4|y4|z4|a4|
	//I divide the first row by x1
	x2=x2/x1;
	x3=x3/x1;
	x4=x4/x1;
	acumulator=acumulator*x1;
	x1=1;
	//I end up with this:
	//|1 |y1|z1|a1|
	//|x2|y2|z2|a2|
	//|x3|y3|z3|a3|
	//|x4|y4|z4|a4|
	//I substract the rows 2,3 and 4 the row 1 times the value they have on the x coordinate. This way, I will make 0 on the x column.
	y2=y2-y1*x2;
	z2=z2-z1*x2;
	a2=a2-a1*x2;
	x2=x2-x1*x2;//=0

	y3=y3-y1*x3;
	z3=z3-z1*x3;
	a3=a3-a1*x3;
	x3=x3-x1*x3;//=0

	y4=y4-y1*x4;
	z4=z4-z1*x4;
	a4=a4-a1*x4;
	x4=x4-x1*x4;//=0
	//At this point I end up with this: 
	//|1|y1|z1|a1|
	//|0|y2|z2|a2|
	//|0|y3|z3|a3|
	//|0|y4|z4|a4|
	det=CalculateDeterminant3(y2, z2, a2, y3, z3, a3, y4, z4, a4);
	det=det*acumulator;
	return det;
}
			//Calculate the 5 x 5 determinant 
float CalculateDeterminant5(float x1, float y1, float z1, float a1, float b1, float x2, float y2, float z2, float a2, float b2, float x3, float y3, float z3, float a3, float b3, float x4, float y4, float z4, float a4, float b4, float x5, float y5, float z5, float a5, float b5){
	float det;
	float acumulator=1;
	//|x1|y1|z1|a1|b1|
	//|x2|y2|z2|a2|b2|
	//|x3|y3|z3|a3|b3|
	//|x4|y4|z4|a4|b4|
	//|x5|y5|z5|a5|b5|
	//I divide the first row by x1
	x2=x2/x1;
	x3=x3/x1;
	x4=x4/x1;
	x5=x5/x1;
	acumulator=acumulator*x1;
	x1=1;
	//I end up with this:
	//|1 |y1|z1|a1|b1|
	//|x2|y2|z2|a2|b2|
	//|x3|y3|z3|a3|b3|
	//|x4|y4|z4|a4|b4|
	//|x5|y5|z5|a5|b5|
	//I substract the rows 2,3 and 4 the row 1 times the value they have on the x coordinate. This way, I will make 0 on the x column.

	y2=y2-y1*x2;
	z2=z2-z1*x2;
	a2=a2-a1*x2;
	b2=b2-b1*x2;
	x2=x2-x1*x2;//=0

	y3=y3-y1*x3;
	z3=z3-z1*x3;
	a3=a3-a1*x3;
	b3=b3-b1*x3;
	x3=x3-x1*x3;//=0

	y4=y4-y1*x4;
	z4=z4-z1*x4;
	a4=a4-a1*x4;
	b4=b4-b1*x4;
	x4=x4-x1*x4;//=0

	y5=y5-y1*x5;
	z5=z5-z1*x5;
	a5=a5-a1*x5;
	b5=b5-b1*x5;
	x5=x5-x1*x5;//=0
	//At this point I end up with this:
	//|1|y1|z1|a1|b1|
	//|0|y2|z2|a2|b2|
	//|0|y3|z3|a3|b3|
	//|0|y4|z4|a4|b4|
	//|0|y5|z5|a5|b5|
	det=CalculateDeterminant4(y2, z2, a2, b2, y3, z3, a3, b3, y4, z4, a4, b4, y5, z5, a5, b5);
	det=det*acumulator;
	return det;
}
			//Calculate the 6 x 6 determinant
float CalculateDeterminant6(float x1, float y1, float z1, float a1, float b1, float c1, float x2, float y2, float z2, float a2, float b2, float c2, float x3, float y3, float z3, float a3, float b3, float c3, float x4, float y4, float z4, float a4, float b4, float c4, float x5, float y5, float z5, float a5, float b5, float c5, float x6, float y6, float z6, float a6, float b6, float c6){
	float det;
	float acumulator=1;
	//|x1|y1|z1|a1|b1|c1|
	//|x2|y2|z2|a2|b2|c2|
	//|x3|y3|z3|a3|b3|c3|
	//|x4|y4|z4|a4|b4|c4|
	//|x5|y5|z5|a5|b5|c5|
	//|x6|y6|z6|a6|b6|c6|
	//I divide the first row by x1
	x2=x2/x1;
	x3=x3/x1;
	x4=x4/x1;
	x5=x5/x1;
	x6=x6/x1;
	acumulator=acumulator*x1;
	x1=1;
	//I end up with this:
	//|1 |y1|z1|a1|b1|c1|
	//|x2|y2|z2|a2|b2|c2|
	//|x3|y3|z3|a3|b3|c3|
	//|x4|y4|z4|a4|b4|c4|
	//|x5|y5|z5|a5|b5|c5|
	//|x6|y6|z6|a6|b6|c6|
	//I substract the rows 2,3,4 and 5 the row 1 times the value they have on the x coordinate. This way, I will make 0 on the x column.

	y2=y2-y1*x2;
	z2=z2-z1*x2;
	a2=a2-a1*x2;
	b2=b2-b1*x2;
	c2=c2-c1*x2;
	x2=x2-x1*x2;//=0

	y3=y3-y1*x3;
	z3=z3-z1*x3;
	a3=a3-a1*x3;
	b3=b3-b1*x3;
	c3=c3-c1*x3;
	x3=x3-x1*x3;//=0

	y4=y4-y1*x4;
	z4=z4-z1*x4;
	a4=a4-a1*x4;
	b4=b4-b1*x4;
	c4=c4-c1*x4;
	x4=x4-x1*x4;//=0

	y5=y5-y1*x5;
	z5=z5-z1*x5;
	a5=a5-a1*x5;
	b5=b5-b1*x5;
	c5=c5-c1*x5;
	x5=x5-x1*x5;//=0

	y6=y6-y1*x6;
	z6=z6-z1*x6;
	a6=a6-a1*x6;
	b6=b6-b1*x6;
	c6=c6-c1*x6; 
	x6=x6-x1*x6;//=0
	//At this point I end up with this:
	//|1|y1|z1|a1|b1|c1|
	//|0|y2|z2|a2|b2|c2|
	//|0|y3|z3|a3|b3|c3|
	//|0|y4|z4|a4|b4|c4|
	//|0|y5|z5|a5|b5|c5|
	//|0|y6|z6|a6|b6|c6|
	det=CalculateDeterminant5(y2, z2, a2, b2, c2, y3, z3, a3, b3, c3, y4, z4, a4, b4, c4, y5, z5, a5, b5, c5, y6, z6, a6, b6, c6);
	det=det*acumulator;
	return det;
}

			//VectorialProduct
void CalculateVectorialProduct(float* i, float* j, float* k, float x1, float y1, float z1, float x2, float y2, float z2){
	//|i |j |k |
	//|x1|y1|z1|
	//|x2|y2|z2|
	*i=y1*z2-y2*z1;
	*j=x2*z1-x1*z2;
	*k=x1*y2-x2*y1;
}


#endif
//Author:Juan Garcia Lopez

