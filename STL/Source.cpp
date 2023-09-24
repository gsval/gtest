#include<iostream>
#include"Header.h"
#include<vector>
#include<time.h>
#include <algorithm>
#include<list>

int add(int a, int b) {
	return a + b;
}
float division(int a, int b) {
	if (b == 0) { // тест
		std::cout << ("Error.Division on zero in function \"div\"!");
	}
	else if (a == 0 && b < 0) { // тест
		return 0;
	}
	else { // тест
		return a / b;
	}
}
std::vector<int> vec1(std::vector <int> f) {
	if (f.empty() != 0)//проверка пустоты вектора(не пустой ли вектор)
		f.clear();
	for (int i = 0; i < 20; i++) {
		f.push_back(0);
	}
	return f;
}
std::vector<int> vec2(std::vector <int> c) {
	srand((unsigned)time(NULL)); 
		for (std::vector<int>::iterator it = c.begin();it!=c.end(); it++){ //добавляем итератор
			*it = (-100) + rand() % 200;
			std::cout << *it << std::endl;
		}
	return c;
		
}
std::vector<int> vec3(std::vector <int> l){

	std::random_shuffle(l.begin(), l.end());
	return l;


}
std::vector<int> vec4(std::vector <int> q) {

	q.clear();
	return q;
}
std::vector<int> vec5(std::vector<int> x,int N) {
	std::vector<int> vec5(N);
	std::vector<int>::iterator it = x.begin();
	for (int i=0; 0 <=i < N;i++) {
		vec5.push_back(*it);
		it++;
		 
		std::cout << *it << std::endl;
	}
	return vec5;

}