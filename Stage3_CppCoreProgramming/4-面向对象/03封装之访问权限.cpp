#include <iostream>

//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问	子类可继承父类的保护权限
//私有权限  private    类内可以访问  类外不可以访问 子类不可继承父类的私有权限

class Person
{
public:
	std::string m_name;
protected:
	std::string m_car;
private:
	int m_password;
public:
	void func() {
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};

int main03() {
	Person p1;
	p1.m_name = "李四";
	//p1.m_car = "兰博基尼";	// ×不可访问
	//p1.m_password = 123;	   // ×不可访问
	//p1.func();
	return 0;
}