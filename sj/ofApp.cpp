#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
	********************/
	ofSetFrameRate(60);
	ofBackground(127);
	ofSetCircleResolution(32);
	
	b_disp = true;
	
	/********************
	********************/
	ofColor initColor = ofColor(0, 127, 255, 255);
	ofColor minColor = ofColor(0, 0, 0, 0);
	ofColor maxColor = ofColor(255, 255, 255, 255);
	
	ofVec2f initPos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
	ofVec2f minPos = ofVec2f(0, 0);
	ofVec2f maxPos = ofVec2f(ofGetWidth(), ofGetHeight());
	
	/********************
	********************/
	gui.setup();
	
	
	gui.add(radius.setup("radius", 200, 0, 400)); // init, min. max
	gui.add(color.setup("color", initColor, minColor, maxColor));
	gui.add(position.setup("position", initPos, minPos, maxPos));
	
	button.addListener(this, &ofApp::testButton_released);
	// gui.add(button.setup("button", 100, 100)); // name, width, height
	gui.add(button.setup("button"));
	
	gui.add(toggle.setup("toggle", true));
	
	gui.add(label.setup("label", "nobuhiro"));
	
	ofVec3f initVec3f = ofVec3f(50, 50, 50);
	ofVec3f minVec3f = ofVec3f(0, 0, 0);
	ofVec3f maxVec3f = ofVec3f(100, 100, 100);
	gui.add(vec3D.setup("vec3D", initVec3f, minVec3f, maxVec3f));
}

//--------------------------------------------------------------
void ofApp::update(){

}

/******************************
description
	you can't get the pressed event but only release.
	(from web info)
******************************/
void ofApp::testButton_released()
{
	printf("button released\n");
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(color);
	ofCircle(ofVec2f(position), radius);
	
	if(b_disp) gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch(key){
		case 'd':
			if(b_disp)	b_disp = false;
			else		b_disp = true;
			break;
			
		case 't':
			printf("toggle = %d\n", int(toggle));
			break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
