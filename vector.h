#pragma once //Ïîäêëþ÷åíèå ôàéëà îäèí ðàç
#include <iostream>
using namespace std;
/*
struct - êëþ÷åâîå ñëîâî
Vector - èìÿ êëàññà(ñòðóêòóðû)
float re; - ïîëÿ
void setRe(float re); - ìåòîäû
*/
//class - ïîëÿ ïî óìîë÷àíèþ ïðèâàòíûå (private)
//struct - ïîëÿ ïî óìîë÷àíèþ ïóáëè÷íûå (public)
class Vector {
private:
	int dimension;//ðàçìåðíîñòü
	float* data;
public:
	Vector(int dim, float def); //Êîíñòðóêòîð (ðàçìåðíîñòü / çíà÷åíèå ïî óìîë÷àíèþ)
	~Vector(); // Äåñòðóêòîð (ìåòîä, êîòîðûé âûçûâàåòñÿ ïåðåä óäàëåíèåì îáúåêòà)
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	Vector operator*(float other);
	float operator*(const Vector& other);
	int getDimension(); // Ìåòîä, âîçâðàùàþùèé ðàçìåðíîñòü îáúåêòà
	float& operator[](int); // Îïåðàòîð äîñòóïà ê äàííûì
};

Vector operator*(float re, Vector& c);

istream& operator>>(istream& is, Vector& c);
ostream& operator<<(ostream& os, Vector& c);