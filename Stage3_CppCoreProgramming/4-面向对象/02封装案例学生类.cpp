#include <iostream>

class Student
{
public:
	// 类中的属性和行为统一称为成员
	// 属性又称成员属性、成员变量
	// 行为又称成员函数、成员方法
	void setName(std::string name) {
		m_name = name;
	}
	void setID(int id) {
		m_id = id;
	}
	void showStudent() {
		std::cout << "name:" << m_name << " ID:" << m_id << std::endl;
	}
public:
	std::string m_name;
	int m_id;
};


int main02() {
	Student stu;
	stu.setName("厄斐琉斯");
	stu.setID(250607);
	stu.m_name = "拉露恩";
	stu.m_id = 123;
	stu.showStudent();

	return 0;
}