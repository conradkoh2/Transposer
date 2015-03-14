#ifndef SONGLIST_H
#define SONGLIST_H
#include "Song.h"
#include <sstream>
#include <vector>

using namespace std;

class Songlist
{
public:

	string FILENAME;
	int songCount;
	vector<string> filenames;
	vector<Song*> songs;
	static const string songListDIR;

	Songlist();
	Songlist(string FILENAME_ALL_SONG_FILENAMES);
	~Songlist();
	void loadAll();
	bool FileExists(string filename);
	void addSong();
	string ToString();
	string ChordsToString(int index);
	string SongToString(int index);
	void transpose(int index, string startkey, string endkey);
	void saveSong(int index, string filename);
	Song::KEY stringToKEY(string input);
};

#endif