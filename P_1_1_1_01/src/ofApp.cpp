#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetWindowShape(800, 400);
    ofSetBackgroundAuto(true);
    ofBackground(0);
    
    mStepX = 1;
    mStepY = 1;
}

//--------------------------------------------------------------
void ofApp::update()
{
    
}

//--------------------------------------------------------------
void ofApp::draw()
{
    int w = ofGetWidth();
    int h = ofGetHeight();
    
    ofFill();
    
    for (int gridY = 0; gridY < h; gridY += mStepY) {
        for (int gridX = 0; gridX < w; gridX += mStepX) {
            ofColor color;
            color.setHsb(ofMap(gridX, 0, w, 0, 255), h - gridY, 255);
            ofSetColor(color);
            ofRect(gridX, gridY, mStepX, mStepY);
        }
    }
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
    mStepX = max(x + 2, 1);
    mStepY = max(y + 2, 1);
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
