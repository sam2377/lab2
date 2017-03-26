#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<fstream>
#include"function.h"
using namespace std;
int main(){
	float k,one,two;
	float result_A[6]={0},result_B[6]={0};
	ZXC func;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	inFile >> k >> one >> two;
	for(int i=0;i<6;i++)
		inFile>>result_A[i];
	for(int i=0;i<6;i++){
		if(result_A[i]==0) result_B[i]=1;
		if(result_A[i]==0.5) result_B[i]=0.5;
		if(result_A[i]==1) result_B[i]=0;
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	outFile << one << " "<< two << endl;
	func.Set_K(k);
	func.Set_Ra(one);
	func.Set_Rb(two);
	for(int i=0;i<6;i++){
		func.process_Ea();
		func.process_Eb();
		func.process_Ra(result_A[i]);
		func.process_Rb(result_B[i]);
		outFile << func.Get_Ra() << " " << func.Get_Rb() << endl;
	}
	return 0;

}
