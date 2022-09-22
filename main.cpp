// TODO: remove and replace this file header comment
// This is a .cpp file you will edit and turn in.

// Remove starter comments and add your own
// comments on each function and on complex code sections.

#include <iostream>
#include "search.h"
using namespace std;

int main() {
    stirng t1 = "...this is a, line! there are a pluthera of comma's, periods & puncuation through these lines that you're consuming..., hugh, ,";

	string t2 = ",)9We're wanting to see if they're capable, if they're worthy, can they complete the tast. Parse out all of the in correct, and unjust.";

	string t3 = "Whilst keeping the integradey of the interanl structure?";

	cout << "Clean 1: \n" << cleanToken(t1) << endl << endl;

	cout << "Clean 2: \n" << cleanToken(t2) << endl << endl;

	cout << "Clean 3: \n" << cleanToken(t3) << endl << endl;

    return 0;
}

