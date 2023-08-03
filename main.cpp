
#include "types.h"
#include <type_traits>
#include <concepts>

// концепт по ТЗ
template <typename T> concept ComplexConcept = (!(std::has_virtual_destructor<T>::value)) && requires(T t) { 
  { t.hash() } -> std::convertible_to<long>;
  { t.toString() } -> std::same_as<std::string>;
};

template<ComplexConcept T> void doNothing(T type){};


int main() {

// компилируется, всё верно
  type1 type1;
  doNothing(type1);

// не компилируется - есть виртуальный деструктор
  type2 type2;
  doNothing(type2);

// не компилируется - нет компонентной функции hash()
  type3 type3;
  doNothing(type3);

// не компилируется - тип компонентной функции toString() не совпадает
  type4 type4;
  doNothing(type4);

  return 0;
}