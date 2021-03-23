#include <stdio.h>
#include <math.h>
#ifndef Algebra
#define Algebra








	//ALGEBRA
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

