#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[] ,int N, double B[]){
    double x = 0;
    double y = 0;
    double z = 1;
    double w = 0;
    double max = A[0];
    double min = A[0];
    int i = 0;
    for(i = 0; i < N; i++){
        x += A[i];
    }
    B[0] = x/N;
    for(i = 0; i < N; i++){
        y += pow(A[i]-B[0],2);
    }
    B[1] = sqrt(y/N);
    for(i = 0; i < N; i++){
        z *= A[i];
    }
    B[2] = pow(z,1/double(N));
    for(i = 0; i < N; i++){
        w += 1/A[i];
    }
    B[3] = N/w;
    for(i = 0; i < N; i++){
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
    }
    B[4] = max;
    B[5] = min;
}