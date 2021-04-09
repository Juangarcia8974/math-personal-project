#include <stdio.h>
#include <math.h>
#include "Algebra.h"
#ifndef Geometry
#define Geometry

//THIGS TO DO:


void CreatePoint(float* num_coor, float* coor1, float* coor2, float* coor3);
void ShowPoints(int n, float x, float y, float z);
void CompareTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2);
void CompareThreePoints(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
void ComparePointandLine(float x, float y, float z, float xp, float yp, float zp, float xv, float yv, float zv);
void ComparePointandPlane(float xp, float yp, float zp, float xn, float yn, float zn, float d);
void FindMidpointofTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2);
void FindMirrorPointInRelationWithOtherPoint(float x1, float y1, float z1, float xm, float ym, float zm);
void FindMirrorPointInRelationWithLine(float xp, float yp, float zp, float xp1, float yp1, float zp1, float xv1, float yv1, float zv1);
void CreateVector(float* num_coor, float* coor1, float* coor2, float* coor3);
void CompareTwoVectors(float x1, float y1, float z1, float x2, float y2, float z2);
void ShowVectors(int n, float x, float y, float z);
void CreateLine(float* xp, float* yp, float* zp, float* xv, float* yv, float* zv);
void CompareTwoLines(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2);
void CompareLineandPlane(float xp, float yp, float zp, float xv, float yv, float zv, float xn, float yn, float zn, float d);
void ShowLines(int n, float xp, float yp, float zp, float xv, float yv, float zv);
void FindLineFromTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2);
void FindLineParallelToLineandPassesbyPoint(float x, float y, float z, float xp, float yp, float zp, float xv, float yv, float zv);
void FindLinePerpendicularToTwoLinesAndPassesByIntersectionPoint(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1,float xp2, float yp2, float zp2, float xv2, float yv2, float zv2);
void FindLinePerpendicularToTwoLinesAndPassesBySomePoint(float x, float y, float z, float xp1, float yp1, float zp1, float xv1, float yv1, float zv1,float xp2, float yp2, float zp2, float xv2, float yv2, float zv2);
void FindLinePerpendicularToPlaneAndPassesByPoint(float x, float y, float z, float xn, float yn, float zn, float d);
void CreatePlane(float* xv, float* yv, float* zv, float* d);
void ShowPlanes(int n, float xn, float ny, float nz, float d);
void PrintPlane(float xn, float yn, float zn, float d);
void CompareTwoPlanes(float xn1, float yn1, float zn1, float d1, float xn2, float yn2, float zn2, float d2);
void FindPlaneThatContainsTwoLines(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2);
void FindPlaneParalleltoAnotherPlaneandContainsPoint(float xp, float yp, float zp, float xn, float yn, float zn, float d1);
void FindPlaneContainingThreePoints(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
void FindPlaneContainingPointAndLine(float x, float y, float z, float xp, float yp, float zp, float xv1, float yv1, float zv1);
void FindPlaneContainingOneLineAndParallelToAnotherLine(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2);









void CreatePoint(float* num_coor, float* coor1, float* coor2, float* coor3){//CreatePoint(&Points[n][1], &Points[n][2], &Points[n][3], &Points[n][4]);n=Point number.
	int o;//Option.
	int e=0;//Error Control Variable(If e=0 its good but if e=1 something is wrong.
	float x;
	float y;
	float z;
										
	do{									//This do while is to make sure that the user has created the point that he actually wants.
		printf("\n\nCREATING POINT");
		do{								//This do while is to make sure that the first value of each point can only be either 2 or 3.
			e=0;
			printf("\nIf you want to create a point of 2 coordinates press 2.");
			printf("\nIf you want to create a point of 3 coordinates press 3.");
			printf("\nAnswer:");
			scanf("%d",&o);
			if(o!=2 && o!=3){
				e++;
				printf("\nERROR: Introduced value is impossible, please try again.\n");
			}
		}while(e==1);
		e=0;								//Reset value of e.
	
		if(o==2){							//If the point is of 2 coordinates.
			*num_coor=2;						
			*coor3=0;						//Due that its of 2 coordinates, the value of z is 0 by default.
			printf("\n\nValue of the X coordinate:");
			scanf("%f",&x);
			*coor1=x;
			printf("\nValue of the Y coordinate:");
			*coor2=y;
			scanf("%f",&y);
			printf("\nThe point you created is (%f,%f).\nIf that is correct press 0.\nIf its not press 1.", x, y);
			printf("\nAnswer:");
			scanf("%d",&e);
		}
		else if(o==3){							//If the point is of 3 coordinates.
			*num_coor=3;						
			printf("\n\nValue of the X coordinate:");
			scanf("%f",&x);
			*coor1=x;
			printf("\nValue of the Y coordinate:");
			scanf("%f",&y);
			*coor2=y;
			printf("\nValue of the Z coordinate:");
			scanf("%f",&z);
			*coor3=z;
			printf("\nThe point you created is (%f,%f,%f).\nIf that is correct press 0.\nIf its not press 1.", x, y, z);
			printf("\nAnswer:");
			scanf("%d",&e);
		}
	}while(e==1);
}

			//Show Points
void ShowPoints(int n, float x, float y, float z){//Intended to be looped over so that it shows every Point in the Array
	printf("Point %d: (%f,%f,%f)\n", n, x, y, z);
}
			//Compare Two Points
void CompareTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2){
	float dist;//Distance

	if(x1==x2 && y1==y2 && z1==z2){
		printf("\nThey are the same point (%f,%f,%f)", x1, y1, z1);
	}
	else{
		dist=sqrtf((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
		printf("\nThe distance between the point (%f,%f,%f) and (%f,%f,%f) is of %f", x1, y1, z1, x2, y2, z2, dist);
	}
}
			//Compare Three Points
void CompareThreePoints(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){
	//I create two vectors. One of p1-p2 and another one of p1 p3 
	float xv12;
	float yv12;
	float zv12;
	float xv13;
	float yv13;
	float zv13;
	//Now i create another vector p2-p3 for the distance
	float xv23;
	float yv23;
	float zv23;
	//I create the variables for the distance between the points.
	float dist12;
	float dist13;
	float dist23;

	xv12=x2-x1;
	yv12=y2-y1;
	zv12=z2-z1;
	xv13=x3-x1;
	yv13=y3-y1;
	zv13=z3-z1;
	if((xv12/xv13==yv12/yv13) && (xv12/xv13==zv12/zv13)){//The vectors are parallel so a line can be made that includes the three of them.
		printf("\nThe points (%f,%f,%f),(%f,%f,%f) and (%f,%f,%f) are aligned wich means that if a line passes through two of them, it will also pass through the third one",x1, y1, z1, x2, y2, z2, x3, y3, z3);
	}
	else{printf("\nThe points (%f,%f,%f),(%f,%f,%f) and (%f,%f,%f) are not aligned",x1, y1, z1, x2, y2, z2, x3, y3, z3);}
	//Calculate distance between the points.
	dist12=sqrtf(xv12*xv12+yv12*yv12+zv12*zv12);
	dist13=sqrtf(xv13*xv13+yv13*yv13+zv13*zv13);
	dist23=sqrtf(xv23*xv23+yv23*yv23+zv23*zv23);
	printf("\nDistance between (%f,%f,%f) and (%f,%f,%f) = %f.", x1, y1, z1, x2, y2, z2, dist12);
	printf("\nDistance between (%f,%f,%f) and (%f,%f,%f) = %f.", x1, y1, z1, x3, y3, z3, dist13);
	printf("\nDistance between (%f,%f,%f) and (%f,%f,%f) = %f.", x2, y2, z2, x3, y3, z3, dist23);

}
			//Compare a Point and a Line
void ComparePointandLine(float x, float y, float z, float xp, float yp, float zp, float xv, float yv, float zv){
	float s;
	float detv;//Determinant of the vector of the line
	float mx;
	float my;
	float mz;
	float dist;//Distance

	//(x,y,z)=(xp,yp,zp)+s*(xv,yv,zv)
	//Eq1====>x=xp+s*xv
	//Eq2====>y=yp+s*yv
	//Eq3====>z=zp+s*zv
	//I get the value of s according to the first equation.
	s=(x-xp)/xv;
	//I then check if the two other equations give the same value of s. If they do, the point is in the line and if they dont, the point is not in the line.
	if((s==(y-yp)/yv)&&(s==(z-zp)/zv)){
		printf("\nThe point (%f,%f,%f) is part of the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f)", x, y, z, xp, yp, zp, xv, yv, zv);
	}
	else{//https://www.programiz.com/c-programming/library-function/math.h/sqrt
		//https://onlinemschool.com/math/library/analytic_geometry/p_line/
		//I make a matrix to calculate the distance
		//|   i   |   j   |   k  |
		//|  xp-x | yp-y  | zp-z |
		//|   xv  |  yv   |  zv  |
		mx=(yp-y)*zv-((zp-z)*yv);
		my=(zp-z)*xv-((xp-x)*zv);
		mz=(xp-x)*yv-((yp-y)*xv);
		detv=sqrtf(xv*xv+yv*yv+zv*zv);
		dist=(sqrtf(mx*mx+my*my+mz*mz))/detv;
		printf("\nhe point (%f,%f,%f) is not of the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f). They are at a distance of %f", x, y, z, xp, yp, zp, xv, yv, zv, dist);
	}

}
			//Compare Point and Plane
void ComparePointandPlane(float xp, float yp, float zp, float xn, float yn, float zn, float d){
	float dist;//Distance between point and plane
	float numdist;//Numerator to calculate distance
	float dendist;//Denominator to calculate distance
	if(xn*xp+yn*yp+zn*zp+d==0){//The point is part of the plane
		printf("\nThe point (%f,%f,%f) is part of the plane ", xp, yp, zp);
		PrintPlane(xn, yn, zn, d);
	}
	else{//The point is not part of the plane
		printf("\nThe point (%f,%f,%f) is not part of the plane ", xp, yp, zp);
		PrintPlane(xn, yn, zn, d);
		numdist=xn*xp+yn*yp+zn*zp+d;
		if(numdist<0){numdist=numdist*(-1);}
		dendist=sqrtf(xn*xn+yn*yn+zn*zn);
		dist=numdist/dendist;
		printf("\nThey are separated by a distance of %f", dist);

	}
}
			//Find Midpoint of two Points
void FindMidpointofTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2){
	float x;
	float y;
	float z;

	x=(x1+x2)/2;
	y=(y1+y2)/2;
	z=(z1+z2)/2;
	printf("\nThe midpoint of (%f,%f,%f) and (%f,%f,%f) is the point (%f,%f,%f)",x1, y1, z1, x2, y2, z2, x, y, z);
}
			//Find Mirror Point in relation with another Point
void FindMirrorPointInRelationWithOtherPoint(float x1, float y1, float z1, float xm, float ym, float zm){//xm=X coordinate of the point used as a mirror/midpoint.
	float x;
	float y;
	float z;

	x=2*xm-x1;
	y=2*ym-y1;
	z=2*zm-z1;
	printf("\nThe mirror point of (%f,%f,%f) in relation to the point (%f,%f,%f) is the point (%f,%f,%f)", x1, y1, z1, xm, ym, zm, x, y, z);
	printf("\nThis is another way of saying that (%f,%f,%f) is the midpoint of (%f,%f,%f) and (%f,%f,%f)", xm, ym, zm, x1, y1, z1, x, y, z);
}
			//Find Mirror Point in relation with line
void FindMirrorPointInRelationWithLine(float xp, float yp, float zp, float xp1, float yp1, float zp1, float xv1, float yv1, float zv1){
	//Coordinates of midpoint
	float s;
	float xm;
	float ym;
	float zm;
	//Coordinates of points we want to calculate
	float x;
	float y;
	float z;
	//Plane that is perpendicular to line and that contains the point.
	float xn;
	float yn;
	float zn;
	float d;
	s==(xp-xp1)/xv1;
	if(((xp-xp1)/xv1)==((yp-yp1)/yv1) && ((xp-xp1)/xv1)==((zp-zp1)/zv1)){//Point is part of the line
		printf("\nERROR: The point is part of the line wich means that it has no mirror point.");
	}
	else{
		xn=xv1;
		yn=yv1;
		zn=zv1;
		d=-xn*xp-yn*yp-zn*zp;
		//We find the intersection point between the line and the plane
		//We substitute the parametric equations of the line in the plane equation to figure out the value of s
		//We are left with this===>xn*(xp1+xv1*s)+yn*(yp1-yv1*s)+zn*(zp1+zv1*s)+d=0===>xn*xp1+xn*xv1*s+yn*yp1+yn*yv1*s+zn*zp1+zn*zv1*s+d=0
		//xn*xv1*s+yn*yv1*s+zn*zv1*s+d=-xn*xp1-yn*yp1-zn*zp1===>s*(xn*xv1+yn*yv1+zn*zv1)=-xn*xp1-yn*yp1-zn*zp1-d===>
		s=(-xn*xp1-yn*yp1-zn*zp1-d)/(xn*xv1+yn*yv1+zn*zv1);
		xm=xp1+xv1*s;
		ym=xp1+xv1*s;
		zm=xp1+xv1*s;
		x=2*xm-xp;
		y=2*ym-yp;
		z=2*zm-zp;
		printf("\nThe mirror point of (%f,%f,%f) in relation to the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) is the point (%f,%f,%f)", xp, yp, zp, xp1, yp1, zp1, xv1, yv1, zv1, x, y, z);
	}
}

		//VECTORS
			//Create a Vector
void CreateVector(float* num_coor, float* coor1, float* coor2, float* coor3){//Practically the same as the function of CreatePoint();
	int o;
	int e=0;
	float x;
	float y;
	float z;

	do{									
		printf("\n\nCREATING VECTOR");
		do{								
			printf("\nIf you want to create a vector of 2 coordinates press 2.");
			printf("\nIf you want to create a vector of 3 coordinates press 3.");
			printf("\nAnswer:");
			scanf("%d",&o);
			if(o!=2 && o!=3){
				e++;
				printf("\nERROR: Introduced value is impossible, please try again.\n");
			}
		}while(e==1);
		e=0;								
	
		if(o==2){							
			*num_coor=2;						
			*coor3=0;						
			printf("\n\nValue of the X coordinate:");
			scanf("%f",&x);
			*coor1=x;
			printf("\nValue of the Y coordinate:");
			*coor2=y;
			scanf("%f",&y);
			printf("\nThe vector you created is (%f,%f).\nIf that is correct press 0.\nIf its not press 1.", x, y);
			printf("\nAnswer:");
			scanf("%d",&e);
		}
		else if(o==3){							
			*num_coor=3;						
			printf("\n\nValue of the X coordinate:");
			scanf("%f",&x);
			*coor1=x;
			printf("\nValue of the Y coordinate:");
			scanf("%f",&y);
			*coor2=y;
			printf("\nValue of the Z coordinate:");
			scanf("%f",&z);
			*coor3=z;
			printf("\nThe vector you created is (%f,%f,%f).\nIf that is correct press 0.\nIf its not press 1.", x, y, z);
			printf("\nAnswer:");
			scanf("%d",&e);
		}
	}while(e==1);


}


			//Compare 2 Vectors
void CompareTwoVectors(float x1, float y1, float z1, float x2, float y2, float z2){
	if(x1*x2+y1*y2+z1*z2==0){
		printf("\nThe vectors (%f,%f,%f) and (%f,%f,%f) are perpendicular.", x1, y1, z1, x2, y2, z2);
	}
	else if((x1/x2==y1/y2)&&(y1/y2==z1/z2)){
		printf("\nThe vectors (%f,%f,%f) and (%f,%f,%f) are parallel.", x1, y1, z1, x2, y2, z2);
	}
	else{
		printf("The vectors (%f,%f,%f) and (%f,%f,%f) are neither perpendicular nor parallel.", x1, y1, z1, x2, y2, z2);
	}
}

			//Show Vectors
void ShowVectors(int n, float x, float y, float z){//Put in a do while so that the values change and it goes through all the Vectors Array
	printf("Vector %d: (%f,%f,%f)\n", n, x, y, z);
}




		//LINES
			//Create a Line
void CreateLine(float* xp, float* yp, float* zp, float* xv, float* yv, float* zv){
	int e=0;
	float xvector;
	float yvector;
	float zvector;
	float xpoint;
	float ypoint;
	float zpoint;

	do{
		printf("\n\nCREATING LINE");
		
		printf("\nWe first need the coordinates of a vector");
		printf("\nValue of the X coordinate:");
		scanf("%f",&xvector);
		*xv=xvector;
		printf("\nValue of the Y coordinate:");
		scanf("%f",&yvector);
		*yv=yvector;
		printf("\nValue of the Z coordinate:");
		scanf("%f",&zvector);
		*zv=zvector;
	
		printf("\n\nNow we need a point");
		printf("\nValue of the X coordinate:");
		scanf("%f",&xpoint);
		*xp=xpoint;
		printf("\nValue of the Y coordinate:");
		scanf("%f",&ypoint);
		*yp=ypoint;
		printf("\nValue of the Z coordinate:");
		scanf("%f",&zpoint);
		*zp=zpoint;

		printf("\nThe line you have created is:(x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f).\nIf this is correct press 0 and if its not press 1.", xpoint, ypoint, zpoint, xvector, yvector, zvector);
		scanf("%d",&e);
	}while(e==1);
}

			//Compare 2 Lines
void CompareTwoLines(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2){//I am going to use s as alfa1 and t as alfa2. 
	float s;
	float sx;
	float sy;
	float sz;
	float t;
	float det;//Determinant of Matrix
	float detdist;//Determinant of Matrix for distance
	float xv;//xvp1p2
	float yv;//yvp1p2
	float zv;//zvp1p2
	float i;
	float j;
	float k;
	float dist;
	xv=xp2-xp1;
	yv=yp2-yp1;
	zv=zp2-zp1;
	//I will first compare the two vectors
	if((xv1/xv2==yv1/yv2)&&(yv1/yv2==zv1/zv2)){//The vectors are parallel to each other. This means the lines can either be parallel or the same line with different equations.
		//To know if its the same line or not, im just going to substitute the point of the first line in the equation of the second line.
		if((xp1-xp2)/xv2==(yp1-yp2)/yv2 && (yp1-yp2)/yv2==(zp1-zp2)/zv2){//Its the same line
			printf("\nThey are the same line expressed with a different equation");
		}
		else{
			//I create a matrix 
			//| i | j | k |
			//| xv| yv| zv|
			//|xv1|yv1|zv1|
			CalculateVectorialProduct(&i, &j, &k, xv, yv, zv, xv1, yv1, zv1);
			detdist=sqrtf(xv1*xv1+yv1*yv1+zv1*zv1);
			dist=(sqrtf(i*i+j*j+k*k))/detdist;
			printf("\nThe two lines are parallel to each other with a distance of %f",dist);
		}
	}
	else{//They can either cross or intersect each other
		//To solve this I create a matrix
		// | xv1 | xv2 | (xp2-xp1) |
		// | yv1 | yv2 | (yp2-yp1) |
		// | zv1 | zv2 | (zp2-zp1) |
		//If the determinant of this matrix is equal to 0, they intersect each other. If not, they cross each other.
		det=CalculateDeterminant3(xv1, xv2, xv, yv1, yv2, yv, zv1, zv2, zv);
		if(det==0){//They intersect
			//If the two lines are
			//(xp1+xv1*(s),yp1+yv1*(s),zp1+zv1*(s)=(xp2+xv2*t,yp2+yv2*t,zp2+zv2*t)
			//This basically means that:
			//Eq1====>xp1+xv1*s=xp2+xv2*t====>xv1*s=xp2-xp1+xv2*t
			//Eq2====>yp1+yv1*s=yp2+yv2*t====>yv1*s=yp2-yp1+yv2*t
			//Eq3====>zp1+zv1*s=zp2+zv2*t====>zv1*s=zp2-zp1+zv2*t
			//Now that i have separated them into 3 separate equations I will start solving them
			//In the first equation I get the value of s in relation with the value of t====>s=(xp2-xp1+xv2*t)/xv1
			//I then substitute it in the second equation====>yv1*((xp2-xp1+xv2*t)/xv1)=yp2-yp1+yv2*t====>[yv1*(xp2-xp1)+yv1*xv2*t]=[xv1*(yp2-yp1)+xv1*yv2*t]====>(yv1*xv2-xv1*yv2)*t=xv1*(yp2-yp1)-yv1*(xp2-xp1)
			//This gives me the value of t====>t=[xv1*(yp2-yp1)-yv1*(xp2-xp1)]/[yv1*xv2-xv1*yv2]
			t=(xv1*(yp2-yp1)-yv1*(xp2-xp1))/(yv1*xv2-xv1*yv2);
			//I then substitute the value of t in the third equation to get the value of s.
			s=(zp2-zp1+zv2*t)/zv1;
			//Now, using s, I calculate the point of intwesection.
			sx=xp1+xv1*s;
			sy=yp1+yv1*s;
			sz=zp1+zv1*s;
			printf("\nThe two lines intersect at the Point (%f,%f,%f)", sx, sy, sz);
		}
		else{
			//xvp1p2=xp2-xp1;
			//yvp1p2=yp2-yp1;
			//zvp1p2=zp2-zp1;
			xv=xp2-xp1;
			yv=yp2-yp1;
			zv=zp2-zp1;
			//I create a matrix with this new vector and the two vectors of the lines.
			//| xv  | yv  | zv  |
			//| xv1 | yv1 | zv1 |
			//| xv2 | yv2 | zv2 |
			//I calculate de determinant of this matrix
			detdist=CalculateDeterminant3(xv, yv, zv, xv1, yv1, zv1, zv2, yv2, zv2);
			//I create another matrix 
			//|  i  |  j  |  k  |
			//| xv1 | yv1 | zv1 |
			//| xv2 | yv2 | zv2 |
			//This means that
			CalculateVectorialProduct(&i, &j, &k, xv1, yv1, zv1, xv2, yv2, zv2);
			dist=detdist/(sqrtf(i*i+j*j+k*k));
			printf("\nThe two lines cross each other but dont intersect and they are separated at a distance of %f",dist);
		}
	}
}
			//Compare Line and Plane
void CompareLineandPlane(float xp, float yp, float zp, float xv, float yv, float zv, float xn, float yn, float zn, float d){
	float s;
	float xs;
	float ys;
	float zs;
	if(xv*xn+yv*yn+zv*zn==0){//The normal vector is perpendicular to the line vector wich means the line can either be part of the plane or parallel to the plane.
		//I check if a point of the line is part of the plane
		if(xp*xn+yp*yn+zp*zn+d==0){//The point is part of the plane so the whole line is part of the line.
			printf("\nThe line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) is part of the plane ", xp, yp, zp, xv, yv, zv);
			PrintPlane(xn, yn, zn, d);
		}
		else{//The line is parallel to the plane
			printf("\nThe line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) is parallel to the plane ", xp, yp, zp, xv, yv, zv);
			PrintPlane(xn, yn, zn, d);
			printf(" and they are separated by a distance of [NOT YET PROGRAMMED].");
		}
	}
	else{//The line intersects the plane at one point.
		printf("\nThe line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) intersects the plane ", xp, yp, zp, xn, yn, zn);
		PrintPlane(xn, yn, zn, d);
		s=-(xn*xp+yn*yp+zn*zp+d)/(xn*xv+yn*yv+zn*zv);
		xs=xp+xv*s;
		ys=yp+yv*s;
		zs=zp+zv*s;
		printf(" at the point(%f,%f,%f)", xs, ys, zs);
	}

}

			//Show Lines
void ShowLines(int n, float xp, float yp, float zp, float xv, float yv, float zv){//Intended to be looped over so that it shows every Line in the Array
	printf("Line %d:(x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f).\n", n, xp, yp, zp, xv, yv, zv);
}
			//FInd line from two points
void FindLineFromTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2){
	float xv;
	float yv;
	float zv;

	xv=x2-x1;
	yv=y2-y1;
	zv=z2-z1;
	printf("\nThe line that passes by (%f,%f,%f) and by (%f,%f,%f) is (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f)",x1, y1, z1, x2, y2, z2, x1, y1, z1, xv, yv, zv);
}
			//Find a line parallel to another one and that passes by one point
void FindLineParallelToLineandPassesbyPoint(float x, float y, float z, float xp, float yp, float zp, float xv, float yv, float zv){
	printf("\nThe line that is parallel to (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and that passes through the point (%f,%f,%f) is the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f)", xp, yp, zp, xv, yv, zv, x, y, z, xv, yv, zv, x, y, z);
}
			//Find a line perpendicular to two other lines and that passes by the intersection point of said two lines.
void FindLinePerpendicularToTwoLinesAndPassesByIntersectionPoint(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1,float xp2, float yp2, float zp2, float xv2, float yv2, float zv2){
	//This are the coordinates of the perpendicular vector
	float xv;
	float yv;
	float zv;
	float det;
	float s;
	float sx;
	float sy;
	float sz;
	float t;

	det=xv1*yv2*(zp2-zp1)+yv1*zv2*(xp2-xp1)+zv1*xv2*(yp2-yp1)-zv1*yv2*(xp2-xp1)-xv1*zv2*(yp2-yp1)-yv1*xv2*(zp2-zp1);
	if(xv1/xv2==yv1/yv2 && yv1/yv2==zv1/zv2){//Check the relative position of the vectors
		if(xp1==xp2 && yp1==yp2 && zp1==zp2){//They are the same line.
			printf("\nThe introduced lines are the same so there are infinite lines perpendicular to this line.");
		}
		else{
			printf("\nThe two introduced lines are parallel to each other so there is no point of intersection wich makes it impossible to use this function.");
		}
	}
	//I check if they have an intersection point the same way I do in CompareTwoLines();
	else if(det!=0){
		printf("\nThe two introduced lines dont intersect at any point wich makes it impossible to use this function.");
	}
	else{
		//I make a matrix with the two vectors to do the vectorial product and get a vector that is perpendicular to both of them.
		//|  i  |  j  |  k  |
		//| xv1 | yv1 | zv1 |
		//| xv2 | yv2 | zv2 |
		//I calculate the determinant of this matrix
		CalculateVectorialProduct(&xv, &yv, &zv, xv1, yv1, zv1, xv2, yv2, zv2);
		//I calculate the intersection point the same way I do in CompareTwoLines();
		t=(xv1*(yp2-yp1)-yv1*(xp2-xp1))/(yv1*xv2-xv1*yv2);
		s=(zp2-zp1+zv2*t)/zv1;
		sx=xp1+xv1*s;
		sy=yp1+yv1*s;
		sz=zp1+zv1*s;
		printf("\nThe line that is perpendicular to (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and passes through the intersection point is.....\n", xp1, yp1, zp1, xv1, yv1, zv1, xp2, yp2, zp2, xv2, yv2, zv2);
		printf("(x,y,z)=(%f,%f,%f)+alpha*(%f,%f,%f)", sx, sy, sz, xv, yv, zv);
	}
}

			//Find a line perpendicular to two other lines and that passes by the intersectyion point of said two lines.
void FindLinePerpendicularToTwoLinesAndPassesBySomePoint(float x, float y, float z, float xp1, float yp1, float zp1, float xv1, float yv1, float zv1,float xp2, float yp2, float zp2, float xv2, float yv2, float zv2){
	//This are the coordinates of the perpendicular vector
	float xv;
	float yv;
	float zv;
	float det;

	det=xv1*yv2*(zp2-zp1)+yv1*zv2*(xp2-xp1)+zv1*xv2*(yp2-yp1)-zv1*yv2*(xp2-xp1)-xv1*zv2*(yp2-yp1)-yv1*xv2*(zp2-zp1);
	if(xv1/xv2==yv1/yv2 && yv1/yv2==zv1/zv2){//Check the relative position of the vectors
		if(xp1==xp2 && yp1==yp2 && zp1==zp2){//They are the same line.
			printf("\nThe introduced lines are the same so there are infinite lines perpendicular to this line.");
		}
		else{
			printf("\nThe two introduced lines are parallel to each other so there is no point of intersection wich makes it impossible to use this function.");
		}
	}
	else{//This is the same as in the function FindLinePerpendicularToTwoLinesAndPassesByIntersectionPoint();
		xv=yv1*zv2-yv2*zv1;
		yv=xv2*zv1-zv2*xv1;
		zv=xv1*yv2-xv2*yv1;
		printf("\nEl vector perpendicular es (%f,%f,%f)", xv, yv, zv);
		printf("\nThe line that is perpendicular to (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and passes through the point(%f,%f,%f) is.....\n", xp1, yp1, zp1, xv1, yv1, zv1, xp2, yp2, zp2, xv2, yv2, zv2, x, y, z);
		printf("(x,y,z)=(%f,%f,%f)+alpha*(%f,%f,%f)", x, y, z, xv, yv, zv);
	}
}
			//Find a line perpenducular to a plane and that passes by a point.
void FindLinePerpendicularToPlaneAndPassesByPoint(float x, float y, float z, float xn, float yn, float zn, float d){
	//The vector of the line is going to be the same as the normal vector of the plane.
	//That means that we basically have the line of the equation already:
	printf("\nThe line that is perpendicular to the plane ");PrintPlane(xn, yn, zn, d);printf(" and passes by the point (%f,%f,%f) is (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f)", x, y, z, x, y, z, xn, yn, zn);
}

		
		//PLANES
			//Create Plane
void CreatePlane(float* xv, float* yv, float* zv, float* d){//Practically the same as the function of CreatePoint();
	float xn;
	float yn;
	float zn;
	float xp;
	float yp;
	float zp;
	float dlocal;
	int e=0;
	
	do{
		printf("\n\nCREATING PLANE");
		printf("\nFirst we need a vector perpendicular to the plane you want to create");
		printf("\nX Coordinate of Normal Vector:");
		scanf("%f",&xn);
		*xv=xn;
		printf("\nY Coordinate of Normal Vector:");
		scanf("%f",&yn);
		*yv=yn;
		printf("\nZ Coordinate of Normal Vector:");
		scanf("%f",&zn);
		*zv=zn;
		printf("\nNow we need a point wich is part of the plane");
		printf("\nX Coordinate of Point:");
		scanf("%f",&xp);
		printf("\nY Coordinate of Point:");
		scanf("%f",&yp);
		printf("\nZ Coordinate of Point:");
		scanf("%f",&zp);
		//xv*X+yv*Y+zv*Z+d=0
		//I now get the value of d from this equation.
		dlocal=-xn*xp-yn*yp-zn*zp;
		*d=dlocal;
		printf("\nThe plane you created is ");
		PrintPlane(xn, yn, zn, dlocal);
		printf(". If this is correct press 0, if its not press 1.");
			scanf("%d",&e);
	}while(e==1);

}

			//Show Planes
void ShowPlanes(int n, float xn, float yn, float zn, float d){//Intended to be looped over so that it shows every Point in the Array
	if(yn>0){
		if(zn>0){
			if(d>0){
				printf("\nPlane %d: %fX+%fY+%fZ+%f=0", n, xn, yn, zn, d);
			}
			else{printf("\nPlane %d: %fX+%fY+%fZ%f=0", n, xn, yn, zn, d);}
		}
		else{
			if(d>0){
				printf("\nPlane %d: %fX+%fY%fZ+%f=0", n, xn, yn, zn, d);
			}
			else{printf("\nPlane %d: %fX+%fY%fZ%f=0", n, xn, yn, zn, d);}
		}
	}
	else{
		if(zn>0){
			if(d>0){
				printf("\nPlane %d: %fX%fY+%fZ+%f=0", n, xn, yn, zn, d);
			}
			else{printf("\nPlane %d: %fXfY+%fZ%f=0", n, xn, yn, zn, d);}
		}
		else{
			if(d>0){
				printf("\nPlane %d: %fX%fY%fZ+%f=0", n, xn, yn, zn, d);
			}
			else{printf("\nPlane %d: %fX%fY%fZ%f=0", n, xn, yn, zn, d);}
		}
	}

}

			//PrintPlane
void PrintPlane(float xn, float yn, float zn, float d){
	if(yn>0){
		if(zn>0){
			if(d>0){
				printf("%fX+%fY+%fZ+%f=0", xn, yn, zn, d);
			}
			else{printf("%fX+%fY+%fZ%f=0", xn, yn, zn, d);}
		}
		else{
			if(d>0){
				printf("%fX+%fY%fZ+%f=0", xn, yn, zn, d);
			}
			else{printf("%fX+%fY%fZ%f=0", xn, yn, zn, d);}
		}
	}
	else{
		if(zn>0){
			if(d>0){
				printf("%fX%fY+%fZ+%f=0", xn, yn, zn, d);
			}
			else{printf("%fXfY+%fZ%f=0", xn, yn, zn, d);}
		}
		else{
			if(d>0){
				printf("%fX%fY%fZ+%f=0", xn, yn, zn, d);
			}
			else{printf("%fX%fY%fZ%f=0", xn, yn, zn, d);}
		}
	}

}
			//Compare Two Planes
void CompareTwoPlanes(float xn1, float yn1, float zn1, float d1, float xn2, float yn2, float zn2, float d2){
	float xp;
	float yp;
	float zp;
	if(xn1/xn2==yn1/yn2 && xn1/xn2==zn1/zn2){//The normal vectors are parallel so it means that the planes can either be parallel or the same plane.
		//I calculate a point of the first plane.
		if(xn1==0){//I do this cause the way im going to calculate the point of the plane can vary if the xn coordinate is 0.
			if(yn1==0){
				if(zn1==0){//At this point im pretty sure what has been described is the whole R3 space but im goingh to do it anyways.
					xp=0;yp=0;zp=0;}
				else{xp=0;yp=0;zp=-d1/zn1;}
			}
			else{xp=0;yp=-d1/yn1;zp=0;}
		}
		else{xp=-d1/xn1;yp=0;zp=0;}
		if(xn2*xp+yn2*yp+zn2*zp+d2==0){//They are the same plane
			printf("\nThey are the same plane written with different equations.");
		}
		else{//The planes are parallel to each other
			printf("\nThe plane ");PrintPlane(xn1, yn1, zn1, d1);printf(" and the plane ");PrintPlane(xn2, yn2, zn2, d2);printf(" are parallel to each other and they are separated by a distance of [NOT YET PROGRAMMED]");
		}
	}
	else{
		printf("\nThe plane ");PrintPlane(xn1, yn1, zn1, d1);printf(" and the plane ");PrintPlane(xn2, yn2, zn2, d2);printf(" intersect each other in the line [NOT YET PROGRAMMED]");
	}
}
			//Find Plane that contains two Lines
void FindPlaneThatContainsTwoLines(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2){
	float xn;
	float yn;
	float zn;
	float d;
	if(xv1/xv2==yv1/yv2 && yv1/yv2==zv1/zv2 && (xp1-xp2)/xv2==(yp1-yp2)/yv2 && (yp1-yp2)/yv2==(zp1-zp2)/zv2){//Its the same line
		printf("\nERROR:They are the same line expressed with a different equation wich means that in reality, you are triying to make a plane knowing that it contains one line and thats impossible.");
	}
	else{//It can be done.
		//I do the vectorial product of the vectors of the lines to get a vector perpendicular to both of them. This new vector will be the normal vector for the plane. 
		//I have done the same in FindLinePerpendicularToTwoLinesAndPassesByIntersectionPoint(); so I will just put the result.
		xn=yv1*zv2-yv2*zv1;
		yn=xv2*zv1-zv2*xv1;
		zn=xv1*yv2-xv2*yv1;
		//Now by substituting any of the points of any of the two lines I can get the value of d.I will use the point of the first line.
		d=(xn*xp1+yn*yp1+zn*zp1);
		printf("\nThe plane that contains the lines (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) is ");
		PrintPlane(xn, yn, zn, d);	
	}
}
			//Find Plane that is parallel to another plane and that contains a point
void FindPlaneParalleltoAnotherPlaneandContainsPoint(float xp, float yp, float zp, float xn, float yn, float zn, float d1){
	float d;
	if(xn*xp+yn*yp+zn*zp+d1==0){//The point is in the plane so the plane wich is triying to be found is the same plane that has been introduced.
		printf("\nThe plane wich is triying to be found is the same as the one that has been introduced ");PrintPlane(xn, yn, zn, d1);
	}
	else{
		d=-(xn*xp+yn*yp+zn*zp);
		printf("\nThe plane that is parallel to ");PrintPlane(xn, yn, zn, d1);printf(" and that contains the point (%f,%f,%f) is the plane ", xp, yp, zp);PrintPlane(xn, yn, zn, d);
	}
}
			//Find Plane that Contains three points
void FindPlaneContainingThreePoints(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3){
	float xv1;
	float yv1;
	float zv1;
	float xv2;
	float yv2;
	float zv2;
	float xn;
	float yn;
	float zn;
	float d;
	//I create 2 vectors using the three points
	xv1=x2-x1;
	yv1=y2-y1;
	zv1=z2-z1;
	xv2=x3-x1;
	yv2=y3-y1;
	zv2=z3-z1;
	if((xv1/xv2==yv1/yv2) && (xv1/xv2==zv1/zv2)){
		printf("\nERROR: The three points are alligned so its impossible to create a plane with only having this information.");
	}
	else{
		//I make a matrix with these vectors to do the vectorial product and get a perpendicular vector to both of them wich is going to be the normal vector for the plane.
		//| i | j | k |
		//|xv1|yv1|zv1|
		//|xv2|yv2|zv2|
		CalculateVectorialProduct(&xn, &yn, &zn, xv1, yv1, zv1, xv2, yv2, zv2);
		//I use one of the points to figure out the value of d.
		//xn*xp+yn*yp+zn*zp+d=0
		//This means that
		d=-(xn*x1+yn*y1+zn*z1);
		printf("\nThe plane that contains the points(%f,%f,%f),(%f,%f,%f) and (%f,%f,%f) is the plane ", x1, y1, z1, x2, y2, z2, x3, y3, z3);PrintPlane(xn, yn, zn, d);
	}
}
			//Find Plane that contains a point and a line.
void FindPlaneContainingPointAndLine(float x, float y, float z, float xp, float yp, float zp, float xv1, float yv1, float zv1){
	float s;
	float xv2;
	float yv2;
	float zv2;
	float xn;
	float yn;
	float zn;
	float d;
	//As in the function ComparePointandLine();
	s=(x-xp)/xv1;
	if((s==(y-yp)/yv1)&&(s==(z-zp)/zv1)){//Point is part of the line
		printf("\nERROR:The point (%f,%f,%f) is part of the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f). This means that its impossible to figure a plane with only this information", x, y, z, xp, yp, zp, xv1, yv1, zv1);		
	}
	else{//It can be done
		//I create a vector with a point of the line and the other point.
		xv2=x-xp;
		yv2=y-yp;
		zv2=z-zp;
		//I make a matrix to do the vectorial product and get a vector perpendicular to the two we have till now. This will be the normal vector of the plane.
		//| i | j | k |
		//|xv1|yv1|zv1|
		//|xv2|yv2|zv2|
		CalculateVectorialProduct(&xn, &yn, &zn, xv1, yv1, zv1, xv2, yv2, zv2);
		d=-(xn*x+yn*y+zn*z);
		printf("\nPlane: ");PrintPlane(xn, yn, zn, d);

	}
}
			//Find Plane that contains one line and is parallel to another line
void FindPlaneContainingOneLineAndParallelToAnotherLine(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2){
	float xn;
	float yn;
	float zn;
	float d;
	if(xv1/xv2==yv1/yv2 && yv1/yv2==zv1/zv2 && (xp1-xp2)/xv2==(yp1-yp2)/yv2 && (yp1-yp2)/yv2==(zp1-zp2)/zv2){//Its the same line
		printf("\nERROR: The two lines that have been introduced are the same line expressed with a different equation.");
	}
	else{
		CalculateVectorialProduct(&xn, &yn, &zn, xv1, yv1, zv1, xv2, yv2, zv2);
		d=-(xn*xp1+yn*yp1+zn*zp1);
		printf("\nThe plane that contains the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and is parallel to the line (x,y,z)=(x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) is the plane: ", xp1, yp1, zp1, xv1, yv1, zv1, xp2, yp2, zp2, xv2, yv2, zv2);PrintPlane(xn, yn, zn, d);
	}
}


#endif

//Author:Juan Garcia Lopez
