/*	Created by Mark Kleback on 1/26/12.
 *	Copyright 2012 MetLife. All rights reserved.
 */

#include "Homework1App.h"
#include "poApplication.h"
#include "poCamera.h"
#include "poSimpleDrawing.h"

using namespace po;
using namespace std;


// APP CONSTRUCTOR. Create all objects here.
Homework1App::Homework1App() {
	addModifier(new poCamera2D(poColor::black));
    
    lastKeyDown = '1';
    mouseX = 0;
    mouseY = 0;
    
    redsquarex=0;
    redsquarey=0;
    
 addEvent(PO_KEY_DOWN_EVENT, this);
    addEvent(PO_MOUSE_MOVE_EVENT, this);
    addEvent(PO_KEY_UP_EVENT, this);
}
    
 
// APP DESTRUCTOR. Delete all objects here.
Homework1App::~Homework1App() {
}

// UPDATE. Called once per frame. Animate objects here.
void Homework1App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void Homework1App::draw() {
    
    if( lastKeyDown == '1')
        drawGrid1();
    
    if(lastKeyDown == '2')
        drawGrid2();
    
    if(lastKeyDown == '3')
        drawGrid3();
	
    else
        drawGrid2();
    
}

void Homework1App::drawGrid1()
{
    
    
    for (int w=0; w<=50; w++) {
        
        for(int h=0; h<=50; h++){
            
            setColor(poColor::white);
            drawFilledRect(w*30,h*30,10,10);
            
            
            
            
        }
        
    }

    
    
}

void Homework1App::drawGrid2()
{
    
    for (int i=0; i<=50; i++) {
        
        for(int j=0; j<=50; j++){
            
            int w = i*30;
            int h = j*30;
            
            
            setColor(poColor::white);
            drawFilledRect(w,h,10,10);
            
            
            
            
            if(mouseX > w && mouseX < w+10 && mouseY > h && mouseY < h+10)
                setColor(poColor::red);
            drawFilledRect(w,h,10,10);
            
            
        }
        
    }
    
    
    
    if(lastKeyDown == 'w')
        redsquarey = redsquarey - 30;
    if(lastKeyDown == 's')
        redsquarey = redsquarey +30;
    if(lastKeyDown == 'a')
        redsquarex = redsquarex-30;
    if(lastKeyDown == 'd')
        redsquarex = redsquarex+30;

    
    setColor(poColor::red);
    drawFilledRect(redsquarex,redsquarey,10,10);
    
   
  
    
}

void Homework1App::drawGrid3()
{
    
    for (int w1=0; w1<=50; w1++) {
        
        for(int h1=0; h1<=50; h1++){
            
            setColor(poColor::white);
            drawFilledRect(w1*20,h1*20,10,10);
            
            
            
            
        }
        
    }
    
    for (int w2=0; w2<=50; w2++) {
        
        for(int h2=0; h2<=50; h2++){
            
            setColor(poColor::red);
            drawFilledRect(w2*20+10,h2*20,10,10);
            
            
            
            
        }
        
    }
    
    
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Homework1App::eventHandler(poEvent *event) {
    
    if(event->type == PO_KEY_DOWN_EVENT) {	
    
        lastKeyDown = event->keyChar;
   

        
    
    }
    
    if(event->type == PO_KEY_UP_EVENT){
        
        lastKeyDown = 2;
        
    }
    
    if (event->type == PO_MOUSE_MOVE_EVENT )
    {
        
        mouseX = event->globalPosition.x;
        mouseY = event->globalPosition.y;
        
    }
     
    
            
    
    

	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void Homework1App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
