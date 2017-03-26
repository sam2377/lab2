using namespace std;
class ZXC{
	public:
	ZXC();
	void Set_Ra(int x);
	void Set_Rb(int x);
	void Set_K(float x);
	float Get_Ra();
	float Get_Rb();
	float Get_K();
	void process_Ra(float result);
	void process_Rb(float result);
	void process_Ea();
	void process_Eb();
	private:
	float K,Ra,Rb,Ea,Eb;
};
