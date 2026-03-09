#ifndef SPOTIFY_INTERFACE_H
#define SPOTIFY_INTERFACE_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

#include "InputOutput.h"
#include "Receipt.h"

extern std::string artistRequest;
extern std::string songRequest;
extern std::string albumRequest;
extern std::string playCountRequest;
extern std::string durationRequest;
extern std::string genreRequest;

std::string askUserForArtistName();
std::string askUserForSongTitle();
std::string askUserForAlbumName();
std::string askUserForPlayCount();
std::string askUserForSongDuration();
std::string askUserForGenre();

std::string formReceiptFromUserInput();

#endif /*SPOTIFY_INTERFACE_H*/
