#ifndef THOMAS_H
#define THOMAS_H
#include "PlayableCharacter.h" 

class Thomas : public PlayableCharacter
{
public:
	// A constructor specific to Thomas 
	Thomas();

	// The overridden input handler for Thomas 
	bool virtual handleInput();

};

#endif
