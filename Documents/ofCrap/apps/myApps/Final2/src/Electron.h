#pragma once
//#include "ofApp.h"
#include "ofMain.h"

class Electron {

public:
	Electron();

	void move();
	void show();
	void run();
	void update();
	void eColor();
	float getX();
	float getY();
    float radius; //radius of electron

private:
	float x; //x location
	float y; //y location that changes based on mouse position
	
	//float yspeed;
	int r;
	int g;
	int b;

};

