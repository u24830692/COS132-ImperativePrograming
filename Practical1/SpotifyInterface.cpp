#include "SpotifyInterface.h"

using namespace std;

std::string artistRequest    = "Please enter the artist name: ";
std::string songRequest      = "PLease enter the song title: ";
std::string albumRequest     = "Please enter the album name: ";
std::string playCountRequest = "Please enter the play count: ";
std::string durationRequest  = "Please enter the song duration in seconds: ";
std::string genreRequest     = "Please enter the genre: ";

std::string askUserForArtistName()
{

    return askForStringInput(artistRequest);
}

std::string askUserForSongTitle()
{

    return askForStringInput(songRequest);
}

std::string askUserForAlbumName()
{

    return askForStringInput(albumRequest);
}

std::string askUserForPlayCount()
{

    return askForStringInput(playCountRequest);
}

std::string askUserForSongDuration()
{

    return askForStringInput(durationRequest);
}

std::string askUserForGenre()
{

    return askForStringInput(genreRequest);
}

std::string formReceiptFromUserInput()
{
    std::string artist = askUserForArtistName();
    std::string song = askUserForSongTitle();
    std::string album = askUserForAlbumName();
    std::string playCount = askUserForPlayCount();
    std::string songDuration = askUserForSongDuration();
    std::string genre = askUserForGenre();

    return formReceipt(artist, song, album, playCount, songDuration, genre);
}
