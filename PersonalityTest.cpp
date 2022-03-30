/*
File Name: program1.cpp
    Author: Mohammed Alturki
    Date: September 20, 2020
    Purpose: : creating a personality test
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
// defining and initializing variables
int extrovert = 0; 
int introvert = 0;
int positivePerson = 0;
int negativePerson = 0;
int silly = 0;
int serious = 0;
int spontaneous = 0;
int planner = 0;
string horizontalLine(50,'-'); // to creat the dashes
char answ ='n';
char res;
do{                           // to create the play again command
    // initializing counter to 0, if the do command runs
    int extrovert = 0; 
    int introvert = 0;
    int positivePerson = 0;
    int negativePerson = 0;
    int silly = 0;
    int serious = 0;
    int spontaneous = 0;
    int planner = 0;

    cout << horizontalLine << endl; //--------------
    cout << setw(30) << "Personality Test" << endl;
    cout << horizontalLine << endl;

    cout << "Answer the following twelve questions to find out your personality traits" << endl;

    // prompts and get input
    cout << "\nCan you talk infront of an audience?" << endl;
    cout << "a. Totally."<< endl;
    cout << "b. No can do buddy" << endl;
    cout << "c. If the crowd was small, yes"<< endl;
    cin >> res;
    cout << "\n";
    while(res != 'a' && res != 'b' && res!= 'c'){ //!= means not equal to !
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;                              // letting the user insert a choice again
        cout << endl;
    }
    if (res == 'a'){// = means assignment == means are these the same
        extrovert = extrovert+1; // adding 1 to extrovert
    }
    else if (res =='b'){
        introvert = introvert+1; // adding 1 to introvert
    }
    else {
        introvert = introvert+1; // equalizing both variables
        extrovert = extrovert+1; 
    }

    cout << "When being in public do you avoid talking to people?" << endl;
    cout << "a. All the time" << endl;
    cout << "b. Often" << endl;
    cout << "c. Rarely" << endl;
    cout << "d. Never" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res!= 'c' && res != 'd'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a'){ 
        introvert = introvert+2; 
    }
    else if (res =='b'){
        introvert = introvert+1;
    }
    else if (res == 'c'){
        extrovert = extrovert+1;
    }
    else {
        extrovert = extrovert+2;
    }

    cout << "If I have done a major surgery, I would tell" << endl;
    cout << "a. my inner circle" << endl;
    cout << "b. no one" << endl;
    cout << "c. everyone I know" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res!= 'c'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        introvert = introvert+1; 
        extrovert = extrovert+1;
    }
    else if (res =='b'){
        introvert = introvert+2;
    }
    else {        
        extrovert = extrovert+2;
    }

    cout << "When I wake up I do not feel like doing anything" << endl;
    cout << "a. Everyday man" << endl;
    cout << "b. Most days" << endl;
    cout << "c. Rarely" << endl;
    cout << "d. Never" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c' && res != 'd'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        negativePerson = negativePerson+2; 
    }
    else if (res =='b'){
        negativePerson = negativePerson+1; 
    }
    else if (res == 'c'){        
        positivePerson = positivePerson+1; 
    }
    else {
        positivePerson = positivePerson+2; 
    }

    cout << "Which description fits you best?" << endl;
    cout << "a. I live everyday to the maximum" << endl;
    cout << "b. When will the world ends" << endl;
    cout << "c. I just hate being me" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        positivePerson = positivePerson+2; 
    }
    else if (res =='b'){
        negativePerson = negativePerson+2; 
    }
    else {        
        negativePerson = negativePerson+2; 
    }

    cout << "If someone hit your car, what do you do?" << endl;
    cout << "a. I would be frustrated all day" << endl;
    cout << "b. I would be angry at first" << endl;
    cout << "c. I wouldn't overthink it" << endl;
    cout << "d. I would cancel all my plans and stay home" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c' && res != 'd'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        negativePerson = negativePerson+2; 
    }
    else if (res =='b'){
        negativePerson = negativePerson+1; 
        positivePerson = positivePerson+1;
    }
    else if (res == 'c'){        
        positivePerson = positivePerson+2;
    }
    else {
        negativePerson = negativePerson+3;
    }

    cout << "If you got home and you found out that your door was open. What would you think?" << endl;
    cout << "a. Stupid me I must have forgotten to lock it" << endl;
    cout << "b. I am calling 911 NOW!" << endl;
    cout << "c. I would check around for a bit and then go in" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        silly = silly+1;
    }
    else if (res =='b'){
        serious = serious+1;
    }
    else {        
        silly = silly+1;
        serious = serious+1;
    }

    cout << "If you work at a resturant and you encountred an angry customer who started shouting on you, what would you do" << endl;
    cout << "a. I would kick him out from the first moment" << endl;
    cout << "b. I would shout at him back" << endl;
    cout << "c. I would try to calm him down" << endl;
    cout << "d. I would just ignore him" << endl;
    cout << "e. I would call my supervisor" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c' && res != 'd' && res != 'e'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        silly = silly+2; 
    }
    else if (res =='b'){
        silly = silly+1;
    }
    else if (res == 'c'){        
        serious = serious+2;
    }
    else if (res == 'd'){
        serious = serious+1;
        silly = silly+1;
    }
    else {
        serious = serious+1;
    }

    cout << "If someone mistaken your name, what would you reply?" << endl;
    cout << "a. I would laugh back" << endl;
    cout << "b. I would answer him back" << endl;
    cout << "c. I would correct him" << endl;
    cout << "d. I would get mad" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c' && res != 'd'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        silly = silly+1; 
    }
    else if (res =='b'){
        silly = silly+1;
        serious = serious+1;
    }
    else if (res == 'c'){        
        serious = serious+1;
        silly = silly+1;
    }
    else {
        serious = serious+1;
    }

    cout << "If my friend throw a surprise party for me" << endl;
    cout << "a. I would enjoy it" << endl;
    cout << "b. I would be annoyed but I won't say anything" << endl;
    cout << "c. I would leave the place" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        spontaneous = spontaneous+2;
    }
    else if (res =='b'){
        planner = planner+1;
    }
    else {        
        planner = planner+2;
    }

    cout << "Which descrption fits you best?" << endl;
    cout << "a. I could drive in the street with no destination" << endl;
    cout << "b. When driving I have to be headed somewhere" << endl;
    cout << "c. I rarely drive without a destination in my mind" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a') {
        spontaneous = spontaneous+1;
    }
    else if (res =='b'){
        planner = planner+1;
    }
    else {        
        planner = planner+1;
        spontaneous = spontaneous+1;
    }

    cout << "If you plan to furnish your home, what do you do?" << endl;
    cout << "a. I would check evey furniture store in my area" << endl;
    cout << "b. I would check some furniture stores" << endl;
    cout << "c. I would buy the first piece of furniture I like" << endl;
    cin >> res;
    cout << "\n";
    while( res != 'a' && res != 'b' && res != 'c'){ 
        cout << "That response is invalid! Enter another!" << endl;
        cin >> res;
        cout << endl;
    }
    if (res == 'a'){
        planner = planner+1;
    }
    else if (res =='b'){
        planner = planner+1;
        spontaneous = spontaneous+1;
    }
    else {       
        spontaneous = spontaneous+1;
    }
    cout << endl;

    cout << setw(30) << "RESULTS" << endl; // printing RESULTS
    cout << horizontalLine << endl; //--------------

    //FIGURE RESULTS:
    if (extrovert > introvert){
        cout << "You are an extrovert." << endl;

    }
    else if (extrovert < introvert){
        cout << "You are an introvert." << endl;
    }
    else{
        cout << "You are not an introvert or extrovert." << endl;
    }

    if (positivePerson > negativePerson){
        cout << "You are a positive person." << endl;

    }
    else if (positivePerson < negativePerson){
        cout << "You are a negative person." << endl;
    }
    else{
        cout << "You are not a positive or negative person." << endl;
    }

    if(serious > silly){
        cout << "You are a serious person." << endl;

    }
    else if (serious < silly){
        cout << "You are a silly person." << endl;
    }
    else{
        cout << "You are not a serious or silly person." << endl;
    }

    if(planner > spontaneous){
        cout << "You are a planner." << endl;

    }
    else if (planner < spontaneous){
        cout << "You are a spontaneous person." << endl;
    }
    else{
        cout << "You are not a planner or spontaneous person." << endl;
    }
   cout << horizontalLine << endl; // ------------
   
    cout << "\nRun again? y/n" << endl; // asking the user if he wants to play again
    cin >> answ;
}while(answ == 'Y' || answ == 'y');
cout << endl;

}




