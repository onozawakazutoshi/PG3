#include <iostream>
#include <string>
#include <chrono>

//�R�s�[���Ԍv�Z�o��
void measureCopyTime(const std::string& str) {

    //�J�n
    auto start = std::chrono::high_resolution_clock::now();

    //���e�R�s�[
    std::string copy = str;

    //�I��
    auto end = std::chrono::high_resolution_clock::now();

    //���Ԍv�Z
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    //�o��
    std::cout << "�R�s�[�F " << duration << "��s" << std::endl;
}

//�ړ����Ԍv�Z�{�o��
void measureMoveTime(std::string&& str) {

    //�J�n
    auto start = std::chrono::high_resolution_clock::now();

    //���e�ړ�
    std::string moved = std::move(str);

    //�I��
    auto end = std::chrono::high_resolution_clock::now();

    //���Ԍv�Z
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    //�o��
    std::cout << "�ړ��F " << duration << "��s" << std::endl;
}

int main() {

    //������string with 1000,000 'a'
    std::string a(1000000, 'a');

    std::cout << "1000000�������ړ��ƃR�s�[�Ŕ�r" << std::endl;

    //�R�s�[
    measureCopyTime(a);

    //�ړ�
    measureMoveTime(std::move(a));

    return 0;
}