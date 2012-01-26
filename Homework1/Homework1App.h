/*	Created by Mark Kleback on 1/26/12.
 *	Copyright 2012 MetLife. All rights reserved.
 */

#include "poObject.h"

class Homework1App : public poObject {
public:
	Homework1App();
	virtual ~Homework1App();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};

