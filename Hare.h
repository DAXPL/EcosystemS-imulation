#pragma once
#include <string>
class Hare
{
public:
	Hare();
	void PrintOutHare();
	void SimulateHare(int* food, int maxFood);
	bool IsAlive();
	bool IsHareMale();
	bool IsChild();
	int GetHareFurFenotype();
	std::string GetHareFurFenotypeName();
	int hareID{0};
	int GetMoveVector();
	void HaveSex(Hare* partner);

	//TESTY - POTEM HERMETYZOWAC
	/*
	C = 3 jest w pe�ni dominuj�cy wzgl�dem innych;  allel "czarny"
	Cch = 2 jest niepe�nej dominacji wzgl�dem himalajskiego i albinotycznego ; allel "szynszylowy"
	Ch = 1 himalajski allel
	c = 0  allelu albinotyczny
	*/
	int furGenotype[2] = { 0,0 };
	int age{ 0 };
	int food{ 450 };
private:
	
	bool isPregnant{ false };
	//150-200
	int foodUsage{ 150 };
	int maxFoodPerDay{ 300 };
	int maxFatSize{ 1500 };
	bool isMale {true};
	
	//28-35
	int pregnacyTIme{ 31 };
	int pregnacyTimeLeft{ 0 };

	bool alreadyMoveThisDay{ false };
	
};

