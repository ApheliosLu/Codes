#include<iostream>
#include<ctime>

/*
案例描述：

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。
*/

struct student07 {
	std::string sname;
	int score;
};

struct teacher07 {
	std::string tname;
	student07 sArray[5]; 
};

// 给老师和学生赋值的函数
void allocateSpace(teacher07 tArray[], int len) {
	std::string nameSeed = "ABCDE";
	// 给老师赋值
	for (int i = 0; i < len; i++) {
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];	// 字符串拼接
		// 给每个老师带的学生赋值
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sname = "Student_";
			tArray[i].sArray[j].sname += nameSeed[j];
			int random = rand() % 61+40;	// (0~60)+40
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(teacher07 tArray[], int len) {
	for (int i = 0; i < len; i++) {
		std::cout << "老师姓名：" << tArray[i].tname << std::endl;
		for (int j = 0; j < 5; j++) {
			std::cout << "\t学生姓名：" << tArray[i].sArray[j].sname
				<<" 考试分数："<<tArray[i].sArray[j].score
				<<std::endl;
		}
		std::cout << std::endl;
	}
	
}
int main07() {
	// 随机数种子
	srand((unsigned int)time(NULL));

	// 1.创建3名老师的数组
	teacher07 tArray[3];

	// 2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	// 3.打印老师及学生信息
	printInfo(tArray, len);
	return 0;
}