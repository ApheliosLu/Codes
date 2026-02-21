#include <iostream>

// 优点1:将所有成员属性设置为私有，可以自己控制读写权限
// 优点2:对于写权限，我们可以检测数据的有效性

class Person {
public:	// 通过公有方法对私有属性读写
	void setName(std::string name) {	// 设置姓名
		m_name = name;
	}
	std::string getName() {	// 获取姓名
		return m_name;
	}
	int getAge() {	// 读年龄
		return m_age;
	}
	void setAge(int age) {	// 写年龄
		if (age < 0 || age>150) {	// 优点2
			std::cout << "年龄"<<age<<"输入有误，赋值失败！" << std::endl;
			return;
		}
		m_age = age;
	}
	void setIdol(std::string idol) {	// 写偶像
		m_idol = idol;
	}
private:	// 优点1
	std::string m_name;	// 姓名 可读可写
	int m_age = 18;	// 年龄 只读 也可以写（年龄必须在0到150之间）
	std::string m_idol;	// 偶像 只写
};

int main05() {
	Person p;
	//p.m_name = "张三";
	//std::cout << "姓名：" << p.m_name << std::endl;
	p.setName("张三");
	std::cout << "姓名：" << p.getName() << std::endl;
	//std::cout << "年龄：" << p.getAge() << std::endl;
	p.setIdol("GEM");
	//std::cout << "偶像：" << p.m_idol << std::endl;
	p.setAge(160);
	std::cout << "年龄：" << p.getAge() << std::endl;
	return 0;
}