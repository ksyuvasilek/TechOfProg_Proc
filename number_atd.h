#pragma once
#ifndef __number_atd__
#define __number_atd__
// Подключение необходимых типов данных
#include "complex_atd.h"
#include "simple_atd.h"
namespace simple_numbers {
	// структура, обобщающая все имеющиеся числа
	struct number {
		// значения ключей для каждого из числа
		enum key { COMPLEX, SIMPLE };
		key k; // ключ
		// используемые альтернативы
		void* obj; //используем косвенное связывание
	};
} // end simple_numbers namespace
#endif