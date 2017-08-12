#include <iostream>
#include <string>
#include "student.h"
#include <fstream>

using namespace std;

int main()
{
	student a("Dinith", "Sophomore", 3.62);

	student b("Michael", "Junior", 2.5);

	cout << "Student a: \n" << a;

	cout << "Student b: \n" << b;

	student c = a + b;

	cout << "Student a + b:\n" << c;

	/*
	student a("Michael", "Junior", 2.3);

	cout << a;

	student b;

	cin >> b;

	cout << b;

	student c = a + b;

	cout << c;
	*/
	return 0; //end main
}

/*
#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	student a;

	cin >> a;

	cout << a;

	return 0;
}

#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	student s("Name", 2.0, Junior);
	cout << s;
	student s2("Different Name", 3.0, Sophomore);
	s = s2;

	cout << s;

	return 0;
}
*/
