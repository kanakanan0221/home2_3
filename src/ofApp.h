#pragma once



#include "ofMain.h"



#include <vector>

#include"custom.hpp"





class ofApp : public ofBaseApp{
    
    
    
private:
    
    
    
    //    ofSoundPlayer soundplayer;
    
    
    
    //    ofColor setcolor;
    
    
    
    
    
    //    int size_ciecle = 0;
    
    
    
    //    float *volume;
    
    
    
    vector<custom> cusVecter;
    
    
    
    
    
public:
    
    void setup();
    
    void update();
    
    void draw();
    
    
    
    void keyPressed(int key);
    
    void keyReleased(int key);
    
    void mouseMoved(int x, int y );
    
    void mouseDragged(int x, int y, int button);
    
    void mousePressed(int x, int y, int button);
    
    void mouseReleased(int x, int y, int button);
    
    void windowResized(int w, int h);
    
    void dragEvent(ofDragInfo dragInfo);
    
    void gotMessage(ofMessage msg);
    
    
    
    
    
    ofEasyCam easyCam;
    
    
    
    // ofSpherePrimitive msphere;
    
    
    
    
    
    
    
    
    
};

