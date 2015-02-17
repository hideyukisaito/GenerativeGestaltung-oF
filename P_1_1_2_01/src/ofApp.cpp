#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetWindowShape(800, 800);
    
    mSegmentCount = 360;
    mRadius = 300;
}

//--------------------------------------------------------------
void ofApp::update()
{
    float angleStep = 360 / mSegmentCount;
    
    int w = ofGetWidth();
    int h = ofGetHeight();
    
    mMesh.clear();
    mMesh.setMode(OF_PRIMITIVE_TRIANGLE_FAN);
    
    for (float angle = 0; angle <= 360; angle += angleStep) {
        float vx = w / 2 + cos(ofDegToRad(angle)) * mRadius;
        float vy = h / 2 + sin(ofDegToRad(angle)) * mRadius;
        mMesh.addVertex(ofVec3f(vx, vy, 0));
        mMesh.addColor(ofFloatColor(angle / 360, ofMap(ofGetMouseX(), 0, w, 0, 1.0), ofMap(ofGetMouseY(), 0, h, 0, 1.0)));
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(255);
    
    mMesh.draw();
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
