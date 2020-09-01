/**
*Author: Erik Beyer
*ebeyer2@husker.unl.edu
*Date: 8/31/2020
*
*Location Distance Calculator
*
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc, char **argv) {
	int const earthR = 6371;
	double xstart = 0.0;
	double xend = 0.0;
	double ystart = 0.0;
	double yend = 0.0;
	double d = 0.0;
	
	printf("Please enter start Latitude: \n");
	scanf("%lf" , &xstart);
	
	printf("Please enter start Longitude: \n");
	scanf("%lf" , &ystart);
	
	printf("Please enter end Latitude: \n");
	scanf("%lf" , &xend);
	
	printf("Please enter end Latitude: \n");
	scanf("%lf" , &yend);
	
	xstart = (xstart / 180) * M_PI;
	xend = (xend / 180) * M_PI;
	ystart = (ystart / 180) * M_PI;
	yend = (yend / 180) * M_PI;
	
	d = acos((sin(xstart) * sin(xend)) + (cos(xstart) * cos(xend) * cos(yend - ystart))) * earthR;
	
	xstart = (xstart * 180) / M_PI;
	xend = (xend * 180) / M_PI;
	ystart = (ystart * 180) / M_PI;
	yend = (yend * 180) / M_PI;
	
	printf("Location Distance\n");
	printf("========================");
	printf("Origin: (%lf , %lf)\n" , xstart, ystart);
	printf("Destination: (%lf , %lf)\n" , xend , xend);
	printf("Air distance is %lf kms\n" , d);
	
	return 0;
	
}
	
