#include <stdio.h>
#include <math.h>
#ifndef Algebra
#define Algebra

//THINGS TO DO:
//1: Create the function to create an irregular matrix.

void CreateSquareMatrix2(float* row, float* column, float* x1, float* y1, float* x2, float* y2);
void CreateSquareMatrix3(float* row, float* column, float* x1, float* y1, float * z1, float* x2, float* y2, float* z2, float* x3, float* y3, float* z3);
void CreateSquareMatrix4(float* row, float* column, float* x1, float* y1, float * z1, float* a1, float* x2, float* y2, float* z2, float* a2, float* x3, float* y3, float* z3, float* a3, float* x4, float* y4, float* z4, float* a4);
void CreateSquareMatrix5(float* row, float* column, float* x1, float* y1, float * z1, float* a1, float*b1, float* x2, float* y2, float* z2, float* a2, float* b2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* x4, float* y4, float* z4, float* a4, float* b4, float* x5, float* y5, float* z5, float* a5, float* b5);
void CreateSquareMatrix6(float* row, float* column, float* x1, float* y1, float *z1, float* a1, float* b1, float* c1, float* x2, float* y2, float* z2, float* a2, float* b2, float* c2, float* x3, float* y3, float* z3, float* a3,  float* b3, float* c3, float* x4, float* y4, float* z4, float* a4, float* b4, float* c4, float* x5, float* y5, float* z5, float* a5, float* b5, float* c5, float* x6, float* y6, float* z6, float* a6, float* b6, float* c6);
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
float CalculateDeterminant2(float x1, float y1, float x2, float y2);
float CalculateDeterminant3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
void CalculateVectorialProduct(float* i, float* j, float* k, float x1, float y1, float z1, float x2, float y2, float z2);

	//ALGEBRA
		//MATRIX
			//Create Square Matrix
				//Dimension 2 x 2
void CreateSquareMatrix2(float* row, float* column, float* x1, float* y1, float* x2, float* y2){
		*row=2;
		*column=2;
		printf("\nEnter the 2 elements of the first row separated by a coma: ");
		scanf("%f,%f",&*x1, &*y1);
		printf("\nNow enter the 2 elements of the second row separated by a coma: ");
		scanf("%f,%f",&*x2, &*y2);
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



		//DETERMINANTS
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

