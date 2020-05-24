#ifndef BOOKS_H
#define BOOKS_H
#include <QString>
#include <QVector>
#include <QLabel>
#include <QPixmap>
#include <iostream>


class Book
{
public:

    virtual int GetPrice() = 0;
    virtual QString GetTitle() = 0;
    virtual QString GetInfo() = 0;
};

class The_Bun: public Book{
    int price = 75;
    QString title = "The Bun";
    QString author = "folklore";
    int year = 2016;
    QString publish = "Conform Style";
    QString age = "3-8";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};

class Red_Hood: public Book{
    int price = 90;
    QString title = "Little Red Riding Hood";
    QString author = "Charles Perrault";
    int year = 2016;
    QString publish = "Talent";
    QString age = "2-8";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};

class White_snow: public Book{
    int price = 22;
    QString title = "Snow White and the Seven Dwarfs";
    QString author = "Brothers Grimm";
    int year = 2015;
    QString publish = "Ariy";
    QString age = "any age";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};


class Math_Book: public Book{
    int price = 700;
    QString title = "The Math Book";
    QString author = "Clifford A. Pickover";
    int year = 2009;
    QString publish = "Dover Publications";
    QString object = "Maths";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};



class History_of_Time: public Book{
    int price = 360;
    QString title = "A Brief History of Time ";
    QString author = "Stephen William Hawking";
    int year = 2011;
    QString publish = "Bantam Press";
    QString object = "Cosmology";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};



class Physics_Impossible: public Book{
    int price = 309;
    QString title = "Physics of the Impossible";
    QString author = "Michio Kaku";
    int year = 2009;
    QString publish = "Anchor";
    QString object = "Physics";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};



class Sherlock_Holmes: public Book{
    int price = 285;
    QString title = "The Adventures of Sherlock Holmes";
    QString author = "Arthur Conan Doyle";
    int year = 2009;
    QString publish = "Dover Publications";
    QString genre = "detective fiction short stories";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};


class Fault_Stars: public Book{
    int price = 315;
    QString title = "The Fault in Our Stars";
    QString author = "John Green";
    int year = 2012;
    QString publish = "Penguin Books";
    QString genre = "young adult novel, realistic fiction";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};




class Harry_Potter: public Book{
    int price = 300;
    QString title = "Harry Potter and the Philosopher's Stone";
    QString author = "Joanne Rowling";
    int year = 2014;
    QString publish = "Bloomsbury Children's";
    QString genre = "fantasy";

public:
    int GetPrice()override;
    QString GetTitle()override;
    QString GetInfo()override;

};


#endif // BOOKS_H
