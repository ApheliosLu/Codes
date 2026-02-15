#include<iostream>

struct students {
	std::string name;
	int age;
	int score;
};

int main03() {
	// 利用操作符 - > 可以通过结构体指针访问结构体属性
	students stu = { "张三",18,100 };
	students* p = &stu;
	stu.age = 19;	// 成员选择（对象）
	p->score = 60;  // 成员选择（指针）
	std::cout << "姓名： " << p->name
		<< " 年龄： " << p->age
		<< " 成绩： " << p->score << std::endl;
	return 0;
}