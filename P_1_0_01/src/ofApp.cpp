#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetWindowShape(720, 720);
    ofHideCursor();
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofColor color;
    
    color.setHsb(ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 255), 255, 255);
    ofBackground(color);
    
    color.setHsb(255 - ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 255), 255, 255);
    ofFill();
    ofSetColor(color);
    
    float w = ofGetMouseX() + 1;
    ofRect(ofGetWidth() / 2, ofGetHeight() / 2, w, w);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{

}
