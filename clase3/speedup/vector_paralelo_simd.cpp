#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <iostream>

int main(){
	int repetitions = 200;
	int vsize = 1000;

	std::vector<float> v1(vsize);
	std::vector<float> v2(vsize);

	std::cout << "Entrada: \n";

	for (size_t i = 0; i < vsize; i++) {
        v1[i] = static_cast<float>((rand() % vsize)) / vsize;
        v2[i] = static_cast<float>((rand() % vsize)) / vsize;
        std::cout << "v1[" << i << "] = " << v1[i] << "\n";
        std::cout << "v2[" << i << "] = " << v2[i] << "\n";
	}

	// #pragma omp parallel for
	// #pragma omp parallel      
	for(size_t j = 0; j < repetitions; j++) {
	    std::vector<float> v3(vsize);
	    std::vector<float> v4(vsize);

	    std::cout << "Repeticion #" << j << "\n";

		// Add and multiply random vectors
		#pragma omp simd
	    for(size_t i = 0; i < vsize; i++) {
	          v3[i] = v1[i] + v2[i];
	          v4[i] = v1[i] * v2[i];
	          std::cout << "v3[" << i << "] = " << v3[i] << "\n";
	          std::cout << "v4[" << i << "] = " << v4[i] << "\n";
	    }
	}

	return 0;
}
