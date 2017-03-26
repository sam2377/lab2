#include<cmath>
#include"function.h"
	ZXC::ZXC(){
		K=0;
		Ra=0;
		Rb=0;
		Ea=0;
		Eb=0;
	}
	void ZXC::Set_Ra(int x){
		Ra=x;
	}
	void ZXC::Set_Rb(int x){
		Rb=x;
	}
	void ZXC::Set_K(float x){
		K=x;
	}
	float ZXC::Get_Ra(){
		return Ra;
	}
	float ZXC::Get_Rb(){
		return Rb;
	}
	float ZXC::Get_K(){
		return K;
	}
	void ZXC::process_Ra(float result){
		Set_Ra(int(Get_Ra()+Get_K()*(result-Ea)+0.5));
	}
	void ZXC::process_Rb(float result){
		Set_Rb(int(Get_Rb()+Get_K()*(result-Eb)+0.5));
	}
	void ZXC::process_Ea(){
		Ea = 1/(1+pow(10,(Rb-Ra)/400));
	}
	void ZXC::process_Eb(){
		Eb = 1/(1+pow(10,(Ra-Rb)/400));
	}
