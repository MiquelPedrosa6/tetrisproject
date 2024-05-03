#ifndef JOC_H
#define JOC_H
#include "Tauler.h"
#include "Figura.h"
#include <string>
#include <fstream>

using namespace std;

class Joc
{
public:
	Joc() {}
	void inicialitza(const string& nomFitxer);


	bool giraFigura(DireccioGir direccio);
	bool mouFigura(int dirX);
	int baixaFigura();

	void escriuTauler(const string& nomFitxer);
	void setGir() { m_girFigura = giraFigura(direccio); }
	Figura getFiguraAct() const{ return m_figuraActual; }

	bool prueba();
private:
	Tauler m_tauler;
	Figura m_figuraActual;
	DireccioGir m_girFigura;

};



#endif
