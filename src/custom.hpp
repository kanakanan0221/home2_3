//
//  custom.hpp
//  home2_2
//
//  Created by kanako on 2016/02/19.
//
//
#ifndef custom_hpp

#define custom_hpp



#include "ofMain.h"



class custom{
    
public:
    
    void init();
    
    void update();
    
    void draw();
    
    
    
    
    
    
private:
    
    
    
    ofSoundPlayer soundplayer;
    
    
    
    ofColor setcolor;
    
    ofSpherePrimitive msphere;

    
    
    
    int size_ciecle = 0;
    
    
    
    float *volume;
    
    
    
};

#endif /* custom_hpp */

