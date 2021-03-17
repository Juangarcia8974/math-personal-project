#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//THINGS NOT DONE
//1:[MAYBE GOOD MAYBE BAD] Currently, the function CreatePlane();requires the user to know a point and I think the more suitable thing is to ask for the value of d. [MAYBE GOOD MAYBE BAD]
//2:Come up with more ideas for the function ShowGeometryFindPointMenu();
//3:Come up with more ideas for the function ShowGeometryFindLineMenu();
//4:Finish the function ShowGeometryFindPlaneMenu();and implement all the options.




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
void CreatePoint(float* num_coor, float* coor1, float* coor2, float* coor3);
void ShowPoints(int n, float x, float y, float z);
void CompareTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2);
void CompareThreePoints(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
void ComparePointandLine(float x, float y, float z, float xp, float yp, float zp, float xv, float yv, float zv);
void ComparePointandPlane(float xp, float yp, float zp, float xn, float yn, float zn, float d);
void FindMidpointofTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2);
void FindMirrorPointInRelationWithOtherPoint(float x1, float y1, float z1, float xm, float ym, float zm);
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
void CreatePlane(float* xv, float* yv, float* zv, float* d);
void ShowPlanes(int n, float xn, float ny, float nz, float d);
void PrintPlane(float xn, float yn, float zn, float d);
void CompareTwoPlanes(float xn1, float yn1, float zn1, float d1, float xn2, float yn2, float zn2, float d2);
void FindPlaneThatContainsTwoLines(float xp1, float yp1, float zp1, float xv1, float yv1, float zv1, float xp2, float yp2, float zp2, float xv2, float yv2, float zv2);
void FindPlaneParalleltoAnotherPlaneandContainsPoint(float xp, float yp, float zp, float xn, float yn, float zn, float d1);
void FindPlaneContainingThreePoints(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);






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

	printf("\nTo return to Geometry Finding Menu press 0\n");
}
void ShowGeometryFindPlaneMenu(){
	printf("\n\nFINDING PLANE");
	printf("\nTo find plane that contains two lines press 1");
	printf("\nTo find the plane that is parallel to another plane and that contains a certain point press 2");
	printf("\nTo find the plane that contains three points press 3");
		
	printf("\nTo return to Geometry Finding Menu press 0\n");	
}




	//GEOMETRY
		//POINTS
			//Create a point.
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
	//I will first compare the two vectors
	if((xv1/xv2==yv1/yv2)&&(yv1/yv2==zv1/zv2)){//The vectors are parallel to each other. This means the lines can either be parallel or the same line with different equations.
		//To know if its the same line or not, im just going to substitute the point of the first line in the equation of the second line.
		if((xp1-xp2)/xv2==(yp1-yp2)/yv2 && (yp1-yp2)/yv2==(zp1-zp2)/zv2){//Its the same line
			printf("\nThey are the same line expressed with a different equation");
		}
		else{
			xv=xp2-xp1;
			yv=yp2-yp1;
			zv=zp2-zp1;
			//I create a matrix 
			//| i | j | k |
			//| xv| yv| zv|
			//|xv1|yv1|zv1|
			i=yv*zv1-yv1*zv;
			j=xv1*zv-xv*zv1;
			k=xv*yv1-xv1*yv;
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
		det=xv1*yv2*(zp2-zp1)+yv1*zv2*(xp2-xp1)+zv1*xv2*(yp2-yp1)-zv1*yv2*(xp2-xp1)-xv1*zv2*(yp2-yp1)-yv1*xv2*(zp2-zp1);
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
			detdist=(xv*yv1*zv2)+(xv1*yv2*zv)+(xv2*zv1*yv)-(xv2*yv1*zv)-(xv*yv2*zv1)-(xv1*yv*zv2);
			//I create another matrix 
			//|  i  |  j  |  k  |
			//| xv1 | yv1 | zv1 |
			//| xv2 | yv2 | zv2 |
			//This means that
			i=yv1*zv2-zv1*yv2;
			j=xv2*zv1-xv1*zv2;
			k=xv1*yv2-xv2*yv1;
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
		xv=yv1*zv2-yv2*zv1;
		yv=xv2*zv1-zv2*xv1;
		zv=xv1*yv2-xv2*yv1;
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
		//This means that:
		xn=yv1*zv2-yv2*zv1;
		yn=xv2*zv1-xv1*zv2;
		zn=xv1*yv2-xv2*yv1;
		//I use one of the points to figure out the value of d.
		//xn*xp+yn*yp+zn*zp+d=0
		//This means that
		d=-(xn*x1+yn*y1+zn*z1);
		printf("\nThe plane that contains the points(%f,%f,%f),(%f,%f,%f) and (%f,%f,%f) is the plane ", x1, y1, z1, x2, y2, z2, x3, y3, z3);PrintPlane(xn, yn, zn, d);
	}
}


//AUTHOR:@JuanGarciaLopez


