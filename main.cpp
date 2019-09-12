//section 9
// Challange
/* 
 * This challenge is about using a collection (list) of integers and allowing the user
 * to select options from a menu to perform operations on the list.
 * 
 * Your program should display a menu options to the user as follows:
 * 
 * P - Print numbers
 * A - Add number
 * M - Display mean of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 * 
* Enter your choice:
 * 
 * The program should only accept valid choices from the user, both upper and lower case selections should 
 * be allowed. If illegal choice is made, you should display, "Unkown selection, please try again" and the menu
 * options should be displayed again.
 * 
 * If 'P' or 'p', display all elements(ints) in the list.
 * if list empty, display "[] - the list is empty"
 * if not empty, display the numbers inside sqarebrackets separated by space "[1 2 3 4 5]"
 * 
 * 
 * if 'A' or 'a', prompt user to add an integer to the list. Add to list and display the number added.
 * example "5 added"
 * 
 * 
 * if 'M' or 'm', calculate the mean or average of the elements of the list and display it.
 * if the list is empty, you should display "Unable to calculate the mean - no data"
 * 
 * if 'S' or 's', display smallest element of the list.
 * example [ 12 3 4 5] should display 3. "The smalles number is 3".
 * if list is empty --> "Unable to determine thge smalles number - list is empty"
 * 
 * if 'L' or 'l', display the largest number. list empty exception here aswell..
 * 
 * 
 * if 'Q' or 'q', it should display "Goodbye" and the program should terminate.
 * 
 * 
 * 
 * use VECTOR.
 * 
 * 
 * 
 * */

#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<int> numberContainer{12, 18, 6};
	char selection{};
	do{
		cout << "P - Print numbers\n";
		cout << "A - Add numbers\n";
		cout << "M - Display the mean of the numbers\n";
		cout << "L - Display the largest number\n";
		cout << "S - Display the smalles number\n";
		cout << "Q - Quit\n" << endl;
		cout << "\nEnter your choice: ";
		cin >> selection;
		
		if(selection == 'P' || selection == 'p'){
			if(numberContainer.size() == 0){
				cout << "[] - the list is empty\n";
			}
			else{
				cout << "[";
				for(auto i: numberContainer){
					cout << i << " ";
					}
				cout << "]" << endl;
			}
		}
		else if(selection == 'A' || selection == 'a'){
			int addNumber{};
			cout << "Enter a number to add: ";
			cin >> addNumber;
			numberContainer.push_back(addNumber);
			cout << addNumber << " was added to the list.\n";
		}
		else if(selection == 'M' || selection == 'm'){
			int total{},average{};
			if(numberContainer.size() != 0){
				for(auto i: numberContainer){
					total += i;
				}
				average = total /(numberContainer.size());
				cout << "The mean of the list is " << average << endl;
			}
			else{
				cout << "Unable to calculate the mean - no data\n";
			}
			
		}
		else if(selection == 'L' || selection == 'l'){
			if(numberContainer.size() != 0){
				int placeHolder = numberContainer.at(0);
				for(unsigned int i = 0; i < numberContainer.size(); i++){
					if(placeHolder > numberContainer.at(i)){
						placeHolder = placeHolder;
					}
					else{
						placeHolder = numberContainer.at(i);
					}
				}
				cout << placeHolder << " is the larges number in the list.\n" << endl;
			}
			else{
				cout << "The list is empty\n";
			}
		}
		else if(selection == 'S' || selection == 's'){
			if(numberContainer.size() != 0){
				int placeHolder = numberContainer.at(0);
				for(unsigned int i = 0; i < numberContainer.size(); i++){
					if(placeHolder < numberContainer.at(i)){
						placeHolder = placeHolder;
					}
					else{
						placeHolder = numberContainer.at(i);
					}
				}
				cout << placeHolder << " is the smallest number in the list.\n" << endl;
			}
			else{
				cout << "The list is empty\n";
			}
		}
		else if(selection == 'Q' || selection == 'q'){
			cout << "Goodbye.\n";
		}
		else
			cout << "Unknown selection - please try again..." << endl;
		
	}while(selection != 'q' && selection != 'Q');
	
	
	
	return 0;
}