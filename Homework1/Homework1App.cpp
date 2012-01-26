/*	Created by Mark Kleback on 1/26/12.
 *	Copyright 2012 MetLife. All rights reserved.
 */

#include "Homework1App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
Homework1App::Homework1App() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
Homework1App::~Homework1App() {
}

// UPDATE. Called once per frame. Animate objects here.
void Homework1App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void Homework1App::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Homework1App::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void Homework1App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
