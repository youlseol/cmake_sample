#include <iostream>
#include <boost/filesystem.hpp>
#include "add.cpp"

int main() {
    boost::filesystem::path p(".");
    boost::filesystem::directory_iterator end_itr;

    // 디렉토리의 모든 파일을 순회합니다.
    for (boost::filesystem::directory_iterator itr(p); itr != end_itr; ++itr) {
        if (boost::filesystem::is_regular_file(itr->path())) {
            std::cout << itr->path().string() << '\n';
        }
    }

    int a = 5;
    int b = 7;
    std::cout << "The sum of " << a << " and " << b << " is " << add(a, b) << '\n';

    return 0;
}