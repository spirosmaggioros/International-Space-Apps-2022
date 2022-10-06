#include <bits/stdc++.h>

using namespace std;

#define Pi 3.14159265

class DFT{
	public:
		double real , im;
		DFT() : real(0.0) , im(0.0){}
};


int main(int argc , char **argv){
    cin.tie(0);
		int M = 10;
		double a , b ,c;
		cin >> a >> b >> c;
		double func[M];

		for(int i = 0; i<M; i++){
			func[i] = (((a*(double)i) + (b*(double)i))- c);
		}

		int tfe; cin >> tfe;
		double cosi[M] , sine[M];
		for(int i = 0; i<M; i++){
			cosi[i] = cos((2*i*tfe*Pi) / M);
			sine[i] = sin((2*i*tfe*Pi) / M);
		}

		DFT dft[tfe];
		for(int i = 0; i<tfe; i++){
			for(int j=0; j<M; j++) {
					dft[j].real += func[i]*cosi[i];
					dft[j].im += func[i] * sine[i];		
			}
			cout << "(" << dft[i].real << ") - " << "(" << dft[i].im <<"j)" << '\n';
		}
}
