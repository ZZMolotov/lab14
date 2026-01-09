#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void findLocalMax(const double A[][N], bool B[][N]){
	for(int i = 1; i < N-1; i++){
		for(int j; j <N-1; j++){
			double max = A[i][j];
			if(max >= A[i-1][j] && max >= A[i][j-1] && max >= A[i+1][j] && max >= A[i][j+1]){
				B[i][j] = 1;
			}else{
				B[i][j] = 0;
			}
		}
	}
}

void inputMatrix(double A [][N]){
	double t;
	for(int i = 0; i <N; i++){
		cout<< "Row "<<i+1<< ": ";
		for(int j = 0; j<N; j++){
			cin>> t;
			A[i][j] = t;
		}
		
	}
}

void showMatrix(const bool B[][N]){
	for( int i = 0; i < N; i++){
		for(int j = 0; j< N; j++){
			cout << B[i][j] << " ";
		}
		cout<<"\n";
	}
}