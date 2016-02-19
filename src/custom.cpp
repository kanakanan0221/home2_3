//
//  custom.cpp
//  home2_2
//
//  Created by kanako on 2016/02/19.
//
//

#include "custom.hpp"

void custom::init(){
    
    
    
    
    
    soundplayer.loadSound("Perfume_globalsite_sound.wav");
    
    
    
    soundplayer.setLoop(true);
    
    
    
    soundplayer.setVolume(1.0);
    
    
    
    soundplayer.play();
    
    
    
    msphere.setPosition(200, 200, 0);
    
    
    
}



//--------------------------------------------------------------





void custom::update(){
    
    
    
    volume = ofSoundGetSpectrum(1);
    
    
    
    size_ciecle= volume[0]*1300;
    
    
    
}

//--------------------------------------------------------------

void custom::draw(){
    
    
    
    
    
    
    
    ofSetColor
    
    (ofColor::fromHsb(volume[0]*400,255,255));
    
    cout << volume[0]<<endl;
    
    
    
    
    
    msphere.setRadius(size_ciecle);
    
    
    
    msphere.drawWireframe();
    
    
    
    
    
    
    
}

