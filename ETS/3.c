#include <stdio.h>
#include <math.h>

// R(t) = 471.621 * (1.063)^t
double annual_revenue(double t);
int predict_year(double value);
void print_output(int start,int end);
// void output_res(FILE *input,int start, int end);

int main(){
    int start_year = 1990;
    int end_year = predict_year(1000000000);
    // FILE *output = fopen("output.txt", "w");
    // output_res(output, start_year, end_year);
    print_output(start_year, end_year);
}


void print_output(int start,int end){
    printf("|tahun \t| pendapatan\n");
    for(int i = 0; i <= (end-start); i++){
        int year = start + i;
        double pendapatan = annual_revenue(i);
        printf("|%d \t| %.4lf\n",year, pendapatan);
    }
}

// void output_res(FILE *input,int start, int end){
//     fprintf(input,"-------------------\n");
//     fprintf(input,"|tahun| pendapatan\n");
//     for(int i = 0; i <= (end-start); i++){
//         int year = start + i;
//         double pendapatan = annual_revenue(i);
        

//         fprintf(input, "|%d | %.4lf\n",year, pendapatan);
//     }
// }

double annual_revenue(double t){
    double res = 471.621 * pow(1.603, t);
    // double res = 471621 * pow(1603,t);
    return res;
}

int predict_year(double value){
    double res = 0;
    int res_year = 0;
    for(int i = 0; res <= value; i++){
        res = annual_revenue(i);
        res_year = i;
    }
    return res_year + 1990;
}