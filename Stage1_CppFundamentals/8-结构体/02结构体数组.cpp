#include<iostream>
#include<string>

struct students {
	std::string name;
	int age;
	int score;
};

int main02() {
	students arr[3] = {
		{"张三",18,80},
		{"李四",19,60},
		{"王五",20,70}
	};
	arr[2].name = "赵六";
	for (int i = 0; i < std::size(arr); i++) {
		std::cout << "姓名： " << arr[i].name
			<< " 年龄： " << arr[i].age
			<< " 成绩： " << arr[i].score << std::endl;
	}

	return 0;
}