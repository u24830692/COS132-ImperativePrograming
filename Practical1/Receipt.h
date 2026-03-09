#ifndef RECEIPT_H
#define RECEIPT_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

#include "InputOutput.h"

// Provided helper function -- do not modify
// Returns the index of the nth occurrence of character c in string s, or -1 if not found
inline int findOccurance(std::string s, char c, int n)
{
    int occ = 0;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (s[i] == c)
        {
            occ++;
            if (occ == n)
            {
                return i;
            }
        }
    }
    return -1;
}

std::string extractArtistName(std::string receipt);
std::string extractSongTitle(std::string receipt);
std::string extractAlbumName(std::string receipt);
std::string extractPlayCount(std::string receipt);
std::string extractSongDuration(std::string receipt);
std::string extractGenre(std::string receipt);

std::string formReceipt(std::string artistName, std::string songTitle,
                        std::string albumName, std::string playCount,
                        std::string songDuration, std::string genre);

void prettyPrint(std::string receipt);
void summaryPrint(std::string receipt);

#endif /*RECEIPT_H*/
