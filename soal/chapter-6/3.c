#include <stdio.h>

// prototype
int get_problem();
void parallelogram(double *area);
void triangle(double *area);
void trapezoid(double *area);
void circle(double *area);


int main(){
    int choice;
    while ((choice = get_problem()) != 5)
    {
        double area;
        if(choice == 1){
            parallelogram(&area);
            printf("\nArea of parallelogram is %.2lf\n",area);
        }  else if(choice == 2){
            triangle(&area);
            printf("\nArea of triangle is %.2lf\n",area);
        } else if(choice == 3){
            trapezoid(&area);
            printf("\nArea of trapezoid is %.2lf\n",area);
        } else if(choice == 4){
            circle(&area);
            printf("\nArea of circle is %.2lf\n",area);
        } else {
            printf("exit");
            return 0;
        }
    }
    printf("exit"); 
}

int get_problem(){
    int n;
    printf("\nEnter the number of the problem you wish to solve.\n");
    printf("(1) Area of a parallelogram\n");
    printf("(2) Area of a triangle\n");
    printf("(3) Area of a trapezoid\n");
    printf("(4) Area of a circle\n");
    printf("(5) QUIT\n");
    printf("Enter : ");
    scanf("%d",&n);
    return n;
}

void parallelogram(double *area){
    double base,height;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter height : ");
    scanf("%lf", &height);
    
    *area = base * height;
}

void triangle(double *area){
    double base,height;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter height : ");
    scanf("%lf", &height);
    
    *area = 0.5 * base * height;
}

void trapezoid(double *area){
    double base1,base2,height;
    printf("Enter base1 : ");
    scanf("%lf", &base1);
    printf("Enter base2 : ");
    scanf("%lf", &base2);
    printf("Enter height : ");
    scanf("%lf", &height);
    
    *area = 0.5 * base1 * base2 * height;
}

void circle(double *area){
    double radius;
    printf("Enter radius : ");
    scanf("%lf", &radius);

    *area = 3.14 * radius * radius;
}


