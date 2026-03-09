#include "Receipt.h"

using namespace std;

std::string extractArtistName(std::string receipt)
{
    int pipePos = findOccurance (receipt, '|', 1);

    return receipt.substr(0, pipePos);
}

std::string extractSongTitle(std::string receipt)
{
    int firstPipe = findOccurance(receipt, '|', 1);
    int secondPipe = findOccurance (receipt, '|', 2);

    return receipt.substr(firstPipe + 1,  secondPipe - firstPipe -1);
}

std::string extractAlbumName(std::string receipt)
{
    int secondPipe = findOccurance (receipt, '|', 2);
    int thirdPipe = findOccurance (receipt, '|', 3);

    return receipt.substr(secondPipe +1, thirdPipe - secondPipe - 1);
}

std::string extractPlayCount(std::string receipt)
{
    int thirdPipe = findOccurance (receipt, '|', 3);
    int fourthPipe = findOccurance (receipt, '|', 4);

    return receipt.substr(thirdPipe + 1, fourthPipe - thirdPipe - 1);
}

std::string extractSongDuration(std::string receipt)
{
    int fourthPipe = findOccurance(receipt, '|', 4);
    int fifthPipe = findOccurance (receipt, '|', 5);

    return receipt.substr(fourthPipe + 1, fifthPipe - fourthPipe -1);
}

std::string extractGenre(std::string receipt)
{
    int fifthPipe = findOccurance (receipt, '|', 5);

    return receipt.substr(fifthPipe + 1);
}

std::string formReceipt(std::string artistName, std::string songTitle,
                        std::string albumName, std::string playCount,
                        std::string songDuration, std::string genre)
{
    return artistName + '|' + songTitle + '|' + albumName + '|' + playCount + '|' + songDuration + '|' + genre;
}

void prettyPrint(std::string receipt)
{
    std::string artistName = extractArtistName (receipt);
    std::string songTitle = extractSongTitle (receipt);
    std::string albumName = extractAlbumName (receipt);
    std::string playCount = extractPlayCount (receipt);
    std::string songDuration = extractSongDuration (receipt);
    std::string genre = extractGenre (receipt);

    printOut("---- SPOTIFY RECEIPT ----");
    printOut("Artist       : " + artistName);
    printOut("Song         : " + songTitle);
    printOut("Album        : " + albumName);
    printOut("Play Count   : " + playCount);
    printOut("Duration (s) : " + songDuration);
    printOut("Genre        : " + genre);
    printOut("-------------------------"); 
}

void summaryPrint(std::string receipt)
{
    std::string songTitle = extractSongTitle (receipt);
    std::string artistName = extractArtistName (receipt);
    std::string playCount = extractPlayCount (receipt);

    printOut (songTitle + " by " + artistName + " - played " + playCount + " times");
}
