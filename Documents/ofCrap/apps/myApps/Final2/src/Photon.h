#pragma once
#include "ofMain.h"
#include "Electron.h"
using namespace std;
class Photon {

public:
	Photon();

	void fall();
	void show();
	void run();
	void update();
	void pColor(int);
	void PhotonDraw();
	float GetX();
	float GetY();
    bool intersects(Electron);
    float speedMult = 1;
    float x; //random starting location
	float y; //random y location and start off screen
    void reset();
   
private:
	
	float z; ///pseudo parallax
	//float len; //different rain drop length
	float xspeed;
	float height;
	int r;
	int g;
	int b;
	int a;
	

};