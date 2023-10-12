#include "musicalbum.h"

MusicAlbum::MusicAlbum(): composer("X"), title("X"), cost(0.0), rating(0)
{
}

MusicAlbum::MusicAlbum(QString composer, QString title, double cost, int rating): composer(composer), title(title), cost(cost), rating(rating)
{
}

QString MusicAlbum::getComposer() const
{
    return composer;
}

QString MusicAlbum::getTitle() const
{
    return title;
}

double MusicAlbum::getCost() const
{
    return cost;
}

int MusicAlbum::getRating() const
{
    return rating;
}

void MusicAlbum::setComposer(QString composer)
{
    this->composer = composer;
}

void MusicAlbum::setTitle(QString title)
{
    this->title = title;
}

void MusicAlbum::setCost(double cost)
{
    this->cost = cost;
}

void MusicAlbum::setRating(int rating)
{
    this->rating = rating;
}
