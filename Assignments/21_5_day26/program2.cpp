//Create a class Movie with members : title, genre, rating(out of 10).
//Write functions to accept movie details 
//and another function to print "Hit", "Average", or "Flop" based on the rating.

#pragma once 
#include <iostream>
#include "movieDetails.h"
using namespace std;

void program2()
{
	movieDetails m1;
	string title; 
	string genre; 
	int rating = 0; 

	cout << "Enter the movie name : ";
	cin >> title;
	cout << "Enter the genre : ";
	cin >> genre;
	cout << "Enter the rating : ";
	cin >> rating;

	m1.setDetails( title , genre , rating );

	m1.printSuccessStatus();

	m1.getTitle();// to  get title 
	m1.getGenre();	// to set genre 
	m1.getRating();	// to get rating

	cout << "Enter the movie name : ";
	cin >> title;
	 m1.updateTitle( title);

	cout << "Enter the genre : ";
	cin >> genre;
	 m1.updateGenre( genre);

	cout << "Enter the rating : ";
	cin >> rating;
	 m1.updateRating( rating);

	m1.getTitle();
	m1.getGenre();
	m1.getRating();

	m1.printSuccessStatus();
}
