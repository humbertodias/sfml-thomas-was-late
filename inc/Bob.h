#ifndef BOB_H
#define BOB_H
#include "PlayableCharacter.h" 

class Bob : public PlayableCharacter
{
public:
	// A constructor specific to Bob 
	Bob();

	// The overriden input handler for Bob 
	bool virtual handleInput();

};

#endif