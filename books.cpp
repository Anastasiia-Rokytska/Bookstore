#include "books.h"
#include <QString>
#include <QApplication>



QString The_Bun::GetTitle(){
    return title;}

int The_Bun::GetPrice(){
    return price;}

QString The_Bun::GetInfo(){
    return "Age of a chid: " + age
        + "\nAuthor: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice:  " + QVariant(price).toString() + " ₴";}



QString Red_Hood::GetTitle(){
    return title;}

int Red_Hood::GetPrice(){
    return price;}

QString Red_Hood::GetInfo(){
    return "Age of a chid: " + age
        + "\nAuthor: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice:  " + QVariant(price).toString() + " ₴";}


QString White_snow::GetTitle(){
    return title;}

int White_snow::GetPrice(){
    return price;}

QString White_snow::GetInfo(){
    return "Age of a chid: " + age
        + "\nAuthor: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice:  " + QVariant(price).toString() + " ₴";}


QString Math_Book::GetTitle(){
    return title;}

int Math_Book::GetPrice(){
    return price;}

QString Math_Book::GetInfo(){
    return "Author: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nObject: " + object
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice: " + QVariant(price).toString() + " ₴";}



QString Physics_Impossible::GetTitle(){
    return title;}

int Physics_Impossible::GetPrice(){
    return price;}

QString Physics_Impossible::GetInfo(){
    return "Author: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nObject: " + object
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice: " + QVariant(price).toString() + " ₴";}



QString History_of_Time::GetTitle(){
    return title;}

int History_of_Time::GetPrice(){
    return price;}

QString History_of_Time::GetInfo(){
    return "Author: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nObject: " + object
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice: " + QVariant(price).toString() + " ₴";}



QString Sherlock_Holmes::GetTitle(){
    return title;}

int Sherlock_Holmes::GetPrice(){
    return price;}

QString Sherlock_Holmes::GetInfo(){
    return "Author: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nGenre: " + genre
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice: " + QVariant(price).toString() + " ₴";}



QString Fault_Stars::GetTitle(){
    return title;}

int Fault_Stars::GetPrice(){
    return price;}

QString Fault_Stars::GetInfo(){
    return "Author: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nGenre: " + genre
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice: " + QVariant(price).toString() + " ₴";}


QString Harry_Potter::GetTitle(){
    return title;}

int Harry_Potter::GetPrice(){
    return price;}

QString Harry_Potter::GetInfo(){
    return "Author: " + author
        + "\nTitle of the book: " + "\"" + title + "\""
        + "\nGenre: " + genre
        + "\nYear of publishing: " + QVariant(year).toString()
        + "\nPublish house: " + publish
        + "\nPrice: " + QVariant(price).toString() + " ₴";}
