#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include"Employee.h"

int main(){
	//std::vector<std::shared_ptr<Employee> > emps;
	hourlyEmployee h1 ("Aaron Gunther", 20, 20.0, 8.25);
	//HourlyEmployee h2 ("Testing Test", 18, 10.0, 8.25);
	//HourlyEmployee h3 ("Testy MacTesterson", 1, 50.0, 10.00);
	//SalariedEmployee s1("Boaty MacBoatface", 20, 200.0);
	//SalariedEmployee s2 ("Hellow World", 55, 300.0);
	std::shared_ptr<employee> h1ptr(&h1);
	//std::shared_ptr<Employee> h2ptr (&h2);
	//std::shared_ptr<Employee> h3ptr (&h3);
	//std::shared_ptr<Employee> s1ptr (&s1);
	//std::shared_ptr<Employee> s2ptr (&s2);
	/*emps.push_back(h1ptr);
	emps.push_back(h2ptr);
	emps.push_back(h3ptr);
	emps.push_back(s1ptr);
	emps.push_back(s2ptr);*/
	//std::cout << "Information: " << '\n';
	//for(auto sp : emps){
		//std::cout << sp;
	//}
	/*std::cout << "\nCopy of emp's ptrs use_count test\n";
	for(auto sp : emps){
		std::cout << "Number: ";
		std::cout << sp.use_count();
		std::cout<<'\n';
	}
	std::cout<<"\nReference to emp's ptrs use_count test\n";
	for(auto& sp: emps){
		std::cout << "Number: ";
		std::cout << sp.use_count();
		std::cout<<'\n';
	}*/

	std::cout << "break" << '\n';

	return 0;
}
