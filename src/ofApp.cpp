#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    stem0 = ofPoint( 500, 300);
    stem1 = ofPoint( 300, 270);
    stem2 = ofPoint( 300, 300);
    stem3 = ofPoint( 300, 400);
    leftLeaf = ofPoint( 200, 220);
    rightLeaf = ofPoint( 400, 220);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofNoFill();
//    ofBackground(0, 0, 0);
//    ofSetColor(90, 130, 200);
//
//
//
//    ofDrawCircle(stem0, 80);
//    ofSetLineWidth(7);
//    ofDrawLine(stem0 , stem3);
//    ofDrawTriangle(stem1, stem2, leftLeaf);
//    ofDrawTriangle(stem1, stem2, rightLeaf);
//
//    ofPushMatrix();
//    ofTranslate(stem0);
//
//    float angle = ofGetElapsedTimef() * 10;
//    ofRotateDeg(angle);
//    int petals = 15;
//    for (int i = 0; i<petals; i++) {
//        ofRotateDeg(360.0 / petals);
//
//        ofPoint p1 (0, 20);
//        ofPoint p2 (80, 0);
//        ofDrawTriangle(p1, -p1, p2);
//    }
//
//    ofPopMatrix();
    float time = ofGetElapsedTimef();
    
    float value = sin(time * M_TWO_PI * 2);
    
    float v = ofMap(value, -1, 1, 0, 255);
    
    ofBackground(v, v, v);
  

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
