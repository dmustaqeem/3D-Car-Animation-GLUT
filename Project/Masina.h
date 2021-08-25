#ifndef Masina_H
#define Masina_H
#include "Obiect.h"

class Masina : public Obiect
{
private:
	double rotireTun;
	double inclinareTun;
	double rotireMasina;
public:
	Masina(double a, double b, double c, double rt, double it, double rotireMasina);
	Masina();
	void setRotireTun(double);
	void setInclinareTun(double);
	void setRotireMasina(double);
	double getRotireTun();
	double getInclinareTun();
	double getRotireMasina();
	void Draw();
};

#endif