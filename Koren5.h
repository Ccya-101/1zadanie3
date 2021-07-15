
#ifndef Koren5_H
#define Koren5_H
double VichWithDifffff(double BaseChislo, int Degree) {
	int DegreeDigit = 0;
	int tmpDigit = BaseChislo;
	for (int i = 0; tmpDigit != 0; i++) {
		tmpDigit /= Degree;
		DegreeDigit++;
	}
	int x0 = pow(DegreeDigit, Degree);
	int xRaise = BaseChislo - x0;
	double DegreeObratno = (double)1 / Degree;
	double DegreePostDiff = DegreeObratno - (double)1;
	double x0postdiff = (double)pow(x0, DegreePostDiff);
	double Proizvod = x0postdiff / Degree;
	double dfx0 = (double)1 *(double)xRaise;
	double Diff = (double)DegreeDigit + (double)dfx0;
	return Diff;
}

#endif