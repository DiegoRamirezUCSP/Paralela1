#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;

void llenar(double arr[],int s){
    for(int i = 0; i < s; i++){
        arr[i] = 0;
    }
}
void initialize(double arr[], int s){
    srand(time(0));
    int random = (rand() % 100);
    for(int i = 0; i < s; i++){
        arr[i] = random;
    }
}

int main(){
    time_t start1, end1;
    time_t start2, end2;

    time(&start1);
    int MAX=100000;
    double A[MAX][MAX];
    double x[MAX];
    double y[MAX];
    for(int i=0;i<MAX;i++){
        initialize(A[i],MAX);
    }
    initialize(x,MAX);
    llenar(y,MAX);

    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            y[i] += A[i][j]+x[j];
        }
    }
    time(&end1);

    double time_taken1 = double(end1 - start1);
    cout << fixed << time_taken1 << setprecision(5) << " sec " << endl;


    time(&start2);
    llenar(y,MAX);


     for(int j=0;j<MAX;j++){
        for(int i=0;i<MAX;i++){
            y[i] += A[i][j]+x[j];
        }
    }
    time(&end2);

    double time_taken2 = double(end2 - start2);
    cout << fixed << time_taken2 << setprecision(5) << " sec " << endl;

}
