#ifndef __EMPLOYEE_HPP__
#define __EMPLOYEE_HPP__

#include<iostream>
#include<memory>
#include<string>

/*
class Employee{
public:
	Employee() { name = ""; age = 0; }
	~Employee() = default;
	Employee(std::string p_name, int p_age): name(p_name), age(p_age){};
	std::string getName() const {return this->name;}
	int getAge() const {return this->age;}
	void setName(std::string p_name) {this->name = p_name;}
	void setAge(int p_age) {this->age = p_age;}
	virtual double pay()=0;

protected:
	std::string name;
	int age;
};
*/
//std::ostream& operator<<(std::ostream& out, std::shared_ptr<Employee> emp) {return out << "Name: " << (*emp).getName() << " " << "Age: " << (*emp).getAge() << '\n';}

using std::string;

class employee{
public:
	string getName() const {
		return name;
	}

	int getAge() const {
		return age;
	}

	void setName(const string& name){
		this->name = name; //also to be (*this).name
	}

	void setAge(const int& age){
		this->age = age;
	}

	virtual double pay() const = 0;

	friend std::ostream& operator<<(std::ostream& out, const employee& emp);
protected:
	employee(){
		name = "";
		age = -1;
	}

	string name;
	int age;
};

/*
class HourlyEmployee : public Employee{
public:
	HourlyEmployee() { hours = 0; rate = 0; }
	~HourlyEmployee()=default;
	HourlyEmployee(std::string p_name, int p_age, double p_hours, double p_rate){
		this->name = p_name; this->age = p_age; this->hours = p_hours; this->rate = p_rate;
	}
	double pay(){ return this->hours * this->rate; }

private:
	double hours;
	double rate;
};
*/
//std::ostream& operator<<(std::ostream& out, HourlyEmployee &emp) {return out << "Name: " << (emp).getName() << " " << "Age: " << (emp).getAge() << '\n';}

class hourlyEmployee : public employee{
public:
	hourlyEmployee(){
		rate = 0; hours = 0;
	}

	hourlyEmployee(const std::string& name, const int& age, const double& rate, const double& hours){
		this->name = name; this->age = age; this->rate = rate; this->hours = hours;
	}

	void setHours(const double& hours){
		this->hours = hours;
	}

	void setRate(const double& rate){
		this->rate = rate;
	}

	double pay() const { return (hours * rate); }
private:
	double rate, hours;
};

/*
class SalariedEmployee : public Employee{
public:
	~SalariedEmployee()=default;
	SalariedEmployee(std::string p_name, int p_age, double p_salary) : Employee(p_name, p_age), salary(p_salary){};
	double pay(){return this->salary/12;}
private:
	double salary;
};
//std::ostream& operator<<(std::ostream& out, SalariedEmployee &emp) {return out << "Name: " << (emp).getName() << " " << "Age: " << (emp).getAge() << '\n';}
*/

class salariedEmployee : public employee{
public:
	salariedEmployee(){
		salary = 0;
	}

	salariedEmployee(const std::string& name, const int& age, const double& salary){
		this->name = name; this->age = age; this->salary = salary;
	}

	void setSalary(const double& salary){
		this->salary = salary;
	}

	double pay() const { return (salary / 12); }
private:
	double salary;
};

#endif
