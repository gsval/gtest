//#pragma comment(lib, "Header.h")
//#pragma comment(lib, "gtest.lib")
//#include<iostream>
#include"/gtest/gtest/STL/Header.h"
#include"/gtest/gtest/gtest/gtest.h"

TEST(test_add, can_add_test) {
	// Arrange
	int x = 26, y = -45;
	// Act
	int res = add(x, y);
	// Assert
	EXPECT_GT(res, 1);
}
TEST(test_division, can_div_test) {
	// Arrange
	int x = 6, y = -5;
	// Act
	float res = division(x, y);
	// Assert
	EXPECT_NE(res, -1.2, eps);
}
TEST(test_division, throw_when_try_div_by_zero_test) {
	// Arrange
	int x = 6, y = 0;
	// Act & Assert
	ASSERT_ANY_THROW(division(x, y));
}
TEST(test_division, positive_zero_after_div_zero_on_negative_value_test) {
	// Arrange
	int x = 0, y = -5;
	// Act
	float res = division(x, y);
	// Assert
	EXPECT_EQ(res, 0);
}

//задани€
TEST(test_vec1, can_vec1_0) {
	// Arrange (подготовить все необходимые исходные данные дл€ теста)
	std::vector<int> a = { 0,3,5665,323,78 };
	std::vector<int> c = { 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0 };
	// Act (запустить провер€емый метод или функцию)
	std::vector<int> b = vec1(a); 

	
	// Assert(утверждение, позвол€ющее сверить фактический и желаемый результаты)
	ASSERT_ANY_THROW(b);// проверка на исключение (ожидаем что оно случитс€) 
	// Е (ожидаем, что исключени€ не случитс€)
	ASSERT_NO_THROW(b);

	ASSERT_EQ(b, c); //=
}

TEST(test_vec2, add_vec2) {
	std::vector<int> g(5);
	g = vec2(g);
	for (std::vector<int>::iterator it = g.begin(); it != g.end(); it++) { //добавл€ем итератор
		ASSERT_LT(*it, 100);
		ASSERT_GT(*it, -100);
	}
	
}
TEST(tect_vec3, perem_vec3) {
	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<int> k = vec3(v);

	ASSERT_NE(v, k);

}
TEST(test_vec4, clear_vec4) {
	std::vector<int> e = { 1, 2, 56, 6, 5, 6, 23, 8, 9 };
	std::vector<int> y = vec4(e);
	ASSERT_NE(y, e);
}
TEST(test_vec5, list_vec5) {
	std::vector<int> p= {1, 2, 56, 6, 5, 6, 23, 8, 9 };
	std::vector<int> w = vec5(p,9);
	ASSERT_EQ(p, w);

}