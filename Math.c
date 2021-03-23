#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Geometry.h"
#include "Algebra.h"

//THINGS NOT DONE
//1:[MAYBE GOOD MAYBE BAD] Currently, the function CreatePlane();requires the user to know a point and I think the more suitable thing is to ask for the value of d. [MAYBE GOOD MAYBE BAD]
//2:Substitute the newly created CalculateDeterminant(); and VectorialProduct(); functions in the places that have been used in the GEOMETRY section.


void ShowMenu();
void ShowGeometryMenu();
void ShowGeometryCreationMenu();
void ShowGeometryCreatedMenu();
void ShowGeometryComparingMenu();
void ShowGeometryEditingMenu();
void ShowGeometryFindMenu();
void ShowGeometryFindPointMenu();
void ShowGeometryFindLineMenu();
void ShowGeometryFindPlaneMenu();



int main(){
	//GEOMETRY
		//POINTS
			//Im going to do them of 2 and 3 coordinates (x,y,z)o(x,y)
			//Im going to do it with an array of 4 dimensions. That way, the first value is going to indicate if the point is of 2 or 3 coordinates. The rest of the values will be the actual coordinates of the point.

	float Points[100][4];//Im going to be able to store up to 100 points. This is because I want the [0][0] to store how many points there currently are.


		//VECTORS
			//The dimension of the vectors are going to be the same as the ones of the points.
			//Im going to use the same method i used with the points.
	float Vectors[100][4];
	

		//LINES
			//This are going to be the same dymension as the points.
			//Im going to use the same method as with the points and vectors exept that I need a new
	float Lines[100][6];//100 lines [n][1]=xp; [n][2]=yp; [n][3]=zp; [n][4]=xv; [n][5]=yv; [n][6]=zv;

		//PLANES
			//This are going to be the same dymension as the points.
	float Planes[100][4];//100 planes [n][1]=xv; [n][2]=yv; [n][3]=zv; I use the vector perpendicular to the plane. [n][4]=d;



	int o;//Option 1
	int o2;//Option 2
	int o3;//Option 3
	int o4;//Option 4
	int np=1;//Point number
	int nv=1;//Vector number
	int nl=1;//Line number
	int npl=1;//Plane number
	int i;
	int n;
	int s1;//SUBJECTS 
       	int s2;
       	int s3;


	do{
		ShowMenu();
		scanf("%d",&o);
		switch(o){
			case 1:	do{//GEOMETRY
				       	ShowGeometryMenu();
				       	scanf("%d",&o2);
				       	switch(o2){
				       		case 1: do{//CREATING
								ShowGeometryCreationMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1:	CreatePoint(&Points[np][1], &Points[np][2], &Points[np][3], &Points[np][4]);np++;break;//Create a Point
									case 2: CreateVector(&Vectors[nv][1], &Vectors[nv][2], &Vectors[nv][3], &Vectors[nv][4]);nv++;break;//Create a Vector
									case 3: CreateLine(&Lines[nl][1], &Lines[nl][2], &Lines[nl][3], &Lines[nl][4], &Lines[nl][5], &Lines[nl][6]);nl++;break;//Create a Line
									case 4: CreatePlane(&Planes[npl][1], &Planes[npl][2], &Planes[npl][3], &Planes[npl][4]);npl++;break;
								}
							}while(o3!=0);
							break;
						case 2:	do{//SHOW WHAT HAS BEEN CREATED
								ShowGeometryCreatedMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1: printf("\n\nPOINTS:\n");for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}break;
									case 2: printf("\n\nVECTORS:\n");for(n=1;n<nv;n++){ShowVectors(n, Vectors[n][2], Vectors[n][3], Vectors[n][4]);}break;
									case 3: printf("\n\nLINES:\n");for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}break;
									case 4: printf("\n\nPLANES:\n");for(n=1;n<npl;n++){ShowPlanes(n, Planes[n][1], Planes[n][2], Planes[n][3], Planes[n][4]);}break;
								}
							}while(o3!=0);
							break;
						case 3: do{//COMPARE
								ShowGeometryComparingMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1: if(np<2){
											printf("\nERROR:You dont have enough points created to use this function");
										}
										else{
											printf("Enter the two numbers that are related to the points you want to compare separated by a coma.\nPOINTS:\n");
											for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
											scanf("%d,%d",&s1 ,&s2);
											CompareTwoPoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
										}
										break;
									case 3: if(nv<=1){//Compare 2 Vectors
										printf("\nERROR:You dont have enough vectors created to use this function.");
										}
									       	else{
											printf("\nEnter the two numbers that are related to the vectors you want to compare separated by a coma.\nVECTORS:\n");
											for(n=1;n<nv;n++){ShowVectors(n, Vectors[n][2], Vectors[n][3], Vectors[n][4]);}
											scanf("%d,%d",&s1 ,&s2);
						      					CompareTwoVectors(Vectors[s1][2], Vectors[s1][3], Vectors[s1][4], Vectors[s2][2], Vectors[s2][3], Vectors[s2][4]);
						      	 			}
										break;
									case 4: if(nl<=1){//Compare 2 Lines
										printf("\nERROR:You dont have enough lines created to use this function.");
										}
									       	else{
											printf("\nEnter the two numbers that are related to the lines you want to compare separated by a coma.\nLINES:\n");
											for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
											scanf("%d,%d",&s1 ,&s2);
						      					CompareTwoLines(Lines[s1][1], Lines[s1][2], Lines[s1][3], Lines[s1][4], Lines[s1][5], Lines[s1][6], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
						      	 			}
										break;
									case 5: if(npl<2){
											printf("\nERROR:You dont have enough planes to use this function.");
										}
										else{
											printf("\nEnter the two numbers that are related to the planes you want to compare separated by a coma.\nPLANES:\n");
											for(n=1;n<npl;n++){ShowPlanes(n, Planes[n][1], Planes[n][2], Planes[n][3], Planes[n][4]);}
											scanf("%d,%d",&s1 ,&s2);
											CompareTwoPlanes(Planes[s1][1], Planes[s1][2], Planes[s1][3], Planes[s1][4], Planes[s2][1], Planes[s2][2], Planes[s2][3], Planes[s2][4]);
										}
										break;
									case 6: if(np<1){//Compare Point and Line
											printf("\nERROR:You dont have enough points created to use this function");
										}
										else if(nl<1){
											printf("\nERROR:You dont have enough lines created to use this function");
										}
										else{
											printf("\nEnter the number related to the point you want to compare.\nPOINTS:\n");
											for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
											scanf("%d",&s1);
											printf("\nNow enter the number related to the line you want to compare.\nLINES:\n");
											for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
											scanf("%d",&s2);
											ComparePointandLine(Points[s1][2], Points[s1][3], Points[s1][4], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
										}
										break;
									case 7: if(np<1){//Compare Point and Plane
											printf("\nERROR:You dont have enough points created to use this function");
										}
										else if(npl<1){
											printf("\nERROR:You dont have enough planes created to use this function");
										}
										else{
											printf("\nEnter the number related to the point you want to compare.\nPOINTS:\n");
											for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
											scanf("%d",&s1);
											printf("\nNow enter the number related to the plane you want to compare.\nPLANES:\n");
											for(n=1;n<npl;n++){ShowPlanes(n, Planes[n][1], Planes[n][2], Planes[n][3], Planes[n][4]);}
											scanf("%d",&s2);
											ComparePointandPlane(Points[s1][2], Points[s1][3], Points[s1][4], Planes[s2][1], Planes[s2][2], Planes[s2][3], Planes[s2][4]);
										}
										break;
									case 8: if(nl<1){//Compare Line and Plane
											printf("\nERROR:You dont have enough lines created to use this function");
										}
										else if(npl<1){
											printf("\nERROR:You dont have enough planes created to use this function");
										}
										else{
											printf("\nEnter the number related to the line you want to compare.\nLINES:\n");
											for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
											scanf("%d",&s1);
											printf("\nNow enter the number related to the plane you want to compare.\nPLANES:\n");
											for(n=1;n<npl;n++){ShowPlanes(n, Planes[n][1], Planes[n][2], Planes[n][3], Planes[n][4]);}
											scanf("%d",&s2);
											CompareLineandPlane(Lines[s1][1], Lines[s1][2], Lines[s1][3], Lines[s1][4], Lines[s1][5], Lines[s1][6], Planes[s2][1], Planes[s2][2], Planes[s2][3], Planes[s2][4]);
										}
										break;
								}
							}while(o3!=0);
							break;
						case 4: do{//EDIT
								ShowGeometryEditingMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1:printf("Enter the number related to the point you would like to edit\nPOINTS:\n");
									       for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
									       scanf("%d",&n);CreatePoint(&Points[np][1], &Points[np][2], &Points[np][3], &Points[np][4]);break;
									case 2: printf("Enter the number related to the vector you would like to edit\nVECTORS:\n");
										for(n=1;n<nv;n++){ShowVectors(n, Vectors[n][2], Vectors[n][3], Vectors[n][4]);}
										scanf("%d",&n);CreateVector(&Vectors[n][1], &Vectors[n][2], &Vectors[n][3], &Vectors[n][4]);break;
									case 3: printf("Enter the number related to the line you would like to edit\nLINES\n");
										for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
										scanf("%d",&n);CreateLine(&Lines[n][1], &Lines[n][2], &Lines[n][3], &Lines[n][4], &Lines[n][5], &Lines[n][6]);break;
								}
							}while(o3!=0);
							break;
						case 5: do{//FIND
								ShowGeometryFindMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1: do{//Find Point
											ShowGeometryFindPointMenu();
											scanf("%d",o4);
											switch(o4){
												case 1: if(np<2){//Find Midpoint of two Lines
														printf("\nERROR:You dont have enough points created to use this function");
													}
													else{
														printf("Enter the numbers related to the points you want to use to calculate the midpoint separated by a coma.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d,%d",&s1 ,&s2);
														FindMidpointofTwoPoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
													}
													break;
												case 2: if(np<2){//Find Mirror point in relation with another point
														printf("\nERROR: You dont have enough points created to use this function");
													}
													else{
														printf("\nEnter the numbers related to the points you want to use separated by a coma. First the number of the point you want to mirror and then the point that is going to be the midpoint.");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d,%d",&s1 ,&s2);
														FindMirrorPointInRelationWithOtherPoint(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
													}
													break;
											}
										}while(o4!=0);
										break;
									case 3: do{//Find Line
											ShowGeometryFindLineMenu();
											scanf("%d",&o4);
											switch(o4){
												case 1: if(np<2){
														printf("\nERROR:You dont have enough points to use this function");
													}
													else{
														printf("\nEnter the numbers related to the points you want to use to calculate the line separated by a coma.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d,%d",&s1 ,&s2);
														FindLineFromTwoPoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
													}
													break;
												case 2: if(np<1){
														printf("\nERROR:You dont have enough points created to use this function");
													}
													else if(nl<1){
														printf("\nERROR:You dont have enough lines created to use this function");
													}
													else{
														printf("\nEnter the number related to the point you want to use to calculate the line.\nPOINTS:");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d",&s1);
														printf("\nNow enter the number related to the line you want to use.\nLINES:\n");
														for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
														scanf("%d",&s2);
														FindLineParallelToLineandPassesbyPoint(Points[s1][2], Points[s1][3], Points[s1][4], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
													}
													break;
												case 3: if(nl<2){
														printf("\nERROR: You dont have enough lines created to use this function");
													}
													else{
														printf("\nEnter the numbers related to the points you want to use to calculate the line separated by a coma.\nLINES:\n");
														for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
														scanf("%d,%d",&s1 ,&s2);
														FindLinePerpendicularToTwoLinesAndPassesByIntersectionPoint(Lines[s1][1], Lines[s1][2], Lines[s1][3], Lines[s1][4], Lines[s1][5], Lines[s1][6], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
													}
													break;
												case 4: if(np<1){
														printf("\nERROR: You dont have enough points created to use this function.");
													}
													else if(nl<2){
														printf("\nERROR: You dont have enough lines created to use this function.");
													}
													else{
														printf("\nEnter the number related to the point you want to use to find the line.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d",&s1);
														printf("\nNow enter the numbers related to the lines you want to use to find the line separated by a coma.\nLINES:\n");
														for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
														scanf("%d,%d",&s2 ,&s3);
														FindLinePerpendicularToTwoLinesAndPassesBySomePoint(Points[s1][2], Points[s1][3], Points[s1][4], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6], Lines[s3][1], Lines[s3][2], Lines[s3][3], Lines[s3][4], Lines[s3][5], Lines[s3][6]);
													}
													break;
												case 5: if(np<1){//Find line perpendicular to plane and that contains one point.
														printf("\nERROR:You dont have enough points created to use this function.");
													}
													else if(npl<1){
														printf("\nERROR:You dont have enough planes created to use this function.");
													}
													else{
														printf("\nEnter the number related to the point you want to use to find the line.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d",&s1);
														printf("\nEnter the number related to the plane you want to use to find the line.");
													}
													break;
											}
										}while(o4!=0);
										break;
									case 4: do{//Find Plane
											ShowGeometryFindPlaneMenu();
											scanf("%d",&o4);
											switch(o4){
												case 1: if(nl<2){//Find plane that contains two lines
														printf("\nERROR:You dont have enough lines created to use this function.");
													}
													else{
														printf("\nEnter the numbers related to the lines you want to use to find the plane separated by a coma.\nLINES:\n");
														for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
														scanf("%d,%d",&s1 ,&s2);
														FindPlaneThatContainsTwoLines(Lines[s1][1], Lines[s1][2], Lines[s1][3], Lines[s1][4], Lines[s1][5], Lines[s1][6], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
													}
													break;
												case 2: if(np<1){//Find plane parallel to another plane and that contains a point
														printf("\nERROR:You dont have enough points created to use this function.");
													}
													else if(npl<1){
														printf("\nERROR:You dont have enough planes created to use this function.");
													}
													else{
														printf("\nEnter the number related to the point you want to use to find the plane.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d",&s1);
														printf("\nNow enter the number related to the plane you want to use to find a new parallel one.\nPLANES:\n"); 
														for(n=1;n<npl;n++){ShowPlanes(n, Planes[n][1], Planes[n][2], Planes[n][3], Planes[n][4]);}
														scanf("%d",&s2);
														FindPlaneParalleltoAnotherPlaneandContainsPoint(Points[s1][2], Points[s1][3], Points[s1][4], Planes[s2][1], Planes[s2][2], Planes[s2][3], Planes[s2][4]);
													}
													break;
												case 3: if(np<3){//Find plane that contains three points
														printf("\nERROR:You dont have enough points to use this function.");
													}
													else{
														printf("\nEnter the number related to the three points you want to use to find the plane.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d,%d,%d", &s1, &s2, &s3);
														FindPlaneContainingThreePoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4], Points[s3][2], Points[s3][3], Points[s3][4]);
													}
													break;
												case 4: if(np<1){//Find a plane that contains a point and a line.
														printf("\nERROR:You dont have enough points created to use this function.");
													}
													else if(nl<1){
														printf("\nERROR:You dont have enough lines created to use this function.");
													}
													else{
														printf("\nEnter the number related to the point you want to use to find the plane.\nPOINTS:\n");
														for(n=1;n<np;n++){ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);}
														scanf("%d",&s1);
														printf("\nNow enter the number related to the line you want to use to find the plane.\nLINES:\n");
														for(n=1;n<nl;n++){ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);}
														scanf("%d",&s2);
														FindPlaneContainingPointAndLine(Points[s1][2], Points[s1][3], Points[s1][4], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
													}
													break;
											}
										}while(o4!=0);
										break;
								}
							}while(o3!=0);
							break;
				       }
							
			       }while(o2!=0);
		}
	}while(o!=0);





//TESTING





}





















void ShowMenu(){
	printf("\n\nMENU");
	printf("\nGeometry press 1");

	printf("\nExit press 0\n");
}
void ShowGeometryMenu(){
	printf("\n\nGEOMETRY");
	printf("\nIf you want to create press 1");
	printf("\nIf you want to see what you have press 2");
	printf("\nIf you want to compare press 3");
	printf("\nTo edit press 4");
	printf("\nIf you want to find a new thing in relation to what you have press 5");

	printf("\nReturn to Menu press 0\n");
}
void ShowGeometryCreationMenu(){
	printf("\n\nCREATION");
	printf("\nTo create a Point press 1");
	printf("\nTo create a Vector press 2");
	printf("\nTo create a Line press 3");
	printf("\nTo create a Plane press 4");

	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryCreatedMenu(){
	printf("\n\nSHOWING");
	printf("\nTo see all the points you have created press 1");
	printf("\nTo see all the vectors you have created press 2");
	printf("\nTo see all the lines you have created press 3");
	printf("\nTo see all the planes you have created press 4");

	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryComparingMenu(){
	printf("\n\nCOMPARING");
	printf("\nTo compare 2 previosly created points press 1");
	printf("\nTo compare 3 previously created points press 2");
	printf("\nTo compare 2 previously created vectors press 3");
	printf("\nTo compare 2 previously created lines press 4");
	printf("\nTo compare 2 previously created planes press 5");
	printf("\nTo compare a point and a line press 6");
	printf("\nTo compare a point and a plane press 7");
	printf("\nTo compare a line and a plane press 8");

	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryEditingMenu(){
	printf("\n\nEDITING");
	printf("\nTo edit one of the points press 1");
	printf("\nTo edit one of the vectors press 2");
	printf("\nTo edit one of the lines press 3");
	
	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryFindMenu(){
	printf("\n\nFINDING");
	printf("\nTo find a point press 1");
	printf("\nTo find a vector press 2");
	printf("\nTo find a line press 3");
	printf("\nTo find a plane press 4");
	
	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryFindPointMenu(){
	printf("\n\nFINDING POINT");
	printf("\nTo find the midpoint of two other points press 1");
	printf("\nTo find a mirror point in relation to another point press 2");
	
	printf("\nTo return to Geometry Finding Menu press 0\n");
}
void ShowGeometryFindLineMenu(){
	printf("\n\nFINDING LINE");
	printf("\nTo find line that passes two points press 1");
	printf("\nTo find the line parallel to another one that passes by one point press 2");
	printf("\nTo find a line prependicular to another two lines and that passes by the intersection point press 3");
	printf("\nTo find a line perpendicular to another two lines and that passes by one certain point press 4");
	printf("\nTo find a line perpendicular to a plane and passes by one point press 5");

	printf("\nTo return to Geometry Finding Menu press 0\n");
}
void ShowGeometryFindPlaneMenu(){
	printf("\n\nFINDING PLANE");
	printf("\nTo find plane that contains two lines press 1");
	printf("\nTo find the plane that is parallel to another plane and that contains a certain point press 2");
	printf("\nTo find the plane that contains three points press 3");
	printf("\nTo find the plane that contains a point and a line press 4");
		
	printf("\nTo return to Geometry Finding Menu press 0\n");	
}


//Author:Juan Garcia Lopez
