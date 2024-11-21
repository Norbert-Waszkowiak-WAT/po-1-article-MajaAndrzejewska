#ifndef UNTITLED1_ARTICLE_H
#define UNTITLED1_ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"
using namespace std;

class Article{
private:
    string title;
    Author author;
    string journal;
    int publicationYear;
public:
    Article()
    :title(""),author(Author()),publicationYear(0),journal(""){};

    Article(string articleTitle, Author articleAuthor, int publicationYear, string journalName)
    :title(articleTitle), author(articleAuthor), publicationYear(publicationYear), journal(journalName){};

    Article(Article &other)
    :title(other.title), author(other.author),publicationYear(other.publicationYear), journal(other.journal){};

    string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getPublicationYear(){
        return publicationYear;
    }
    string getJournal(){
        return journal;
    }
    void displayInfo(){
        cout<<"skibiditoaleta";
    }
};
#endif
