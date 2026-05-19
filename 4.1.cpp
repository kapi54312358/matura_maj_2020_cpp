#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int const n=100;

void era(bool *A){
	int i=0, j=0;
	A[0]=false;
	A[1]=false;
	for(i=2; i<n; i++){
		A[i]=true;
	}
	
	for(i=2; i<n; i++){
		if(A[i]==true){
			for(j=i*i; j<n; j+=i){
				A[j]=false;
			}	
		}	
	}	
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pary.txt");
	int i=0, j=0, k=0, a=0;
	bool flaga;
	int liczby[n];
	bool A[n];
	string wyrazy[n];
	vector <int> l_pierwsze;
	era(A);
	

	for(i=0; i<n; i++){
		we>>liczby[i];
		we>>wyrazy[i];
		if(A[i]) l_pierwsze.push_back(i);
	}
	
	for(i=0; i<n; i++){
		a=liczby[i];
		if(a%2==0){
			for(j=0; j<a; j++){
				k=a;
				while(k>0){
					if(a-l_pierwsze[j]==l_pierwsze[k]){
						cout<<a<<" "<<l_pierwsze[j]<<" "<<l_pierwsze[k]<<endl;
						j=a;//sprytny break
					}
					k--;
				}		
			}
		}
	}
	

	return 0;
}
