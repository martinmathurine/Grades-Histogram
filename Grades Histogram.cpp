
//	A1. Task 1:

//	University wants to make a basic graphical display to show how many people received 
//	different grades for a piece of work on a module. You are required to write a program 
//	in C++ that achieves this. The program is in a number of parts.

//	1. The program should allow the tutor to enter in the various marks which the students 
//	have been awarded, until the tutor enters in a mark exceeding 100. At this point the 
//	program should display a histogram. Each star represents a student who achieved a 
//	module mark in the range shown.


//	This is an example of the output. The example below shows the distribution of marks 
//	for 20 students. Your program should work with any number of student marks entered.:

//	0 - 29 *** (3)
//	30 - 39 ***** (5)
//	40 - 69 ******** (8)
//	70 - 100 **** (4)

//	*20 students in total.

//	*As the tutor enters each mark, a counter should count the number of student’s marks 
//	which have been entered.


#include <iostream> // library tools
using namespace std; // std toolset

int main(){ // code initialises

		int LIMIT; // an integer variable that declares how many students will be used for the programme.
		cout << "Enter the amount of students you wish to calculate grades: "; // User prompt to input value for variable LIMIT.
		cin >> LIMIT; // Assigns input value to variable LIMIT.

		string name; // prompt for user to enter the student's name

		int A = 0; int B = 0; int C = 0; int D = 0; int GradeScore = 0; // assigns a value for data type int variables' 4 grade boundaries

		int i = 0; // loop-control variable
	    int	sum = 0; // initialised accumulator variable
		int totalGradeScore = 0; // input value

		// Input and sum integer data values.
		for (i = 0; i <= LIMIT; i++) // for loop and user input with a sentinel value set by the user 
		{
		totalGradeScore = totalGradeScore + GradeScore;
		sum++; // counter of the students grades

		//multi-if statement for variable gradescore
		if (GradeScore >= 70 && GradeScore <= 100) {A++;}
		else if (GradeScore >= 40 && GradeScore < 70) {B++;}
		else if (GradeScore >= 30 && GradeScore < 40) {C++;}
		else if (GradeScore >= 0 && GradeScore < 30) {D++;}

		cout << "Enter a student's name: "; // text displayed on screen to user
		cin >> name; // user is now able to enter their name which is now stored in memory
		cout << "Enter " << name << "'s grade score out of 100%: "; // displays prompt including the user's name to enter corresponding grade out of 100%
		cin >> GradeScore; //user is able to enter grade
		}

		cout << "70 - 100: "; // displays grade boundary A
		for (i = 0; i < A; i++){ //for loop
			cout << "*"; // displays counter representing student
		}
		cout << endl;// new line

		cout << "40 - 69: ";
		for (i = 0; i < B; i++){
			cout << "*";
		}
		cout << endl;
	
		cout << "30 - 39: ";
		for (i = 0; i < C; i++){
			cout << "*";
		}
		cout << endl;
	
		cout << "0 - 29: ";
		for (i = 0; i < D; i++){
			cout << "*";
		}
		cout << endl;
	
		cout << "*" << sum << " students in total." << endl; // displays the counter for the amount of students entered 
	

return 0; //code terminates
}




// -------------




//	B2. Task 2:

//	*Use the same 4 category ranges shown here.
//	*Make sure the display is neatly formatted as above.
//	*Your program should make use of ‘loops’ for the display of each category.

//	B. Extras:
//	2. After the histogram, a variety of statistics should be displayed (e.g.average mark 
//	awarded, number of students passing, highest mark, and lowest mark)

//	3. The histogram shows each category horizontally across the screen. Copy your original 
//	solution and make changes to the copy to display the histogram vertically (the stars in
//	a category should go downwards and not across the screen).

//	4. An extra for the very brave! Modify your vertical display program to first ask the 
//	tutor how many categories are required, and the program should then show the display 
//	with the correct categories. (This requires knowledge beyond that covered so far on the module).


#include <iostream> // library tools
using namespace std; // std toolset

int main(){ // code initialises

		int LIMIT; // an integer variable that declares how many students will be used for the programme.
		cout << "Enter the amount of students you wish to calculate grades: "; // User prompt to input value for variable LIMIT.
		cin >> LIMIT; // Assigns input value to variable LIMIT.

		string name; // prompt for user to enter the student's name

		int A = 0; int B = 0; int C = 0; int D = 0; int GradeScore = 0; // assigns a value for data type int variables' 4 grade boundaries

		int i = 0; // loop-control variable
	    int	sum = 0; // initialised accumulator variable
		int totalGradeScore = 0; // input value

		// Input and sum integer data values.
		for (i = 0; i <= LIMIT; i++) // for loop and user input with a sentinel value set by the user 
		{
		totalGradeScore = totalGradeScore + GradeScore;
		sum++; // counter of the students grades

		//multi-if statement for variable gradescore
		if (GradeScore >= 70 && GradeScore <= 100) {A++;}
		else if (GradeScore >= 40 && GradeScore < 70) {B++;}
		else if (GradeScore >= 30 && GradeScore < 40) {C++;}
		else if (GradeScore >= 0 && GradeScore < 30) {D++;}

		cout << "Enter a student's name: "; // text displayed on screen to user
		cin >> name; // user is now able to enter their name which is now stored in memory
		cout << "Enter " << name << "'s grade score out of 100%: "; // displays prompt including the user's name to enter corresponding grade out of 100%
		cin >> GradeScore; //user is able to enter grade
		}

		cout << "70 - 100: "; // displays grade boundary A
		for (i = 0; i < A; i++){ //for loop
			cout << "*"; // displays counter representing student
		}
		cout << endl;// new line

		cout << "40 - 69: ";
		for (i = 0; i < B; i++){
			cout << "*";
		}
		cout << endl;
	
		cout << "30 - 39: ";
		for (i = 0; i < C; i++){
			cout << "*";
		}
		cout << endl;
	
		cout << "0 - 29: ";
		for (i = 0; i < D; i++){
			cout << "*";
		}
		cout << endl;

		int avrgmark;
		avrgmark = totalGradeScore / sum; //the average is calculated between the total grade scores and the amount of students entered
		cout << "*" << sum << " students in total." << endl; // displays the counter for the amount of students entered 
		cout << "*" << avrgmark << " = average mark" << endl; // displays the average mark for the amount of students entered 


return 0; //code terminates
}

