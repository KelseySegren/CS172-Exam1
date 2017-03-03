//I affirm that all code given below was written solely by me, Kelsey Segren, and that any help I received 
//adhered to the rules stated for this exam.

#ifndef PLAYLIST_H_
#define PLAYLIST_H_
#include "Song.h"

class Playlist
{
private:
	string Name;
	const int MAX_SONGS = 9;
	int numSongs; 
	Song songs[9];

public: 
	// constructor for the playlist
	Playlist(string name) {
		Name = name;
	}

	// get the name of the Playlist
	string getName();
	

	// returns true when at least one song of 
	// this genre is present.
	bool hasGenre(string genre);

	

	// Add a new song
	void addSong(Song song); 	
	

	// How many songs in this playlist?
	int numberOfSongs(); 
	

	// Play a song.  return an empty string if there is no such song.
	string playSong(int songNumber); 
	

};

#endif