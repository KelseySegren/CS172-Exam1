//I affirm that all code given below was written solely by me, Kelsey Segren, and that any help I received 
//adhered to the rules stated for this exam.

#include "Song.h"

//returns title of song
const string Song::getTitle() {
	return Title;
}
//returns artist of song
const string Song::getArtist() {
	return Artist;
}
//returns genre of song
const string Song::getGenre() {
	return Genre;
}
//song can be these four genres
bool Song::isOfGenre(string genre) {
	if (Genre == "ModernPop" || "Grunge" || "Classical" || "Americana")
		return true;
}



