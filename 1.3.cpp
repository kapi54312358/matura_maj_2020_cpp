#include <iostream>

using namespace std;

bool czy_k_podobne(int n, int *A, int *B, int k){
	int temp1=0, temp2=0, l=0;
	int B_p[n];
	
	for(int j=0; j<n-k; j++){
		B_p[j+k]=B[j];
	}
	
	for(int j=n-k; j<n; j++){
		B_p[l]=B[j];
		l++;
	}
	
	for(int j=0; j<n; j++){
		if(B_p[j]!=A[j]) return false;
	}
	
	return true;
}

bool czy_podobne(int n, int *A, int *B){
	for(int i=0; i<n; i++){
		if(czy_k_podobne(n, A, B, i)) return true;
	}
	return false;
}

int main(int argc, char** argv) {
	int n=3, k=0;
	int A[n]={5,7,9};
	int B[n]={5,7,9};
	
	cout<<czy_k_podobne(n, A, B, k);
	
	return 0;
}
