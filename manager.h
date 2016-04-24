#pragma once

#include "config.h"

//The main work is done in this class
//It process the commands from the client
//and controls the execution of the music
class Manager {
public:
	//Create/destroy pipes for the client-server comunication
	Manager();
	~Manager();

	//Start the main loop
	void StartServer();
private:
	//Music music;
	//MusicList list;
	//Database db;
	Config conf;
};