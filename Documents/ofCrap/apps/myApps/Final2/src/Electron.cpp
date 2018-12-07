//
//  Electron.cpp
//  final
//
//  Created by Matt on 12/6/18.
//
//

#include "Electron.h"
 #include <stdio.h>


Electron::Electron() {
	//fields
	x = 200;				 
	y = ofGetMouseY();
	radius = 15;

}

void Electron::move() {
	y = ofGetMouseY();

	if (y >= (ofGetWindowHeight() - radius) ) {
		y -= 1;
	}
	else  if (y <= ofGetWindowHeight() + radius) {
		y += 1;
	}
}

void Electron::show() {
	ofDrawCircle(x, y, radius);
}

void Electron::run()
{
	move();
	show();
}

void Electron::eColor() {
	r = 255; 
	g = 255;
	b = 255;
	ofSetColor(r, g, b);
}

float Electron::getX() {
	return x;
}

float Electron::getY() {
	return y;
}
