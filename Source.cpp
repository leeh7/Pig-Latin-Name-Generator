/*********************************************************************
*	Lab Extra Credit Problem X
*	David Lee
*	COMP128-XX
*	12/9/14
**********************************************************************
*	Problem
*
*	FILL ME IN.
*
***********************************************************************
*	Analysis
*
*	Inputs:  LIST ALL INPUTS. first, last name
*
*	Outputs: LIST ALL OUTPUTS. 0 and pig latin name
*
***********************************************************************
*	Pseudocode
*
*	PSEUDOCODE OUTLINE.
input first last name, change names, output names
change names by checking vowel or consonant then erasing or adding appropriately
*
**********************************************************************/

#include <iostream>
#include <string>
using namespace std;
//pre-condition: none
//post-condition: program executed and name changed into Piglatin
//return: 0?
int main()
{
	string first, last;
	char vowels[] = { 'a', 'e' , 'i', 'o', 'u' };
	cout << "Please enter a first name and last name" << endl;
	cin >> first >> last;
	if (first.find_first_of(vowels, 0) != 0)//consonants
	{
		first.front() = tolower(first.front());
		string consonants = first.substr(0, first.find_first_of(vowels, 0));
		first.erase(0, first.find_first_of(vowels, 0));
		first.append(consonants);
		first.append("ay");
		first.front() = toupper(first.front());
	}
	else//vowels
		first.append("way");
	if (last.find_first_of(vowels, 0) != 0)//consonants
	{
		last.front() = tolower(last.front());
		string consonants = last.substr(0, last.find_first_of(vowels, 0));
		last.erase(0, last.find_first_of(vowels, 0));
		last.append(consonants);
		last.append("ay");
		last.front() = toupper(last.front());
	}
	else//vowels
		last.append("way");

	cout << first << " " << last << endl;
	return 0;
}
