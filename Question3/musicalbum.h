#ifndef MUSICALBUM_H
#define MUSICALBUM_H
#include <QString>

class MusicAlbum

{
public:

    MusicAlbum();
    MusicAlbum(QString composer, QString title, double cost, int rating);

    QString getComposer() const;
    QString getTitle() const;
    double getCost() const;
    int getRating() const;

    void setComposer(QString composer);
    void setTitle(QString title);
    void setCost(double cost);
    void setRating(int rating);

private:

    QString composer;
    QString title;
    double cost;
    int rating;

};

#endif // MUSICALBUM_H
