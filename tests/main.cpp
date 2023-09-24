//#include<Windows.h>
#include "/gtest/gtest/gtest/gtest.h"


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
	return 0;
}
