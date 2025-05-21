#include <iostream>
#include "movieDetails.h"

using namespace std;
void movieDetails::setDetails(string title, string genre, int rating)
{
	m_title = title;
	m_genre = genre;

	// rating cant be low then 0 . so if someone try to give below then 0 , treat it like 0
	// rating cant be more then 10 , so if try to give more then 10 , treat it like 10 

	if (rating > 10)
		m_rating = 10;
	else if (rating < 0)
		m_rating = 0;
	else
		m_rating = rating;
}

void movieDetails::updateRating(int rating)
{
	// rating cant be low then 0 . so if someone try to give below then 0 , treat it like 0
	// rating cant be more then 10 , so if try to give more then 10 , treat it like 10 
	if (rating > 10)
		m_rating = 10;
	else if (rating < 0)
		m_rating = 0;
	else
		m_rating = rating;
}

void movieDetails::updateTitle(string title)
{
	this->m_title = title;
}

void movieDetails::updateGenre( string genre )
{
	this->m_genre = genre ;
}

string movieDetails::getTitle( )
{
	return m_title ;
}

string movieDetails::getGenre( )
{
	return m_genre;
}

int movieDetails::getRating( )
{
	return m_rating ;
}


void movieDetails::printSuccessStatus  ()const 
{
	if ( m_rating < 5)
		cout << "Flop\n";
	else if( m_rating < 7)
		cout << "Average\n";
	else
		cout << "Hit\n";

}