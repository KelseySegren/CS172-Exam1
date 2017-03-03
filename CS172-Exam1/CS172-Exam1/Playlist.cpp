//I affirm that all code given below was written solely by me, Kelsey Segren, and that any help I received 
//adhered to the rules stated for this exam.

#include "Playlist.h"

//getName() function
string Playlist::getName() {
	return Name;
}

//hasGenre function
bool Playlist::hasGenre(string genre) {
	if (genre == "ModernPop" || "Grunge" || "Classical" || "Americana")
		return true;
}

//function that adds a song when songs is less than 9 
void Playlist::addSong(Song song)
{
	if (numSongs < MAX_SONGS) {
		songs[numSongs];
		++numSongs;
	}
}

//number of songs function
int Playlist::numberOfSongs(){
	numSongs = 9;
	return numSongs;
}

//return empty string if no such song
string Playlist::playSong(int songNumber) {
	return " ";
}
