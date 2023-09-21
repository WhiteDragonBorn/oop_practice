#include <iostream>
class pair {
  int a;  // нельзя делать присваивание здесь
  int b;

 public:
  // pair() {
  //   a = 0;
  //   b = 0;
  // }
  pair() : a(0), b(0) {}

  // pair(int _a, int _b) {
  //   a = _a;
  //   b = _b;
  // }
  pair(int _a, int _b) : a(_a), b(_b) {}

  // int a = 5 --- копирущая инициализация
  // int a(5)  --- прямая инициализация --- быстрее предыдущей

  pair sum(pair obj) {
    pair result;
    result.a = a + obj.a;
    result.b = b + obj.b;
    return result;
  }

  pair sum(pair obj) {
    pair result(a + obj.a, b + obj.b);
    return result;
  }

  pair sum(pair obj) { return (pair(a + obj.a, b + obj.b)); }
};

class Array {
  int* arr;
  int size;

 public:
  // Array(int _size) {
  //   size = _size;
  //   arr = new int[size];
  //   for (int i = 0; i < size; i++) {
  //     arr[i] = 0;
  //   }
  // }

  Array(int _size) : size(_size), arr(new int[_size]) {
    for (int i = 0; i < _size; i++) {
      arr[i] = 0;
    }
  }
};

class ko {
  const int a;
  int b;

 public:
  ko() : a(0), b(0) {}
  ko(int _a, int _b) : a(_a), b(_b) {}
};

int main() {
  pair X(3, 5), Y(2, 1), Z;
  Z = X.sum(Y);
}
