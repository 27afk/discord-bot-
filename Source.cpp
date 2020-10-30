/*
// Discord Bot!!!: OwO bot  V 0.0.1
//
//this is the better version of 
// the OwO bot in discord
//
// Your allowed to copyright, and do whatever u want with this code, but no bad stuff
// I have the discord OwO hack function unfinished, so you can change it, and for the rest of the information, you can get it fromt eh notes
*/
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>

#define COMMANDSIZE 20
using namespace std;
typedef struct {
	char func_2[COMMANDSIZE] = "!help";//Gives you a list of functions
	char func_3[COMMANDSIZE] = "On";//turns OwO bot on
	char func_4[COMMANDSIZE] = "return";//turns OwO bot off
	char func_6[COMMANDSIZE] = "fight";//makes u go to war
	char func_7[COMMANDSIZE] = "chest";// claims, and opens chest
	char func_8[COMMANDSIZE] = "chat";//Opens chat bot// do it write it two times and your chat bot is OFF
	char func_9[COMMANDSIZE] = "mute"; // Will instantly exit your owo bot, and will end the program
	char func_10[COMMANDSIZE] = "+/-*"; // Will put owo on calculator mode
	char func_11[COMMANDSIZE] = "WORDS"; // Will put owo on word suggestion mode
	char func_12[COMMANDSIZE] = "HACK"; // this function is still in its early stages, so it doesn't work
	int pause_time;
	bool is_open = false;
	int default_pause = 2;
}function_t;
void func() {
	cout << "!help;//Gives you a list of functions\n  //turns OwO bot on\n //turns OwO bot off \n //makes u go to war \n // claims, and opens chest\n /Opens chat bot// do it write it two times and your chat bot is OFF\n Will instantly exit your owo bot, and will end the program \n // Will put owo on calculator mode\n // Will put owo on word suggestion mode\n // this function is still in its early stages, so it doesn't work \n";
}
int string_compare(char *comman, function_t command) {
	if (comman[0] == command.func_2[0] ) {
		return 1;
	}
	else if (comman[0] == command.func_3[0]) {
		return 2;
	}
	else if ( comman[0] == command.func_4[0]) {
		return 3;
	}
	else if (comman[0] == command.func_6[0]) {
		return 4;
	}
	return 0;
}
int is_command( char *command) {
	return 0;
}
void Pause( function_t command ) {
	chrono::seconds dura(command.default_pause);
	this_thread::sleep_for(dura);
}
void exit() {
	exit(1);
}

void bot_function_( function_t command ){
	char comman[COMMANDSIZE];
	int is_not;
	cout << " COMMAND SIRE";
	cin >> comman;
	cout << comman;
	is_not = string_compare( comman, command);
	if (is_not == 1) {
		cout << " Help list of functions loading\n";
		Pause(command);
		cout << "90%\n";
		Pause(command);
		cout << "100%\n";
		cout << " printing...";
		cout << " Pls sponsors\n";
		Pause(command);
		func();
	}
	else if (is_not == 2) {
		cout << "OwO bot opening";
		Pause(command);
		cout << "OwO bot opened";
		command.is_open = true;
	}
	else if (is_not == 3) {
		cout << "OwO bot closing";
		Pause(command);
		cout << "OwO bot closed";
		exit();
	}
	else if (is_not == 4) {
		cout << " My King goes to War\n";
		Pause(command);
		cout << " And he wins! No wait he loses, no he wins!";
	}
	else if (is_not == 5) {

	}
	else {
		cout << "say that again, I didn't understand,it will either be an error or the owo bot is not On\n";
	}
}
int main() {
	function_t command;
	// makes the bot go forever until u wish to exit
	for (;;) {
		bot_function_( command);
	} 
}