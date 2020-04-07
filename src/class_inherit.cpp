#include <iostream> 
/* input/output functions, such as taking input from a keyboard or printing a 
message */

#include <string>

using namespace std; 
/* can access the functions or other entities included in the std namespace, 
such as functions like cout and cin. If we are not using this line of code, you 
have to mention std:: for accessing functions inside that namespace; for 
example, std::cout is a function to print a message */

class Robot_Class
{
	public:
		int id;
		int no_wheels;

		string robot_name;

		void move_robot();
		void stop_robot();
};

class Robot_Class_Derived: public Robot_Class
{
	public:
		void turn_left();
		void turn_right();
};

void Robot_Class::move_robot()
{
	cout << "Moving Robot" << endl;
}

void Robot_Class::stop_robot()
{
	cout << "Stopping Robot" << endl;
}

void Robot_Class_Derived::turn_left()
{
	cout << "Robot Turn Left" << endl;
}

void Robot_Class_Derived::turn_right()
{
	cout << "Robot Turn Right" << endl;
}

int main()
{
	Robot_Class_Derived robot;

	robot.id = 2;
	robot.robot_name = "Mobile robot";

	cout << "Robot ID: "<< robot.id << endl;
	cout << "Robot Name: " << robot.robot_name << endl;

	robot.move_robot();
	robot.stop_robot();

	robot.turn_left();
	robot.turn_right();

	return 0;
}
