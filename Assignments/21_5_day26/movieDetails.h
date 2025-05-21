//Create a class Movie with members : title, genre, rating(out of 10).
//Write functions to accept movie details 
//and another function to print "Hit", "Average", or "Flop" based on the rating.

#pragma once 
#include <iostream>

using namespace std;
class movieDetails
{
	string m_title;
	string m_genre;
	int m_rating;

public:
	void setDetails(string title, string genre, int rating);
	void updateTitle(string title);
	void updateGenre(string genre);
	void updateRating(int rating);
	string getTitle( );
	string getGenre( );
	int getRating( );
	void printSuccessStatus()const ;

};


