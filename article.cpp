#ifndef UNTITLED1_ARTICLE_H
#define UNTITLED1_ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"
class Article{
    private:
      std:: string title;
      Author author;
      int publicationYear;
      std:: string journal;
    public:
      Article()
      : title(""),author(Author()),publicationYear(0),journal(""){};
      Article(std::string articleTitle, Author articleAuthor,int year,std::string journalName)
      :title(articleTitle), author(articleAuthor), publicationYear(year),journal(journalName){};
      Article(Article &other)
      :title(other.title),author(other.author),publicationYear(other.publicationYear),journal(other.journal){};
   std::string getJournal(){
    return journal;
   };
Author getAuthor(){
    return author;
  };
  std::string getTitle(){
    return title;
  };
int getPublicationYear(){
    return publicationYear;
};
void displayInfo(){
    std::cout<<"skibidi mostek";
};
};
#endif