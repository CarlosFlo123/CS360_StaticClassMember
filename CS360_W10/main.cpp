/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: carlos
 *
 * Created on December 15, 2019, 4:59 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Document {
public:
    virtual void display() const = 0;
    static int nDocs;
    static string arr[10];
    Document(){
        nDocs += 1;
    }
    static int getNDocs(){
        return nDocs;
    }
    static string* getArr(){
        return arr;
    }
};
int Document::nDocs = 0;

class Report : public Document {
private:
    string name;
public:
    Report(string n) : name(n) {
    }
    void display() const {
        cout << name << endl;
    }
};

int main() {
    Report r("test");
    r.display();
    Document *p = &r;
    p->display();
    Report b("hell");
    cout<<"N documents: " << Document::getNDocs();
    return 0;
}
