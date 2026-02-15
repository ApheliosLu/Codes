#include<iostream>
#include <string>

/*
通过结构体创建变量的方式有三种：
	struct 结构体名 变量名
	struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
	定义结构体时顺便创建变量
*/

struct student {
	std::string name;
	int age;
	int score;
}stu3;	// 结构体变量创建方式3

int main01() {
	// 结构体变量创建方式1
	struct student stu1;	// struct关键字可省略
	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;
	std::cout << "姓名： " << stu1.name << " 年龄： " << stu1.age << " 分数： " << stu1.score << std::endl;

	// 结构体变量创建方式2
	student stu2 = { "李四",19 };	// 不初始化默认0
	std::cout << "姓名： " << stu2.name << " 年龄： " << stu2.age << " 分数： " << stu2.score << std::endl;

	//stu3.name = "王五";	// 不初始化默认空
	stu3.score = 80;
	std::cout << "姓名： " << stu3.name << " 年龄： " << stu3.age << " 分数： " << stu3.score << std::endl;

	return 0;
}