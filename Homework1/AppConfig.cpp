/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "Homework1App.h"

poObject *createObjectForID(uint uid) {
	return new Homework1App();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "Homework1", 100, 100, 1024, 768);
}

void cleanupApplication() {
}