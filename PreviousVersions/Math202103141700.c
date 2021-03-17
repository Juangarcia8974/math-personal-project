#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//THINGS NOT DONE
//1:Calculate distance in the function CompareTwoLines();
//2:Come up with more ideas for the function ShowGeometryFindPointMenu();
//3:Come up with more ideas for the function ShowGeometryFindLineMenu();




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

	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryCreatedMenu(){
	printf("\n\nSHOWING");
	printf("\nTo see all the points you have created press 1");
	printf("\nTo see all the vectors you have created press 2");
	printf("\nTo see all the lines you have created press 3");

	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryComparingMenu(){
	printf("\n\nCOMPARING");
	printf("\nTo compare 2 previosly created points press 1");
	printf("\nTo compare 3 previously created points press 2");
	printf("\nTo compare 2 previously created vectors press 3");
	printf("\nTo compare 2 previously created lines press 4");
	printf("\nTo compare a point and a line press 5");

	printf("\nTo return to Geometry Menu press 0\n");
}
void ShowGeometryEditingMenu(){
	printf("\n\nEDITING");
	printf("\nTo edit one of the points press 1");
	printf("\nTo edit one of the vectors press 2");
	printf("\nTo edit one of the lines press 3");
	
	printf("\nTo return to Geometry Menu Press 0\n");
}
void ShowGeometryFindMenu(){
	printf("\n\nFINDING");
	printf("\nIf you want to find a point press 1");
	printf("\nIf you want to find a vector press 2");
	printf("\nIf you want to find a line press 3");
}
void ShowGeometryFindPointMenu(){
	printf("\n\nFINDING POINT");
	printf("\nTo find the midpoint of two other points press 1");
	
	printf("\nTo return to Geometry Finding Menu press 0");
}
void ShowGeometryFindLineMenu(){
	printf("\n\nFINDING LINE");
	printf("\nTo find line that passes two points press 1");
	printf("\nTo find the line parallel to another one that passes by one point press 2");
	printf("\nTo find a line prependicular to another two lines and that passes by the intersection point press 3");
	printf("\nTo find a line perpendicular to another two lines and that passes by one certain point press 4");

	printf("\nTo return to Geometry Finding Menu press 0");
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
		printf("\nThe point (%f,%f,%f) is part of the line (x,y,z)=(%f,%f,%f)+(alfa)*(%f,%f,%f)", x, y, z, xp, yp, zp, xv, yv, zv);
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
		printf("\nhe point (%f,%f,%f) is not of the line (x,y,z)=(%f,%f,%f)+(alfa)*(%f,%f,%f). They are at a distance of %f", x, y, z, xp, yp, zp, xv, yv, zv, dist);
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


		//VECTORS
			//Create a Vector
				//Im going to have 1 way of creating vectors but i will implement many other ways if i have time.

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
		printf("\nLos vectores (%f,%f,%f) y (%f,%f,%f) son perpendiculares.", x1, y1, z1, x2, y2, z2);
	}
	else if((x1/x2==y1/y2)&&(y1/y2==z1/z2)){
		printf("\nLos vectores (%f,%f,%f) y (%f,%f,%f) son paralelos.", x1, y1, z1, x2, y2, z2);
	}
	else{
		printf("Los vectores (%f,%f,%f) y (%f,%f,%f) no son ni perpendiculares ni paralelos.", x1, y1, z1, x2, y2, z2);
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

		printf("\nThe line you have created is:(x,y,z)=(%f,%f,%f)+(alfa)*(%f,%f,%f).\nIf this is correct press 0 and if its not press 1.", xpoint, ypoint, zpoint, xvector, yvector, zvector);
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
	//I will first compare the two vectors
	if((xv1/xv2==yv1/yv2)&&(yv1/yv2==zv1/zv2)){//The vectors are parallel to each other. This means the lines can either be parallel or the same line with different equations.
		//To know if its the same line or not, im just going to substitute the point of the first line in the equation of the second line.
		if((xp1-xp2)/xv2==(yp1-yp2)/yv2 && (yp1-yp2)/yv2==(zp1-zp2)/zv2){//Its the same line
			printf("\nThey are the same line expressed with a different equation");
		}
		else{
			printf("\nThe two lines are parallel to each other with a distance of [NOT YET PROGRAMMED]");
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
		else{printf("\nThe two lines cross each other but dont intersect.");}
	}
}

			//Show Lines
void ShowLines(int n, float xp, float yp, float zp, float xv, float yv, float zv){//Intended to be looped over so that it shows every Line in the Array
	printf("Line %d:(x,y,z)=(%f,%f,%f)+(alfa)*(%f,%f,%f).\n", n, xp, yp, zp, xv, yv, zv);
}
			//FInd line from two points
void FindLineFromTwoPoints(float x1, float y1, float z1, float x2, float y2, float z2){
	float xv;
	float yv;
	float zv;
	xv=x2-x1;
	yv=y2-y1;
	zv=z2-z1;
	printf("(x,y,z)=(%f,%f,%f)+(alfa)*(%f,%f,%f)", x1, y1, z1, xv, yv, zv);
}
			//Find a line parallel to another one and that passes by one point
void FindLineParallelToLineandPassesbyPoint(float x, float y, float z, float xp, float yp, float zp, float xv, float yv, float zv){
	printf("\nThe line that is parallel to (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f) and that passes through the point (%f,%f,%f) is the line (x,y,z)=(%f,%f,%f)+(alpha)*(%f,%f,%f)", xp, yp, zp, xv, yv, zv, x, y, z, xv, yv, zv, x, y, z);
}



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
			//Im going to use the same method as with the points and vectors exept that i need a new
	float Lines[100][6];//100 lines [n][1]=xp; [n][2]=yp; [n][3]=zp; [n][4]=xv; [n][5]=yv; [n][6]=zv;




	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////START OF PROGRAM///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int o;//Option 1
	int o2;//Option 2
	int o3;//Option 3
	int o4;//Option 4
	int np=1;//Point number
	int nv=1;//Vector number
	int nl=1;//Line number
	int i;
	int n;
	int s1;//SUBJECTS 1
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
								}
							}while(o3!=0);
							break;
						case 2:	do{//SHOW WHAT HAS BEEN CREATED
								ShowGeometryCreatedMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1: printf("\n\nPOINTS:\n");n=1;do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);break;
									case 2: printf("\n\nVECTORS:\n");n=1;do{ShowVectors(n, Vectors[n][2], Vectors[n][3], Vectors[n][4]);n++;}while(n<nv);break;
									case 3: printf("\n\nLINES:\n");n=1;do{ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);n++;}while(n<nl);break;
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
											n=1;
											do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);
											scanf("%d,%d",&s1 ,&s2);
											CompareTwoPoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
										}
										break;
									case 3: if(nv<=1){//Compare 2 Vectors
										printf("\nERROR:You dont have enough vectors created to use this function.");
										}
									       	else{
											printf("\nEnter the two numbers that are related to the vectors you want to compare separated by a coma.\nVECTORS:\n");
											n=1;
						       					do{ShowVectors(n, Vectors[n][2], Vectors[n][3], Vectors[n][4]);n++;}while(n<nv);
											scanf("%d,%d",&s1 ,&s2);
						      					CompareTwoVectors(Vectors[s1][2], Vectors[s1][3], Vectors[s1][4], Vectors[s2][2], Vectors[s2][3], Vectors[s2][4]);
						      	 			}
										break;
									case 4: if(nl<=1){//Compare 2 Lines
										printf("\nERROR:You dont have enough lines created to use this function.");
										}
									       	else{
											printf("\nEnter the two numbers that are related to the lines you want to compare separated by a coma.\nLINES:\n");
											n=1;
						       					do{ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);n++;}while(n<nl);
											scanf("%d,%d",&s1 ,&s2);
						      					CompareTwoLines(Lines[s1][1], Lines[s1][2], Lines[s1][3], Lines[s1][4], Lines[s1][5], Lines[s1][6], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
						      	 			}
										break;
									case 5: if(np<1){//Compare Point and Line
											printf("\nERROR:You dont have enough points created to use this function");
										}
										else if(nl<1){
											printf("\nERROR:You dont have enough lines created to use this function");
										}
										else{
											printf("\nEnter the number related to the point you want to compare.\nPOINTS:\n");
											n=1;
											do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);
											scanf("%d",&s1);
											printf("\nNow enter the number related to the line you want to compare.\nLINES:\n");
											n=1;
											do{ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);n++;}while(n<nl);
											scanf("%d",&s2);
											ComparePointandLine(Points[s1][2], Points[s1][3], Points[s1][4], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
										}
										break;
								}
							}while(o3!=0);
							break;
						case 4: do{//EDIT
								ShowGeometryEditingMenu();
								scanf("%d",&o3);
								switch(o3){
									case 1:printf("Enter the number related to the vector you would like to edit\n");
									       n=1;do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);
									       scanf("%d",&n);CreatePoint(&Points[np][1], &Points[np][2], &Points[np][3], &Points[np][4]);break;
									case 2: printf("Enter the number related to the vector you would like to edit\n");
										n=1;do{ShowVectors(n, Vectors[n][2], Vectors[n][3], Vectors[n][4]);n++;}while(n<nv);
										scanf("%d",&n);CreateVector(&Vectors[n][1], &Vectors[n][2], &Vectors[n][3], &Vectors[n][4]);break;
									case 3: printf("Enter the number related to the line you would like to edit\n");
										n=1;do{ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);n++;}while(n<nl);
										scanf("%d",&n);CreateLine(&Lines[n][1], &Lines[n][2], &Lines[n][3], &Lines[n][4], &Lines[n][5], &Lines[n][6]);break;
								}
							}while(o3!=0);
							break;
						case 5: do{
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
														n=1;
														do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);
														scanf("%d,%d",&s1 ,&s2);
														FindMidpointofTwoPoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
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
														n=1;
														do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);
														scanf("%d,%d",&s1 ,&s2);
														FindLineFromTwoPoints(Points[s1][2], Points[s1][3], Points[s1][4], Points[s2][2], Points[s2][3], Points[s2][4]);
													}
													break;
												case 2: if(np<1){
														printf("\nERROR:You dont have enough points to use this function");
													}
													else if(nl<1){
														printf("\nERROR:You dont have enough lines to use this function");
													}
													else{
														printf("\nEnter the number related to the point you want to use to calculate the line.\nPOINTS:");
														n=1;
														do{ShowPoints(n, Points[n][2], Points[n][3], Points[n][4]);n++;}while(n<np);
														scanf("%d",&s1);
														printf("\nNow enter the number related to the line you want to use.\nLINES:\n");
														n=1;
														do{ShowLines(n, Lines[n][1], Lines[n][2], Lines[n][3], Lines[n][4], Lines[n][5], Lines[n][6]);n++;}while(n<nl);
														scanf("%d",&s2);
														FindLineParallelToLineandPassesbyPoint(Points[s1][2], Points[s1][3], Points[s1][4], Lines[s2][1], Lines[s2][2], Lines[s2][3], Lines[s2][4], Lines[s2][5], Lines[s2][6]);
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
