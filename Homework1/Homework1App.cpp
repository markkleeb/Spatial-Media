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
    
   else if(lastKeyDown == '2' || lastKeyDown == 'a' || lastKeyDown == 'w' || lastKeyDown == 's' || lastKeyDown == 'd')
        drawGrid2();
    
    else if(lastKeyDown == '3')
        drawGrid3();
	
   
    
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
    
    poTextBox* A = new poTextBox(200, 120);				// Specify the width and height of the text box (optional)
	A->setText('X: %i Y: %i', mouseX, mouseY);		// Set the text
	A->setFont( poGetFont("Helvetica", "Regular") );	// Set the font, always
    // You can create a new poFont by calling poGetFont("FontFamilyName", "FontStyle")
    // Make sure the font is installed in your machine
	A->setTextSize(18);									// Set the text size
	A->textColor = poColor::black;						// Set the text color
	A->doLayout();										// Always call doLayout() after you make any change
	A->drawBounds = true;								// Show the bounds of the text box
	A->position.set(300, 20, 0);
	addChild( A );

    
    
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
    
    for (int w=0; w<=100; w++) {
        
        for(int h=0; h<=100; h++){
            
            drawFilledRect(w*10,h*10,10,10);
            
            if((w +h)%2 ==0){
                
                setColor(poColor::white);
            }
            
            else
                setColor(poColor::red);
            
            
            
        }
        
    }
    
       
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Homework1App::eventHandler(poEvent *event) {
    
    if(event->type == PO_KEY_DOWN_EVENT) {	
    
        lastKeyDown = event->keyChar;
   

        
    
    }
    
    if(event->type == PO_KEY_UP_EVENT){
        
     
        
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
