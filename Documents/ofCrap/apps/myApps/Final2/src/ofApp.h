#pragma once

#include "ofMain.h"
#include "Electron.h"
#include "Photon.h"
#include <vector>
#include "Qtree.h"

using namespace std;

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	vector<Photon*>photons; //new vector
	Electron elec;
	ofRectangle boundary; //boundary for quad tree that handles collision detection
	//QuadTree * qt; //quad tree, 4 is the capacity that causes it to divide
	ofPoint photonPosition; //point that each of the photons are at



};