/* 
 * File:   main.cpp
 * Author: Alexis Naranjo
 * Created on November 1, 2018, 11:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getColr();
string getCard();
string getCard(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number function
    srand(static)
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for(int i=1;i<=10;i++){
        cout<<getColr()<<endl;
    }
    
    //Test card shuffle
    string card1,card2,card3,card4,card5;
    card1=getCard(rand()%52+1);
    do(
        card2=getCard(rand()%52+1);
       )while(card1==card2);
       do(
        card3=getCard(rand()%52+1);
       )while(card1==card3 || card2==card3);
       do(
        card4=getCard(rand()%52+1);
       )while(card1==card4 || card2==card4 || card3==card4);
 
    //Exit
    return 0;
}

string getcard(){
    //Declare variables
    fstream in;
    string card;
    int nLines;
    //Initialize variables
    in.open("card.dat");
    nLines=rand()%52+1;//Possible 8 colors in the file
    //Look through file to find the random color
    for(int line=1;line<=n;line++){
        in>>card;
                 }
    //Close file
    int.close();
    //Return
    return card;

string getcard(){
    //Declare variables
    fstream in;
    string card;
    int nLines;
    //Initialize variables
    in.open("card.dat");
    nLines=rand()%52+1;//Possible 8 colors in the file
    //Look through file to find the random color
    for(int line=1;line<=n;line++){
        in>>card;
                 }
    //Close file
    int.close();
    //Return
    return card;

string getColr(){
    //Declare variables
    fstream in;
    string card;
    int nLines;
    //Initialize variables
    in.open("color.dat");
    nLines=rand()%8+1;//Possible 8 colors in the file
    //Look through file to find the random color
    for(int line=1;line<=n;line++){
        in>>color;
                 }
    //Close file
    int.close();
    //Return
    return color;

}

