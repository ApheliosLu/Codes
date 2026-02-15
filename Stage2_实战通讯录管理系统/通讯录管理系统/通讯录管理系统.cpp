#include<iostream>
#define MAX 1000	// 通讯录最大人数

// 联系人结构体
struct Person {
	std::string m_name;
	int m_sex;	// 性别 1男2女
	int m_age;
	std::string m_phone;	// 电话
	std::string m_Addr;		// 住址
};

// 通讯录结构体
struct Addressbooks {
	Person personArray[MAX];	// 联系人数组
	int m_size;		// 通讯录中人员个数
};

void showMenu() {
	std::cout << "***************************" << std::endl;
	std::cout << "*****  1、添加联系人  *****" << std::endl;
	std::cout << "*****  2、显示联系人  *****" << std::endl;
	std::cout << "*****  3、删除联系人  *****" << std::endl;
	std::cout << "*****  4、查找联系人  *****" << std::endl;
	std::cout << "*****  5、修改联系人  *****" << std::endl;
	std::cout << "*****  6、清空联系人  *****" << std::endl;
	std::cout << "*****  0、退出通讯录  *****" << std::endl;
	std::cout << "***************************" << std::endl;
}

void addPerson(Addressbooks* abs) {
	// 判断电话本是否满了
	if (abs->m_size == MAX) {
		std::cout << "通讯录已满，无法添加" << std::endl;
		return;
	}
	else {

		// 姓名
		std::string name;
		std::cout << "请输入姓名：" << std::endl;
		std::cin >> name;
		abs->personArray[abs->m_size].m_name = name;

		// 性别
		std::cout << "请输入性别：" << std::endl;
		std::cout << "1 -- 男" << std::endl;
		std::cout << "2 -- 女" << std::endl;
		int sex = 0;
		while (true) {
			std::cin >> sex;

			if (std::cin.fail()) {	// 检查输入操作是否失败（如类型不匹配）。
				std::cout << "输入格式错误，请输入数字（1或2）：" << std::endl;
				std::cin.clear(); // 1. 清除错误状态
				std::cin.ignore(10000, '\n'); // 2. 清空输入缓冲区（最多10000个字符，直到遇到换行符）
				continue; // 重新开始循环
			}

			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}

			// 输入了数字但不是1或2
			std::cout << "输入有误，请输入1或2：" << std::endl;
			// 虽然输入了数字，但缓冲区可能还有换行符等，建议清理
			std::cin.ignore(10000, '\n');
		}

		// 年龄
		std::cout << "请输入年龄：" << std::endl;
		int age = 0;
		std::cin >> age;
		abs->personArray[abs->m_size].m_age = age;

		// 联系电话
		std::cout << "请输入联系电话:" << std::endl;
		std::string phone = "";
		std::cin >> phone;
		abs->personArray[abs->m_size].m_phone = phone;

		// 家庭住址
		std::cout << "请输入家庭住址：" << std::endl;
		std::string address;
		std::cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;

		// 更新通讯录人数
		abs->m_size++;

		std::cout << "添加成功" << std::endl;
		system("pause");	// 请按任意键继续
		system("cls");	// 调用控制台命令 cls，清除当前控制台窗口中的所有文本，只留下一个空白的屏幕，光标回到左上角。
	}
}

void showPerson(Addressbooks* abs) {
	if (abs->m_size == 0) {
		std::cout << "当前记录为空" << std::endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			std::cout << "姓名:" << abs->personArray[i].m_name << "\t";
			std::cout << "性别：" << (abs->personArray[i].m_sex == 1 ? "男" : "女") << "\t";
			std::cout << "年龄：" << abs->personArray[i].m_age << "\t";
			std::cout << "电话：" << abs->personArray[i].m_phone << "\t";
			std::cout << "住址：" << abs->personArray[i].m_Addr << std::endl;
		}
	}
	system("pause");
	system("cls");
}

//判断是否存在查询的人员，存在返回在数组中索引位置，不存在返回-1
int isExist(Addressbooks* abs, std::string name) {
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].m_name == name) {
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs) {
	std::cout << "请输入您要删除的联系人:" << std::endl;
	std::string name;
	std::cin >> name;
	int ret = isExist(abs, name);	// abs 在 main 中是对象，需要 & 变成指针；在 deletePerson 中已经是指针，不需要再加 &。
	if (ret != -1) {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];	// 数组元素删除,数据前移
		}
		abs->m_size--;
		std::cout << "删除成功" << std::endl;
	}
	else {
		std::cout << "查无此人" << std::endl;
	}
	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs) {
	std::cout << "请输入您要查找的联系人:" << std::endl;
	std::string name;
	std::cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		std::cout << "姓名:" << abs->personArray[ret].m_name << "\t";
		std::cout << "性别：" << (abs->personArray[ret].m_sex == 1 ? "男" : "女") << "\t";
		std::cout << "年龄：" << abs->personArray[ret].m_age << "\t";
		std::cout << "电话：" << abs->personArray[ret].m_phone << "\t";
		std::cout << "住址：" << abs->personArray[ret].m_Addr << std::endl;
	}
	else {
		std::cout << "查无此人" << std::endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs) {
	std::cout << "请输入您要修改的联系人:" << std::endl;
	std::string name;
	std::cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		std::string name;
		std::cout << "请输入姓名：" << std::endl;
		std::cin >> name;
		abs->personArray[ret].m_name = name;

		std::cout << "请输入性别：" << std::endl;
		std::cout << "1 -- 男" << std::endl;
		std::cout << "2 -- 女" << std::endl;
		int sex = 0;
		while (true) {
			std::cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_sex = sex;
				break;
			}
			std::cout << "输入有误，请重新输入：";
		}

		std::cout << "请输入年龄：" << std::endl;
		int age = 0;
		std::cin >> age;
		abs->personArray[ret].m_age = age;

		std::cout << "请输入联系电话:" << std::endl;
		std::string phone = "";
		std::cin >> phone;
		abs->personArray[ret].m_phone = phone;

		std::cout << "请输入家庭住址：" << std::endl;
		std::string address;
		std::cin >> address;
		abs->personArray[ret].m_Addr = address;

		std::cout << "修改成功" << std::endl;
	}
	else {
		std::cout << "查无此人" << std::endl;
	}
	system("pause");
	system("cls");
}

void clearPerson(Addressbooks* abs) {
	abs->m_size = 0;	// 将通讯录记录的联系人数量置为0，做逻辑清空
	std::cout << "通讯录已清空" << std::endl;
	system("pause");
	system("cls");
}

int main() {

	// 创建通讯录
	Addressbooks abs;
	// 初始化通讯录人员个数
	abs.m_size = 0;

	int select = 0;


	while (true) {

		showMenu();

		std::cin >> select;
		switch (select) {	// 根据用户不同的选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建
		case 1:	//添加联系人
			addPerson(&abs);
			break;
		case 2:	//显示联系人
			showPerson(&abs);
			break;
		case 3: //删除联系人
			/* 测试
			std::cout << "请输入删除联系人姓名： " << std::endl;
			std::string name;
			std::cin >> name;
			if (isExist(&abs, name) == -1) {
				std::cout << "查无此人" << std::endl;
			}
			else {
				std::cout << "找到此人" << std::endl;
			}
			*/
			deletePerson(&abs);
			break;
		case 4:	//查找联系人
			findPerson(&abs);
			break;
		case 5:	//修改联系人
			modifyPerson(&abs);
			break;
		case 6:	//清空联系人
			clearPerson(&abs);
			break;
		case 0:	//退出通讯录
			std::cout << "欢迎下次使用" << std::endl;
			system("pause");
			return 0;	// 执行了 return 0;，这会立即结束整个 main() 函数
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}