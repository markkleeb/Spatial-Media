/*	Created by Mark Kleback on 1/26/12.
 *	Copyright 2012 Kleebtronics. All rights reserved.
 */

#include "poObject.h"
#include "poShapeBasics2D.h"
#include <iostream>
#include "poSimpleDrawing.h"
#include "poTextBox.h"

class Homework1App : public poObject {
public:
	Homework1App();
	virtual ~Homework1App();
	
    virtual void update();
    
    virtual void draw();
    
    void drawGrid1();
    void drawGrid2();
    void drawGrid3();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());

    
    int mouseX, mouseY;
    char lastKeyDown;
    
    int redsquarex;
    int redsquarey;
    
};

