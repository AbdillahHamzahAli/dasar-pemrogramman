// Polygon

#include <stdio.h>
#include <math.h>

#define MAX_CORNERS 20

int get_corners(FILE *input, double X[], double Y[]);
void output_corners(FILE *input, double X[], double Y[], int n);
double polygon_area(double X[],double Y[], int n);

int main(){
    double X[MAX_CORNERS];
    double Y[MAX_CORNERS];
    FILE *input =  fopen("input.txt", "r");
    FILE *output =  fopen("output.txt", "w");
    int size = get_corners(input, X, Y); 
    printf("get_corners | size = %d \n", size);
    output_corners(output, X, Y,size);    
    double area = polygon_area(X, Y, size);
    printf("Area : %.2lf\n", area);
    // fclose(input);
    // fclose(output);
}

int get_corners(FILE *input, double X[], double Y[])
{
	int i = 0;
	while((fscanf(input, "%lf %lf", &X[i], &Y[i])) != EOF)
	{
		i++;
	}
	return i;
}

void output_corners(FILE *input, double X[], double Y[], int n){
    for(int i = 0; i < n; i++){
        fprintf(input, "%.2lf %.2lf\n", X[i], Y[i]);
    }
}

double polygon_area(double X[],double Y[], int n){
    int A = 0;
    for(int i = 0; i < n - 3;i++){
        A += (X[i] + X[i+1]) * (Y[i+1] - Y[i]);
    }
    A = fabs(A) / 2;
    return A;
}