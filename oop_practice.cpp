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

  // pair sum(pair obj) {
  //   pair result;
  //   result.a = a + obj.a;
  //   result.b = b + obj.b;
  //   return result;
  // }

  // pair sum(pair obj) {
  //   pair result(a + obj.a, b + obj.b);
  //   return result;
  // }

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

class pairptr {
  int* a;
  int* b;

 public:
  pairptr() : a(new int(0)), b(new int(0)) {}
  pairptr(int _a, int _b) : a(new int(_a)), b(new int(_b)) {}
  ~pairptr() {
    delete a;
    delete b;
  }

  // pair sum(pair obj) {
  //   pair result;
  //   result.a = a + obj.a;
  //   result.b = b + obj.b;
  //   return result;
  // }

  // pair sum(pair obj) {
  //   pair result(a + obj.a, b + obj.b);
  //   return result;
  // }

  // pair sum(pair obj) { return (pair(a + obj.a, b + obj.b)); }
};

//--------------------- 2 лекция

// class Pair {
//   int a, b;
//
//  public:
//   Pair(int a_ = 0, int b_ = 0) : a(a_), b(b_) {}
//
//   friend std::ostream& operator<<(std::ostream& out, const Pair& obj) {
//     out << "a = " << obj.a << " b = " << obj.b;
//     return out;
//   }
// };

class Pair {
  int *a, b;

 public:
  Pair(int a_ = 0, int b_ = 0) : a(new int(a_)), b(b_) {
    std::cout << "Конструктор.";
    print();
  }

  //Pair(const Pair& obj) {
  //  a = new int(*obj.a);
  //  b = obj.b;
  //}

  ~Pair() {
    std::cout << "Деструктор.";
    print();
    delete a;
    a = nullptr;
  }

  void print() {
    std::cout << std::endl << "a = " << *a << " b = " << b << std::endl;
  }

  /*friend std::ostream& operator<<(std::ostream& out, const Pair& obj) {
    out << "a = " << obj.a << " b = " << obj.b;
    return out;
  }*/
};

Pair f() {

  std::cout << "f()" << std::endl;
  Pair y(6, 2);

  return y;
}

// Композиция классов


int main() {
  setlocale(LC_ALL, "Russian");
  // pair X(3, 5), Y(2, 1), Z;
  // pair* x = new pair(3, 5);
  // x->sum(Y);
  // Z = X.sum(Y);

  //--------------------- 2 лекция

  /*Pair x(3, 2);
  Pair y(4, 3);
  std::cout << x << y;*/

  Pair x(3, 5);
  std::cout << "-------\n";
  f();
  std::cout << "-------\n";
}
