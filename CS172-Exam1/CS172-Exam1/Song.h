//I affirm that all code given below was written solely by me, Kelsey Segren, and that any help I received 
//adhered to the rules stated for this exam.

#include <string>
#include <iostream>
#include "Playlist.h"
#ifndef SONG_H_
#define SONG_H_

using namespace std;

class Song {
private:
	string Title;
	string Artist;
	string Genre;

public: 
	// default song
	Song() {
	}
	
	//constructor for title, artist, genre
	Song(string title, string artist, string genre) {
		Title = title;
		Artist = artist;
		Genre = genre;
	}

	const string getTitle();  // return the song title
	
	const string getArtist(); // return the artist who performed the song
	
	const string getGenre();  // return the genre of the song

	 // return true if the song is of the genre.
	 // valid genres are "ModernPop", "Grunge", "Classical" and "Americana".
	bool isOfGenre(string genre);

};

#endif